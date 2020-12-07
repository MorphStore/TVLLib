/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_EXTENSION_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_EXTENSION_AVX512_H

#include <cstdint>
#include <type_traits>
#include "immintrin.h"

#include "../../vector_extension_structs.h"

namespace vectorlib{
   template<class VectorReg>
   struct avx512;

   template<typename T>
   struct avx512< v512< T > > {
      static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
      using vector_helper_t = v512<T>;
      using base_t = typename vector_helper_t::base_t;
	  
      using vector_t =
      typename std::conditional<
         (1==1) == std::is_integral<T>::value,    // if T is integer
         __m512i,                       //    vector register = __m128i
         typename std::conditional<
            (1==1) == std::is_same<float, T>::value, // else if T is float
            __m512,                       //    vector register = __m128
            __m512d                       // else [T == double]: vector register = __m128d
         >::type
      >::type;

      using size = std::integral_constant<size_t, sizeof(vector_t)>;
      using mask_t = 
        typename std::conditional< 
          (bool) (sizeof(base_t) > 2), 
          uint16_t, 
            typename std::conditional< 
              (bool) (sizeof(base_t) > 1), 
              uint32_t, 
              uint64_t
          >::type
        >::type;     
       
   };
   
      template<typename T>
      struct avx512< v256< T > > {
      static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
      using vector_helper_t = v256<T>;
      using base_t = typename vector_helper_t::base_t;
	  
      using vector_t =
      typename std::conditional<
         (1==1) == std::is_integral<T>::value,    // if T is integer
         __m256i,                       //    vector register = __m128i
         typename std::conditional<
            (1==1) == std::is_same<float, T>::value, // else if T is float
            __m256,                       //    vector register = __m128
            __m256d                       // else [T == double]: vector register = __m128d
         >::type
      >::type;

      using size = std::integral_constant<size_t, sizeof(vector_t)>;
      using mask_t = 
        typename std::conditional< 
          (bool) (sizeof(base_t) > 1), 
          uint16_t, 
          uint32_t
        >::type;     
       
   };
   
      template<typename T>
      struct avx512< v128< T > > {
      static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
      using vector_helper_t = v128<T>;
      using base_t = typename vector_helper_t::base_t;
	  
      using vector_t =
      typename std::conditional<
         (1==1) == std::is_integral<T>::value,    // if T is integer
         __m128i,                       //    vector register = __m128i
         typename std::conditional<
            (1==1) == std::is_same<float, T>::value, // else if T is float
            __m128,                       //    vector register = __m128
            __m128d                       // else [T == double]: vector register = __m128d
         >::type
      >::type;

      using size = std::integral_constant<size_t, sizeof(vector_t)>;
      using mask_t = uint16_t;
   };
   
   //For some reason gcc doesn't find this function, so we took it directly from avx512fintrin.h    
extern __inline __m512i
__attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm512_set_epi8 (char __q63, char __q62, char __q61, char __q60,
		 char __q59, char __q58, char __q57, char __q56,
		 char __q55, char __q54, char __q53, char __q52,
		 char __q51, char __q50, char __q49, char __q48,
		 char __q47, char __q46, char __q45, char __q44,
		 char __q43, char __q42, char __q41, char __q40,
		 char __q39, char __q38, char __q37, char __q36,
		 char __q35, char __q34, char __q33, char __q32,
		 char __q31, char __q30, char __q29, char __q28,
		 char __q27, char __q26, char __q25, char __q24,
		 char __q23, char __q22, char __q21, char __q20,
		 char __q19, char __q18, char __q17, char __q16,
		 char __q15, char __q14, char __q13, char __q12,
		 char __q11, char __q10, char __q09, char __q08,
		 char __q07, char __q06, char __q05, char __q04,
		 char __q03, char __q02, char __q01, char __q00)
{
  return __extension__ (__m512i)(__v64qi){
    __q00, __q01, __q02, __q03, __q04, __q05, __q06, __q07,
    __q08, __q09, __q10, __q11, __q12, __q13, __q14, __q15,
    __q16, __q17, __q18, __q19, __q20, __q21, __q22, __q23,
    __q24, __q25, __q26, __q27, __q28, __q29, __q30, __q31,
    __q32, __q33, __q34, __q35, __q36, __q37, __q38, __q39,
    __q40, __q41, __q42, __q43, __q44, __q45, __q46, __q47,
    __q48, __q49, __q50, __q51, __q52, __q53, __q54, __q55,
    __q56, __q57, __q58, __q59, __q60, __q61, __q62, __q63
  };
}

}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_EXTENSION_AVX512_H */

