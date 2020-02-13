/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   extract_avx512.h
 * Author: Annett
 *
 * Created on 25. April 2019, 14:00
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVIES_EXTRACT_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVIES_EXTRACT_AVX512_H


#include "../../../preprocessor.h"
#include "../extension_avx512.h"
#include "../../../primitives/extract.h"

#include <functional>

namespace vectorlib {


   template<typename T>
   struct extract<avx512<v512<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::base_t
      extract_value( avx512< v512< uint64_t > >::vector_t p_vec, int idx) {
#if tally
extract_simd += 1;
#endif
         
         switch (idx){
             case 0: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 5: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 6: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 7: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),3); break;
         }
         return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),0);
      }
   };

   template<typename T>
   struct extract<avx512<v512<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::base_t
      extract_value( avx512< v512< uint64_t > >::vector_t p_vec, int idx) {
#if tally
extract_simd += 1;
#endif
         
         switch (idx){
             case 0: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),4); break;
             case 5: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),5); break;
             case 6: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),6); break;
             case 7: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),7); break;
             case 8: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 9: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 10: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 11: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),3); break;
             case 12: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),4); break;
             case 13: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),5); break;
             case 14: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),6); break;
             case 15: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),7); break;
         }
         return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),0);
     }
   };
   //not tested
   template<typename T>
   struct extract<avx512<v512<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::base_t
      extract_value( avx512< v512< uint64_t > >::vector_t p_vec, int idx) {
#if tally
extract_simd += 1;
#endif
         
         switch (idx){
             case 0: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),4); break;
             case 5: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),5); break;
             case 6: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),6); break;
             case 7: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),7); break;
             case 8: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),8); break;
             case 9: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),9); break;
             case 10: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),10); break;
             case 11: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),11); break;
             case 12: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),12); break;
             case 13: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),13); break;
             case 14: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),14); break;
             case 15: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),15); break;
             case 16: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 17: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 18: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 19: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),3); break;
             case 20: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),4); break;
             case 21: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),5); break;
             case 22: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),6); break;
             case 23: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),7); break;
             case 24: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),8); break;
             case 25: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),9); break;
             case 26: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),10); break;
             case 27: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),11); break;
             case 28: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),12); break;
             case 29: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),13); break;
             case 30: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),14); break;
             case 31: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),15); break;
         }
         return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),0);
     }
   };

   //not tested
   template<typename T>
   struct extract<avx512<v512<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::base_t
      extract_value( avx512< v512< uint64_t > >::vector_t p_vec, int idx) {
#if tally
extract_simd += 1;
#endif
         
         switch (idx){
             case 0: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),4); break;
             case 5: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),5); break;
             case 6: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),6); break;
             case 7: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),7); break;
             case 8: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),8); break;
             case 9: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),9); break;
             case 10: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),10); break;
             case 11: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),11); break;
             case 12: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),12); break;
             case 13: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),13); break;
             case 14: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),14); break;
             case 15: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),15); break;
             case 16: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),16); break;
             case 17: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),17); break;
             case 18: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),18); break;
             case 19: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),19); break;
             case 20: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),20); break;
             case 21: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),21); break;
             case 22: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),22); break;
             case 23: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),23); break;
             case 24: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),24); break;
             case 25: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),25); break;
             case 26: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),26); break;
             case 27: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),27); break;
             case 28: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),28); break;
             case 29: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),29); break;
             case 30: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),30); break;
             case 31: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),31); break;
             case 32: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 33: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 34: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 35: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),3); break;
             case 36: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),4); break;
             case 37: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),5); break;
             case 38: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),6); break;
             case 39: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),7); break;
             case 40: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),8); break;
             case 41: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),9); break;
             case 42: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),10); break;
             case 43: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),11); break;
             case 44: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),12); break;
             case 45: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),13); break;
             case 46: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),14); break;
             case 47: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),15); break;
             case 48: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),16); break;
             case 49: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),17); break;
             case 50: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),18); break;
             case 51: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),19); break;
             case 52: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),20); break;
             case 53: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),21); break;
             case 54: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),22); break;
             case 55: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),23); break;
             case 56: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),24); break;
             case 57: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),25); break;
             case 58: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),26); break;
             case 59: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),27); break;
             case 60: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),28); break;
             case 61: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),29); break;
             case 62: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),30); break;
             case 63: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),31); break;
         }
         return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0);
     }
   };
}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVIES_EXTRACT_AVX512_H */
