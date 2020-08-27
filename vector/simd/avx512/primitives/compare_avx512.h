/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   compare_avx512.h
 * Author: Annett
 *
 * Created on 23. April 2019, 16:57
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_COMPARE_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_COMPARE_AVX512_H


#include "../../../preprocessor.h"
#include "../extension_avx512.h"
#include "../../../primitives/compare.h"

#include <functional>

namespace vectorlib{
   template<>
   struct equal<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint64_t>>::mask_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpeq_epi64_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v256<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v256<uint64_t>>::mask_t
      apply(
         typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint64_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm256_cmpeq_epi64_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v128<uint64_t>>::mask_t
      apply(
         typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint64_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm_cmpeq_epi64_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct less<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint64_t>>::mask_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmplt_epi64_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct lessequal<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint64_t>>::mask_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmple_epi64_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct greater<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint64_t>>::mask_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpgt_epi64_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct greaterequal<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint64_t>>::mask_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpge_epi64_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct count_matches<avx512<v512<uint64_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v512<uint64_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v256<uint64_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v256<uint64_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v128<uint64_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v128<uint64_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   //the functions below are not tested

   template<>
   struct equal<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint32_t>>::mask_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpeq_epi32_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v256<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v256<uint32_t>>::mask_t
      apply(
         typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint32_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm256_cmpeq_epi32_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v128<uint32_t>>::mask_t
      apply(
         typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint32_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm_cmpeq_epi32_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct less<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint32_t>>::mask_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmplt_epi32_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct lessequal<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint32_t>>::mask_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmple_epi32_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct greater<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint32_t>>::mask_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpgt_epi32_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct greaterequal<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint32_t>>::mask_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
       
         return _mm512_cmpge_epi32_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct count_matches<avx512<v512<uint32_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v512<uint32_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
       
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v256<uint32_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v256<uint32_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
       
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v128<uint32_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v128<uint64_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
       
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct equal<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint16_t>>::mask_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpeq_epi16_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v256<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v256<uint16_t>>::mask_t
      apply(
         typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint16_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm256_cmpeq_epi32_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v128<uint16_t>>::mask_t
      apply(
         typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint16_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm_cmpeq_epi16_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct less<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint16_t>>::mask_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmplt_epi16_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct lessequal<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint16_t>>::mask_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmple_epi16_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct greater<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint16_t>>::mask_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpgt_epi16_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct greaterequal<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint16_t>>::mask_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpge_epi16_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct count_matches<avx512<v512<uint16_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v512<uint16_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v256<uint16_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v256<uint16_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v128<uint16_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v128<uint16_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct equal<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint8_t>>::mask_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmpeq_epi8_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v256<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v256<uint8_t>>::mask_t
      apply(
         typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint8_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm256_cmpeq_epi8_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct equal<avx512<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v128<uint8_t>>::mask_t
      apply(
         typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint8_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm_cmpeq_epi8_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct less<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint8_t>>::mask_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmplt_epi8_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct lessequal<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint8_t>>::mask_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
         
         return _mm512_cmple_epi8_mask(p_vec1, p_vec2);
      }
   };

   template<>
   struct greater<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint8_t>>::mask_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
       
         return _mm512_cmpgt_epi8_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct greaterequal<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512<v512<uint8_t>>::mask_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ) {
#if tally
compare_simd += 1;
#endif
       
         return _mm512_cmpge_epi8_mask(p_vec1, p_vec2);
      }
   };
   template<>
   struct count_matches<avx512<v512<uint8_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v512<uint8_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v256<uint8_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v256<uint8_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct count_matches<avx512<v128<uint8_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename avx512<v128<uint8_t>>::mask_t const & p_mask
      ) {
#if tally
calc_unary_simd += 1;
#endif
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };
  
  //not tested 
  //TODO: add more granularities, currently only works for 64 bit
  template<typename T>
   struct conflict_detection<avx512<v512<T>>,64> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      apply(
         typename avx512<v512<U>>::vector_t const & p_vec
      ) {
         return _mm512_conflict_epi64(p_vec);
      }
   };
   
     template<typename T>
   struct conflict_detection<avx512<v256<T>>,64> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v256< U > >::vector_t
      apply(
         typename avx512<v256<U>>::vector_t const & p_vec
      ) {
         return _mm256_conflict_epi64(p_vec);
      }
   };
   
     template<typename T>
   struct conflict_detection<avx512<v128<T>>,64> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v128< U > >::vector_t
      apply(
         typename avx512<v128<U>>::vector_t const & p_vec
      ) {
         return _mm_conflict_epi64(p_vec);
      }
   };

 }

#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_COMPARE_AVX512_H */
