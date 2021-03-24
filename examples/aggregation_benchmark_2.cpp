
#include <header/vector_extensions.h>
#include "benchmark.h"

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <string>


template<typename VectorExtension>
static void aggregate(void * array, int size, int * out) {
    /// importing primitives from vectorlib (using namespace vectorlib; would be sufficient, but for clarification purpose one by one)
    using vectorlib::set1;
    using vectorlib::load;
    using vectorlib::add;
    using vectorlib::hadd;
    
    /// This creates convenience typedefs like base_t, vector_element_count etc.
    IMPORT_VECTOR_BOILER_PLATE(VectorExtension)
    
    size_t const vectorCount = size / vector_element_count::value;
    size_t const remainderCount = size % vector_element_count::value;
    base_t * dataPtr = (base_t *) array;
    
    /// fill state register
    vector_t resultVec = set1<VectorExtension>(0);// = setzero<VectorExtension>( );
    
    /// process each vector
    for (size_t i = 0; i < vectorCount; ++ i) {
        /// load into buffer register, then add to state
        resultVec = add<VectorExtension>(
          resultVec, load<VectorExtension, vectorlib::iov::UNALIGNED>(dataPtr)
        );
        dataPtr += vector_element_count::value;
    }
    
    /// horizontal add from state register into base type
    base_t result = hadd<VectorExtension>(resultVec);
    
    /// process remainder
    if (remainderCount != 0) {
        base_t const * remainderPtr = dataPtr;
        for (size_t i = 0; i < remainderCount; ++ i) {
            result += *remainderPtr ++;
        }
    }
    
    *out = result;
    return;
}

int main(void) {
    using namespace vectorlib;
    
    std::string variant;
    
    #ifdef SCALAR
    /// 8 bit variant
//    using VectorExtension = scalar<v64<uint8_t>>;
    /// 16 bit variant
//    using VectorExtension = scalar<v64<uint16_t>>;
    /// 32 bit variant
//    using VectorExtension = scalar<v64<uint32_t>>;
    /// 64 bit variant
    using VectorExtension = scalar<v64<uint64_t>>;
    variant = "SCALAR";
    #endif
    #ifdef SSE
    /// 32 bit variant
    using VectorExtension = sse<v128<uint32_t>>;
    /// 64 bit variant
//    using VectorExtension = sse<v128<uint64_t>>;
    variant = "SSE";
    #endif
    #ifdef AVXTWO
    /// 32 bit variant
//    using VectorExtension = avx2<v256<uint32_t>>;
    /// 64 bit variant
    using VectorExtension = avx2<v256<uint64_t>>;
    variant = "AVX2";
    #endif
    #ifdef AVX512
    using VectorExtension = avx512<v512<uint64_t> >;
    variant = "AVX512";
    #endif
    #ifdef TSUBASA
    using VectorExtension = tsubasa<v16384<uint64_t> >;
    variant = "TSUBASA";
    #endif
    
    std::cout << "Running " << variant << " variant." << std::endl;
    
    /// This creates convenience typedefs like base_t, vector_element_count etc.
    IMPORT_VECTOR_BOILER_PLATE(VectorExtension)
    
    /// element count // size of our "column"
    int size = 25600000;
    auto array = new base_t[size];
    
    srand(time(NULL));
    
    /// fill our column
    for (int i = 0; i < size; i ++) array[i] = rand() % 100;
    int out = 0;
    
    std::cout << "Aggregation started...\n";
    
    benchmark([&] { aggregate<VectorExtension>(array, size, &out); }, 10);
    
    std::cout << "Done.\n Result: " << out << std::endl << std::endl;
    
    
}
