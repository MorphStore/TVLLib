#include <iostream>
#include <cstdint>
#include <header/vector_extension_structs.h>
#include <header/vector_primitives.h>

using namespace vectorlib;

int main( void ) {

   // using ve = tsubasa<v16384<uint64_t> >;
    using ve = avx2<v256<uint64_t> >;
   // using ve = scalar<v64<uint64_t> >;

    IMPORT_VECTOR_BOILER_PLATE(ve)    
    
    std::cout << "Test started...\n ";
    std::cout.flush();

    vector_t v1= set1<ve, vector_base_t_granularity::value>(1);
    vector_t v2= set1<ve, vector_base_t_granularity::value>(2);
    vector_t result = add< ve, vector_base_t_granularity::value >(v1, v2);
    base_t result2 = hadd< ve, vector_base_t_granularity::value >(result);
    base_t result3 = hadd< ve, vector_base_t_granularity::value >(sub< ve, vector_base_t_granularity::value >(result, v1));
    base_t result4 = hadd< ve, vector_base_t_granularity::value >(mul< ve, vector_base_t_granularity::value >(result, v1));
    base_t result5 = hadd< ve, vector_base_t_granularity::value >(vectorlib::div< ve, vector_base_t_granularity::value >(result, v1));

    std::cout << "done.\n Result 1 (add): " << result2 << std::endl;
    std::cout << "done.\n Result 2 (sub): " << result3 << std::endl;
    std::cout << "done.\n Result 3 (mul): " << result4 << std::endl;
    std::cout << "done.\n Result 4 (div): " << result5 << std::endl;
    
    return 0;
}