/**
 * @file extension_tsubasa.h
 * @brief Brief description
 * @author Johannes Pietrzyk, Wilhelm Mundt
 * @todo TODOS?
 */

#ifndef MORPHSTORE_VECTOR_VECPROCESSOR_TSUBASA_EXTENSION_TSUBASA_H
#define MORPHSTORE_VECTOR_VECPROCESSOR_TSUBASA_EXTENSION_TSUBASA_H

#include <cstdint>
#include <type_traits>
#include "velintrin.h"

#include <header/vector_extension_structs.h>

namespace vectorlib {
   template<class VectorReg>
   struct tsubasa;

   template<typename T>
   struct tsubasa< v16384< T > > {
      static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
      using vector_helper_t = v16384<T>;

      using base_t = typename vector_helper_t::base_t;

      using vector_t = __vr;
      using size = std::integral_constant<size_t, sizeof(vector_t)>;
      using mask_t = typename std::conditional< sizeof(T) == sizeof(int32_t) , __vm512,  __vm256>::type;
      
      using is_scalable = std::integral_constant<bool, true>;
      
   };

}
#endif //MORPHSTORE_VECTOR_VECPROCESSOR_TSUBASA_EXTENSION_TSUBASA_H
