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

   //expand (Version 1)
   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 8, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0x000F000E,0x000D000C,0xFFFFFFFF,0xFFFFFFFF,0x000B000A,0x00090008,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0x00050004,0xFFFFFFFF,0xFFFFFFFF,0x00030002,0x00010000), p_vec)
            , _mm512_set_epi32(0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00) ); break;
          case 2: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0x001D001C,0xFFFFFFFF,0xFFFFFFFF,0x001B001A,0x00190018,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0x00150014,0xFFFFFFFF,0xFFFFFFFF,0x00130012,0x00110010), p_vec)
           , _mm512_set_epi32(0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00) ); break;
          default: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0x000F000E,0x000D000C,0xFFFFFFFF,0xFFFFFFFF,0x000B000A,0x00090008,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0x00050004,0xFFFFFFFF,0xFFFFFFFF,0x00030002,0x00010000), p_vec)
            , _mm512_set_epi32(0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00,0xFF07FF06,0xFF05FF04,0xFF03FF02,0xFF01FF00) ); break;
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 8, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00050004,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00030002,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00010000), p_vec)
            , _mm512_set_epi32(0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00) ); break;
          case 2: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x000F000E,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x000D000C,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x000B000A,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00090008), p_vec)
            , _mm512_set_epi32(0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00) ); break;
          case 3: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00150014,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00130012,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00110010), p_vec)
            , _mm512_set_epi32(0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00) ); break;
          case 4: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001D001C,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001B001A,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00190018), p_vec)
            , _mm512_set_epi32(0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00) ); break;
          default: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00050004,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00030002,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00010000), p_vec)
            , _mm512_set_epi32(0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00,0xFFFFFF03,0xFFFFFF02,0xFFFFFF01,0xFFFFFF00) ); break;
        }
      }
   };   

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 8, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0003,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0002,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0001,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0000), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          case 2: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0007,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0006,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0005,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0004), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          case 3: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF000B,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF000A,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0009,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0008), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          case 4: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF000F,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF000E,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF000D,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF000C), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          case 5: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0013,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0012,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0011,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0010), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          case 6: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0017,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0016,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0015,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0014), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          case 7: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF001B,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF001A,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0019,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0018), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          case 8: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF001F,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF001E,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF001D,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF001C), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
          default: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0003,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0002,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0001,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0000), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00,0xFFFFFFFF,0xFFFFFF01,0xFFFFFFFF,0xFFFFFF00) ); break;
        }
      }
   };  

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 16, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFF000F,0xFFFF000E,0xFFFF000D,0xFFFF000C,0xFFFF000B,0xFFFF000A,0xFFFF0009,0xFFFF0008,0xFFFF0007,0xFFFF0006,0xFFFF0005,0xFFFF0004,0xFFFF0003,0xFFFF0002,0xFFFF0001,0xFFFF0000), p_vec)
            , _mm512_set_epi32(0xFFFF1D1C,0xFFFF1918,0xFFFF1514,0xFFFF1110,0xFFFF0D0C,0xFFFF0908,0xFFFF0504,0xFFFF0100,0xFFFF1D1C,0xFFFF1918,0xFFFF1514,0xFFFF1110,0xFFFF0D0C,0xFFFF0908,0xFFFF0504,0xFFFF0100) ); break;
          case 2: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFF001F,0xFFFF001E,0xFFFF001D,0xFFFF001C,0xFFFF001B,0xFFFF001A,0xFFFF0019,0xFFFF0018,0xFFFF0017,0xFFFF0016,0xFFFF0015,0xFFFF0014,0xFFFF0013,0xFFFF0012,0xFFFF0011,0xFFFF0010), p_vec)
           , _mm512_set_epi32(0xFFFF1D1C,0xFFFF1918,0xFFFF1514,0xFFFF1110,0xFFFF0D0C,0xFFFF0908,0xFFFF0504,0xFFFF0100,0xFFFF1D1C,0xFFFF1918,0xFFFF1514,0xFFFF1110,0xFFFF0D0C,0xFFFF0908,0xFFFF0504,0xFFFF0100) ); break;
          default: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFF000F,0xFFFF000E,0xFFFF000D,0xFFFF000C,0xFFFF000B,0xFFFF000A,0xFFFF0009,0xFFFF0008,0xFFFF0007,0xFFFF0006,0xFFFF0005,0xFFFF0004,0xFFFF0003,0xFFFF0002,0xFFFF0001,0xFFFF0000), p_vec)
            , _mm512_set_epi32(0xFFFF1D1C,0xFFFF1918,0xFFFF1514,0xFFFF1110,0xFFFF0D0C,0xFFFF0908,0xFFFF0504,0xFFFF0100,0xFFFF1D1C,0xFFFF1918,0xFFFF1514,0xFFFF1110,0xFFFF0D0C,0xFFFF0908,0xFFFF0504,0xFFFF0100) ); break;
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 16, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFF0007,0xFFFFFFFF,0xFFFF0006,0xFFFFFFFF,0xFFFF0005,0xFFFFFFFF,0xFFFF0004,0xFFFFFFFF,0xFFFF0003,0xFFFFFFFF,0xFFFF0002,0xFFFFFFFF,0xFFFF0001,0xFFFFFFFF,0xFFFF0000), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100) ); break;
          case 2: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFF000F,0xFFFFFFFF,0xFFFF000E,0xFFFFFFFF,0xFFFF000D,0xFFFFFFFF,0xFFFF000C,0xFFFFFFFF,0xFFFF000B,0xFFFFFFFF,0xFFFF000A,0xFFFFFFFF,0xFFFF0009,0xFFFFFFFF,0xFFFF0008), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100) ); break;
          case 3: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFF0017,0xFFFFFFFF,0xFFFF0016,0xFFFFFFFF,0xFFFF0015,0xFFFFFFFF,0xFFFF0014,0xFFFFFFFF,0xFFFF0013,0xFFFFFFFF,0xFFFF0012,0xFFFFFFFF,0xFFFF0011,0xFFFFFFFF,0xFFFF0010), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100) ); break;
          case 4: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFF001F,0xFFFFFFFF,0xFFFF001E,0xFFFFFFFF,0xFFFF001D,0xFFFFFFFF,0xFFFF001C,0xFFFFFFFF,0xFFFF001B,0xFFFFFFFF,0xFFFF001A,0xFFFFFFFF,0xFFFF0019,0xFFFFFFFF,0xFFFF0018), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100) ); break;
          default: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFF0007,0xFFFFFFFF,0xFFFF0006,0xFFFFFFFF,0xFFFF0005,0xFFFFFFFF,0xFFFF0004,0xFFFFFFFF,0xFFFF0003,0xFFFFFFFF,0xFFFF0002,0xFFFFFFFF,0xFFFF0001,0xFFFFFFFF,0xFFFF0000), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100,0xFFFFFFFF,0xFFFF0908,0xFFFFFFFF,0xFFFF0100) ); break;
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 32, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0x000F000E,0xFFFFFFFF,0x000D000C,0xFFFFFFFF,0x000B000A,0xFFFFFFFF,0x00090008,0xFFFFFFFF,0x00070006,0xFFFFFFFF,0x00050004,0xFFFFFFFF,0x00030002,0xFFFFFFFF,0x00010000), p_vec); break;
          case 2: return _mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0x001F001E,0xFFFFFFFF,0x001D001C,0xFFFFFFFF,0x001B001A,0xFFFFFFFF,0x00190018,0xFFFFFFFF,0x00170016,0xFFFFFFFF,0x00150014,0xFFFFFFFF,0x00130012,0xFFFFFFFF,0x00110010), p_vec); break;
          default: return _mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0x000F000E,0xFFFFFFFF,0x000D000C,0xFFFFFFFF,0x000B000A,0xFFFFFFFF,0x00090008,0xFFFFFFFF,0x00070006,0xFFFFFFFF,0x00050004,0xFFFFFFFF,0x00030002,0xFFFFFFFF,0x00010000), p_vec); break;        
        }
      }
   };

   //expand Version 2
   // template<>
   // struct expandOrCompact<avx512<v512<uint64_t>>, 8, 16> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static 
   //    typename avx512<v512<uint16_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint8_t>>::vector_t const & p_vec,
   //       int idx
   //    ){
   //      switch (idx){
   //        case 1: return _mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)); break;
   //        case 2: return _mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0));;break;
   //        default: return _mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0)); break;
   //      }
   //    }
   // };

   // template<>
   // struct expandOrCompact<avx512<v512<uint64_t>>, 8, 32> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static 
   //    typename avx512<v512<uint32_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint8_t>>::vector_t const & p_vec,
   //       int idx
   //    ){
   //      switch (idx){
   //        case 1: return _mm512_unpacklo_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)); break;
   //        case 2: return _mm512_unpackhi_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)); break;
   //        case 3: return _mm512_unpacklo_epi16(_mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)); break;
   //        case 4: return _mm512_unpackhi_epi16(_mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)); break;
   //        default: return _mm512_unpacklo_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)); break;
   //      }
   //    }
   // };

   // template<>
   // struct expandOrCompact<avx512<v512<uint64_t>>, 8, 64> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static 
   //    typename avx512<v512<uint64_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint8_t>>::vector_t const & p_vec,
   //       int idx
   //    ){
   //      switch (idx){
   //        case 1: return _mm512_unpacklo_epi32(_mm512_unpacklo_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 2: return _mm512_unpackhi_epi32(_mm512_unpacklo_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 3: return _mm512_unpacklo_epi32(_mm512_unpackhi_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 4: return _mm512_unpackhi_epi32(_mm512_unpackhi_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;  
   //        case 5: return _mm512_unpacklo_epi32(_mm512_unpacklo_epi16(_mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 6: return _mm512_unpackhi_epi32(_mm512_unpacklo_epi16(_mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 7: return _mm512_unpacklo_epi32(_mm512_unpackhi_epi16(_mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 8: return _mm512_unpackhi_epi32(_mm512_unpackhi_epi16(_mm512_unpackhi_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;      
   //        default: return _mm512_unpacklo_epi32(_mm512_unpacklo_epi16(_mm512_unpacklo_epi8(p_vec, _mm512_set1_epi8(0)), _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //      }
   //    }
   // };   

   // template<>
   // struct expandOrCompact<avx512<v512<uint64_t>>, 16, 32> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static 
   //    typename avx512<v512<uint32_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint16_t>>::vector_t const & p_vec,
   //       int idx
   //    ){
   //      switch (idx){
   //        case 1: return _mm512_unpacklo_epi16(p_vec, _mm512_set1_epi16(0)); break;
   //        case 2: return _mm512_unpackhi_epi16(p_vec, _mm512_set1_epi16(0)); break;
   //        default: return _mm512_unpacklo_epi16(p_vec, _mm512_set1_epi16(0)); break;
   //      }
   //    }
   // };

   // template<>
   // struct expandOrCompact<avx512<v512<uint64_t>>, 16, 64> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static 
   //    typename avx512<v512<uint64_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint16_t>>::vector_t const & p_vec,
   //       int idx
   //    ){
   //      switch (idx){
   //        case 1: return _mm512_unpacklo_epi32(_mm512_unpacklo_epi16(p_vec, _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 2: return _mm512_unpackhi_epi32(_mm512_unpacklo_epi16(p_vec, _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 3: return _mm512_unpacklo_epi32(_mm512_unpackhi_epi16(p_vec, _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        case 4: return _mm512_unpackhi_epi32(_mm512_unpackhi_epi16(p_vec, _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //        default: return _mm512_unpacklo_epi32(_mm512_unpacklo_epi16(p_vec, _mm512_set1_epi16(0)), _mm512_set1_epi32(0)); break;
   //      }
   //    }
   // };

   // template<>
   // struct expandOrCompact<avx512<v512<uint64_t>>, 32, 64> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static 
   //    typename avx512<v512<uint64_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint32_t>>::vector_t const & p_vec,
   //       int idx
   //    ){
   //      switch (idx){
   //        case 1: return _mm512_unpacklo_epi32(p_vec, _mm512_set1_epi32(0)); break;
   //        case 2: return _mm512_unpackhi_epi32(p_vec, _mm512_set1_epi32(0)); break;
   //        default: return _mm512_unpacklo_epi32(p_vec, _mm512_set1_epi32(0)); break;
   //      }
   //    }
   // };


   //compact
   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 16, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){        
          case 1: return _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0x00150014,0x00130012,0x00110010,0x00070006,0x00050004,0x00030002,0x00010000),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0x001D001C,0x001B001A,0x00190018,0x000F000E,0x000D000C,0x000B000A,0x00090008),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF))); break;
          case 2: return _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x00170016,0x00150014,0x00130012,0x00110010,0x00070006,0x00050004,0x00030002,0x00010000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x001F001E,0x001D001C,0x001B001A,0x00190018,0x000F000E,0x000D000C,0x000B000A,0x00090008,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF))); break;
          default: return _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0x00150014,0x00130012,0x00110010,0x00070006,0x00050004,0x00030002,0x00010000),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0x001D001C,0x001B001A,0x00190018,0x000F000E,0x000D000C,0x000B000A,0x00090008),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF))); break;
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 32, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){        
          case 1: return _mm512_or_si512(
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0x00050004,0x00030002,0x00010000),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x000F000E,0x000D000C,0x000B000A,0x00090008),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF))),
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0x00150014,0x00130012,0x00110010),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0x001D001C,0x001B001A,0x00190018),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)))); break;
          case 2: return _mm512_or_si512(
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0x00050004,0x00030002,0x00010000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x000F000E,0x000D000C,0x000B000A,0x00090008,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF))),
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0x00150014,0x00130012,0x00110010,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0x001D001C,0x001B001A,0x00190018,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)))); break;
          case 3: return _mm512_or_si512(
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0x00050004,0x00030002,0x00010000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x000F000E,0x000D000C,0x000B000A,0x00090008,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF))),
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0x00150014,0x00130012,0x00110010,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0x001D001C,0x001B001A,0x00190018,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)))); break;
          case 4: return _mm512_or_si512(
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x00070006,0x00050004,0x00030002,0x00010000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x000F000E,0x000D000C,0x000B000A,0x00090008,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF))),
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x00170016,0x00150014,0x00130012,0x00110010,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x001F001E,0x001D001C,0x001B001A,0x00190018,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF),p_vec), 
            _mm512_set_epi32(0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)))); break;
          default: return _mm512_or_si512(
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00070006,0x00050004,0x00030002,0x00010000),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x000F000E,0x000D000C,0x000B000A,0x00090008),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF))),
            _mm512_or_si512(
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00170016,0x00150014,0x00130012,0x00110010),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF)),
            _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001F001E,0x001D001C,0x001B001A,0x00190018),p_vec), 
            _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0x0C080400,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF)))); break;
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 32, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){        
          case 1: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,0x001E001C,0x001A0018,0x00160014,0x00120010,0x000E000C,0x000A0008,0x00060004,0x00020000), p_vec); break;
          case 2: return _mm512_permutexvar_epi16(_mm512_set_epi32(0x001E001C,0x001A0018,0x00160014,0x00120010,0x000E000C,0x000A0008,0x00060004,0x00020000,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          default: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,0x001E001C,0x001A0018,0x00160014,0x00120010,0x000E000C,0x000A0008,0x00060004,0x00020000), p_vec); break;    
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 64, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){        
          case 1: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001C0018,0x00140010,0x000C0008,0x00040000), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200) ); break;
          case 2: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001C0018,0x00140010,0x000C0008,0x00040000), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF) ); break;
          case 3: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001C0018,0x00140010,0x000C0008,0x00040000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF) ); break;
          case 4: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001C0018,0x00140010,0x000C0008,0x00040000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF) ); break;
          case 5: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001C0018,0x00140010,0x000C0008,0x00040000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF) ); break;
          case 6: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x001C0018,0x00140010,0x000C0008,0x00040000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF) ); break;
          case 7: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x001C0018,0x00140010,0x000C0008,0x00040000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF) ); break;
          case 8: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0x001C0018,0x00140010,0x000C0008,0x00040000,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF), p_vec)
            , _mm512_set_epi32(0x0E0C0A08,0x06040200,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF) ); break;
          default: return _mm512_shuffle_epi8(_mm512_permutexvar_epi16(_mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF), p_vec)
            , _mm512_set_epi32(0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF) ); break;
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 64, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){        
          case 1: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0x001C0018,0x00140010,0x000C0008,0x00040000), p_vec); break;
          case 2: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,0x001C0018,0x00140010,0x000C0008,0x00040000,-1,-1,-1,-1), p_vec); break;
          case 3: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,0x001C0018,0x00140010,0x000C0008,0x00040000,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          case 4: return _mm512_permutexvar_epi16(_mm512_set_epi32(0x001C0018,0x00140010,0x000C0008,0x00040000,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          default: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0x001C0018,0x00140010,0x000C0008,0x00040000), p_vec); break;    
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 64, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){        
          case 1: return _mm512_permutexvar_epi32(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,14,12,10,8,6,4,2,0), p_vec); break;
          case 2: return _mm512_permutexvar_epi32(_mm512_set_epi32(14,12,10,8,6,4,2,0,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          default: return _mm512_permutexvar_epi32(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,14,12,10,8,6,4,2,0), p_vec); break;    
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 8, 8> { //dummy function
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          default: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;  
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 16, 16> { //dummy function
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          default: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;  
        }
      }
   };

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 32, 32> { //dummy function
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          default: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;  
        }
      }
   };   

   template<>
   struct expandOrCompact<avx512<v512<uint64_t>>, 64, 64> { //dummy function
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static 
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec,
         int idx
      ){
        switch (idx){
          case 1: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;
          default: return _mm512_permutexvar_epi16(_mm512_set_epi32(-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1), p_vec); break;  
        }
      }
   };
}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVIES_EXTRACT_AVX512_H */
