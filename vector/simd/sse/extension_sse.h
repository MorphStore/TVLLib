/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_SSE_EXTENSION_SSE_H
#define MORPHSTORE_VECTOR_SIMD_SSE_EXTENSION_SSE_H

#include <cstdint>
#include <type_traits>
#include "immintrin.h"

#include "../../vector_extension_structs.h"

namespace vectorlib {
   template<class VectorReg>
   struct sse;

   template<typename T>
   struct sse< v128< T > > {
      static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
      using vector_helper_t = v128<T>;
      using base_t = typename vector_helper_t::base_t;

      using vector_t =
      typename std::conditional<
         (1==1) == std::is_integral<T>::value,    // if T is integer, ugly but it works
         __m128i,
         typename std::conditional<
            (1==1) == std::is_same<float, T>::value, // else if T is float
            __m128,                       //    vector register = __m128
            __m128d                       // else [T == double]: vector register = __m128d
         >::type
      >::type;

      using size = std::integral_constant<size_t, sizeof(vector_t)>;
      using mask_t = uint16_t;
   };

}
#endif //MORPHSTORE_VECTOR_SIMD_SSE_EXTENSION_SSE_H
