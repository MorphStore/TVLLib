/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#include "vector/vector_extension_structs.h"
#include "vector/vector_primitives.h"
#include "benchmark.h"

#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <ctime>

static void aggregate( void * array, int size, int * out){

  using namespace vectorlib;
  
  //using VectorExtension = scalar<v16<uint16_t>>;
  using VectorExtension = sse<v128<uint64_t>>;
  //using VectorExtension = avx2<v256<uint32_t>>;
  IMPORT_VECTOR_BOILER_PLATE(VectorExtension)
  
  size_t const vectorCount = size / vector_element_count::value;
  size_t const remainderCount = size % vector_element_count::value;
  base_t const * dataPtr = (base_t*) array;
  vector_t resultVec = set1<VectorExtension,vector_base_t_granularity::value>(0);// = setzero<VectorExtension>( );
      
  for( size_t i = 0; i < vectorCount; ++i ) {
         resultVec = add<VectorExtension, vector_base_t_granularity::value>::apply(
            resultVec, load<VectorExtension,vectorlib::iov::UNALIGNED, vector_size_bit::value>( dataPtr )
         );
         dataPtr += vector_element_count::value;
  }

  base_t result = hadd<VectorExtension,vector_base_t_granularity::value>::apply( resultVec );

  if( remainderCount != 0) {
     base_t const * remainderPtr = dataPtr;
     for( size_t i = 0; i < remainderCount; ++i ) {
        result += *remainderPtr++;
     }
  }

  *out=result;
  return;
}

int main (void){
  using namespace vectorlib;
  
  //using VectorExtension = scalar<v16<uint16_t>>;
  using VectorExtension = sse<v128<uint64_t>>;
  //using VectorExtension = avx2<v256<uint32_t>>;
  IMPORT_VECTOR_BOILER_PLATE(VectorExtension)

   
    int size= 10000000;
    auto array =  new base_t[size];
   
    srand(time(NULL));
    
    for (int i=0;i<size;i++) array[i]=rand()%100;
    int out=0;
    
    std::cout << "Aggregation started... ";
           
    benchmark([&] { aggregate(array, size, &out); }, 10);
   
    std::cout << "done.\n Result: "<< out << std::endl << std::endl;
    
      
}
