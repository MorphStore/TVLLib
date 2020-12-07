/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_LOGIC_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_LOGIC_AVX512_H

#include "../../../preprocessor.h"
#include "../extension_avx512.h"
#include "../../../primitives/logic.h"


namespace vectorlib {


   template<typename T>
   struct logic<avx512<v512<T>>, avx512<v512<T>>::vector_helper_t::size_bit::value > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      bitwise_and( typename avx512<v512<T>>::vector_t const & p_In1, typename avx512<v512<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm512_and_si512( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<T>>::vector_t
      bitwise_or( typename avx512<v512<T>>::vector_t const & p_In1, typename avx512<v512<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm512_or_si512( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<T>>::vector_t
      bitwise_xor( typename avx512<v512<T>>::vector_t const & p_In1, typename avx512<v512<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm512_xor_si512( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<T>>::vector_t
      bitwise_andnot( typename avx512<v512<T>>::vector_t const & p_In1, typename avx512<v512<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm512_andnot_si512( p_In1, p_In2 );
      }
   };

   template<typename T>
   struct logic<avx512<v256<T>>, avx512<v256<T>>::vector_helper_t::size_bit::value > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint64_t>>::vector_t
      bitwise_and( typename avx512<v256<T>>::vector_t const & p_In1, typename avx512<v256<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm256_and_si256( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<T>>::vector_t
      bitwise_or( typename avx512<v256<T>>::vector_t const & p_In1, typename avx512<v256<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm256_or_si256( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<T>>::vector_t
      bitwise_xor( typename avx512<v256<T>>::vector_t const & p_In1, typename avx512<v256<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm256_xor_si256( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<T>>::vector_t
      bitwise_andnot( typename avx512<v256<T>>::vector_t const & p_In1, typename avx512<v256<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm256_andnot_si256( p_In1, p_In2 );
      }
   };


   template<typename T>
   struct logic<avx512<v128<T>>, avx512<v128<T>>::vector_helper_t::size_bit::value > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint64_t>>::vector_t
      bitwise_and( typename avx512<v128<T>>::vector_t const & p_In1, typename avx512<v128<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm_and_si128( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<T>>::vector_t
      bitwise_or( typename avx512<v128<T>>::vector_t const & p_In1, typename avx512<v128<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm_or_si128( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<T>>::vector_t
      bitwise_xor( typename avx512<v128<T>>::vector_t const & p_In1, typename avx512<v128<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm_xor_si128( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<T>>::vector_t
      bitwise_andnot( typename avx512<v128<T>>::vector_t const & p_In1, typename avx512<v128<T>>::vector_t const & p_In2) {
#if tally
logic_simd += 1;
#endif
         return _mm_andnot_si128( p_In1, p_In2 );
      }
   };


}
#endif //MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_LOGIC_AVX512_H
