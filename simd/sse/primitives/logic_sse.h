//
// Created by jpietrzyk on 20.05.19.
//

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
   };


}
#endif //MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_LOGIC_SSE_H
