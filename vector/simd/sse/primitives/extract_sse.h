/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   extract_sse.h
 * Author: Annett
 *
 * Created on 25. April 2019, 14:01
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_EXTRACT_SSE_H
#define MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_EXTRACT_SSE_H

#include "../../../preprocessor.h"
#include "../extension_sse.h"
#include "../../../primitives/extract.h"

#include <functional>

namespace vectorlib {


   template<typename T>
   struct extract<sse<v128<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::base_t
      extract_value( sse< v128< uint64_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm_extract_epi64(p_vec,0); break;
             case 1: return _mm_extract_epi64(p_vec,1); break;
         }
         return (typename sse< v128< U > >::base_t)0;
      }
   };

      template<typename T>
   struct extract<sse<v128<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::base_t
      extract_value( sse< v128< uint64_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm_extract_epi32(p_vec,0); break;
             case 1: return _mm_extract_epi32(p_vec,1); break;
             case 2: return _mm_extract_epi32(p_vec,2); break;
             case 3: return _mm_extract_epi32(p_vec,3); break;
         }
         return (typename sse< v128< U > >::base_t)0;
      }
   };

      template<typename T>
   struct extract<sse<v128<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::base_t
      extract_value( sse< v128< uint64_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm_extract_epi16(p_vec,0); break;
             case 1: return _mm_extract_epi16(p_vec,1); break;
             case 2: return _mm_extract_epi16(p_vec,2); break;
             case 3: return _mm_extract_epi16(p_vec,3); break;
             case 4: return _mm_extract_epi16(p_vec,4); break;
             case 5: return _mm_extract_epi16(p_vec,5); break;
             case 6: return _mm_extract_epi16(p_vec,6); break;
             case 7: return _mm_extract_epi16(p_vec,7); break;
         }
         return (typename sse< v128< U > >::base_t)0;
      }
   };
      template<typename T>
   struct extract<sse<v128<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::base_t
      extract_value( sse< v128< uint64_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm_extract_epi8(p_vec,0); break;
             case 1: return _mm_extract_epi8(p_vec,1); break;
             case 2: return _mm_extract_epi8(p_vec,2); break;
             case 3: return _mm_extract_epi8(p_vec,3); break;
             case 4: return _mm_extract_epi8(p_vec,4); break;
             case 5: return _mm_extract_epi8(p_vec,5); break;
             case 6: return _mm_extract_epi8(p_vec,6); break;
             case 7: return _mm_extract_epi8(p_vec,7); break;
             case 8: return _mm_extract_epi8(p_vec,8); break;
             case 9: return _mm_extract_epi8(p_vec,9); break;
             case 10: return _mm_extract_epi8(p_vec,10); break;
             case 11: return _mm_extract_epi8(p_vec,11); break;
             case 12: return _mm_extract_epi8(p_vec,12); break;
             case 13: return _mm_extract_epi8(p_vec,13); break;
             case 14: return _mm_extract_epi8(p_vec,14); break;
             case 15: return _mm_extract_epi8(p_vec,15); break;
         }
         return (typename sse< v128< U > >::base_t)0;
      }
   };

}
#endif /* MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_EXTRACT_SSE_H */