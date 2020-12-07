/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/
#ifndef MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_LOGIC_SSE_H
#define MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_LOGIC_SSE_H

#include "../../../preprocessor.h"
#include "../extension_sse.h"
#include "../../../primitives/logic.h"


namespace vectorlib {


   template<typename T>
   struct logic<sse<v128<T>>, sse<v128<T>>::vector_helper_t::size_bit::value > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<T>>::vector_t
      bitwise_and( typename sse<v128<T>>::vector_t const & p_In1, typename sse<v128<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SIMD
         return _mm_and_si128( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<T>>::vector_t
      bitwise_or( typename sse<v128<T>>::vector_t const & p_In1, typename sse<v128<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SIMD
         return _mm_or_si128( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<T>>::vector_t
      bitwise_xor( typename sse<v128<T>>::vector_t const & p_In1, typename sse<v128<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SIMD
         return _mm_xor_si128( p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<T>>::vector_t
      bitwise_andnot( typename sse<v128<T>>::vector_t const & p_In1, typename sse<v128<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SIMD
         return _mm_andnot_si128( p_In1, p_In2 );
      }
   };


}
#endif //MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_LOGIC_SSE_H
