
#ifndef MORPHSTORE_VECTOR_GPU_EXTENSION_GPU_H
#define MORPHSTORE_VECTOR_GPU_EXTENSION_GPU_H

#include <cstdint>
#include <type_traits>
//#include <immintrin.h>
#include<cuda.h>
#include<cuda_runtime.h>
#include <functional>

#include "vector_extension_structs.h"

//quadro rtx 8000. 72 multiproc, 64 cuda core/MP -> 4608 cuda cores
namespace vectorlib {

    template<class VectorReg>
    struct cuda;
    template<typename T>
    struct cuda< v294912< T > > {
    static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
    using vector_helper_t = v294912<T>;
    using base_t = typename vector_helper_t::base_t;
    using element_count   = std::integral_constant<size_t, 4608>;

    using vector_t = T*;

    using size = std::integral_constant<size_t, 4608*sizeof(uint64_t)>;

    using mask_t =  uint64_t*;




};

}

#endif //MORPHSTORE_VECTOR_GPU_EXTENSION_GPU_H