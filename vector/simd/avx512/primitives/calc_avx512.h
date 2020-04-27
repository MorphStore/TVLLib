/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   calc_avx512.h
 * Author: Annett
 *
 * Created on 17. April 2019, 11:07
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_CALC_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_CALC_AVX512_H



#include "../../../preprocessor.h"
#include "../extension_avx512.h"
#include "../../../primitives/calc.h"

#include <functional>
namespace vectorlib{



   template<>
   struct add<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_add_epi64( p_vec1, p_vec2);
      }
   };

   template<>
   struct add<avx512<v256<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint64_t>>::vector_t
      apply(
         typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_add_epi64( p_vec1, p_vec2);
      }
   };
   template<>
   struct add<avx512<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint64_t>>::vector_t
      apply(
         typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_add_epi64( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_min_epi64( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v256<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint64_t>>::vector_t
      apply(
         typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_min_epi64( p_vec1, p_vec2);
      }
   };
   template<>
   struct min<avx512<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint64_t>>::vector_t
      apply(
         typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_min_epi64( p_vec1, p_vec2);
      }
   };

   template<>
   struct sub<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_sub_epi64( p_vec1, p_vec2);
      }
   };
   template<>
   struct hadd<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::base_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm512_reduce_add_epi64(p_vec1);
      }
   };
   template<>
   struct mul<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_mul_epu32( p_vec1, p_vec2);
      }
   };

   template<>
   struct mul<avx512<v256<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint64_t>>::vector_t
      apply(
         typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_mul_epu32( p_vec1, p_vec2);
      }
   };

   template<>
   struct mul<avx512<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint64_t>>::vector_t
      apply(
         typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_mul_epu32( p_vec1, p_vec2);
      }
   };


   template<>
   struct div<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         __m512d divhelper = _mm512_set1_pd(0x0010000000000000);
         return
            _mm512_xor_si512(
               _mm512_castpd_si512(
                  _mm512_add_pd(
                     // @todo This rounds the result to the nearest integer,
                     // but we want it to be rounded down, since this would be
                     // the expected outcome of an integer division. There is
                     // no _mm512_floor_pd (like in SSE and AVX). I tried
                     // _mm512_div_round_pd with all possible rounding modes,
                     // but none of them worked...
                     _mm512_div_pd(
                        _mm512_castsi512_pd(p_vec1),
                        _mm512_castsi512_pd(p_vec2)
                     ),
                     divhelper
                  )
               ),
               _mm512_castpd_si512(
                  divhelper
               )
            );
      }
   };
   template<>
   struct mod<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint64_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif

         __m512d divhelper = _mm512_set1_pd(0x0010000000000000);
         __m512d intermediate =
            _mm512_add_pd(
               _mm512_floor_pd(
                  _mm512_div_pd(
                     _mm512_castsi512_pd(p_vec1),
                     _mm512_castsi512_pd(p_vec2)
                  )
               ),
               divhelper
            );
         return
            _mm512_sub_epi64(
               p_vec1,
               _mm512_mul_epi32(
                  _mm512_xor_si512(
                     _mm512_castpd_si512(intermediate),
                     _mm512_castpd_si512(divhelper)
                  ),
                  p_vec2
               )
            );
      }
   };
   template<>
   struct inv<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm512_sub_epi64( _mm512_set1_epi64(0), p_vec1);
      }
   };
   template<>
   struct shift_left<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_slli_epi64(p_vec1, p_distance);
      }
   };
   template<>
   struct shift_left_individual<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_data,
         typename avx512<v512<uint64_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_sllv_epi64(p_data, p_distance);
      }
   };
   template<>
   struct shift_right<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_srli_epi64(p_vec1, p_distance);
      }
   };
   template<>
   struct shift_right_individual<avx512<v512<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint64_t>>::vector_t
      apply(
         typename avx512<v512<uint64_t>>::vector_t const & p_data,
         typename avx512<v512<uint64_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_srlv_epi64(p_data, p_distance);
      }
   };


//all of the functions below are not tested
   template<>
   struct add<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_add_epi32( p_vec1, p_vec2);
      }
   };
   template<>
   struct add<avx512<v256<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint32_t>>::vector_t
      apply(
         typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_add_epi32( p_vec1, p_vec2);
      }
   };
   template<>
   struct add<avx512<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint32_t>>::vector_t
      apply(
         typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_add_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_min_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v256<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint32_t>>::vector_t
      apply(
         typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_min_epi32( p_vec1, p_vec2);
      }
   };
   template<>
   struct min<avx512<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint32_t>>::vector_t
      apply(
         typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_min_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct sub<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_sub_epi32( p_vec1, p_vec2);
      }
   };
   template<>
   struct hadd<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::base_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm512_reduce_add_epi32(p_vec1);
      }
   };
   template<>
   struct mul<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_mullo_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct mul<avx512<v256<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint32_t>>::vector_t
      apply(
         typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_mullo_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct mul<avx512<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint32_t>>::vector_t
      apply(
         typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_mullo_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct div<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return
            _mm512_cvtps_epi32( //Convert packed single-precision (32-bit) floating-point elements in a to packed 32-bit integers
                  _mm512_div_ps( //Divide packed single-precision (32-bit) floating-point elements  (__m512 a, __m512 b)
                     // @todo This rounds the result to the nearest integer,
                     // but we want it to be rounded down, since this would be
                     // the expected outcome of an integer division. There is
                     // no _mm512_floor_pd (like in SSE and AVX) except when using SVML.
                     _mm512_castsi512_ps(p_vec1),
                      _mm512_castsi512_ps(p_vec2) //Cast vector of type __m512i to type __m512
                     )

               );
      }
   };
   template<>
   struct mod<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint32_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return
            _mm512_sub_epi32(
               p_vec1,
               _mm512_mullo_epi32( //(__m512i a, __m512i b)
                     _mm512_cvtps_epi32(//Convert packed single-precision (32-bit) floating-point elements in a to packed 32-bit integers
                           _mm512_div_ps( //Divide packed single-precision (32-bit) floating-point elements (__m512 a, __m512 b)
                              // @todo This rounds the result to the nearest integer,
                              // but we want it to be rounded down, since this would be
                              // the expected outcome of an integer division. There is
                              // no _mm512_floor_ps (like in SSE and AVX) except when using SVML.
                              _mm512_castsi512_ps(p_vec1),
                              _mm512_castsi512_ps(p_vec2) //Cast vector of type __m512i to type __m512
                            )
                   ),
                  p_vec2
               )
            );
      }
   };
   template<>
   struct inv<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm512_sub_epi32( _mm512_set1_epi32(0), p_vec1);
      }
   };
   template<>
   struct shift_left<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_slli_epi32(p_vec1, p_distance);
      }
   };
   template<>
   struct shift_left_individual<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_data,
         typename avx512<v512<uint32_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_sllv_epi32(p_data, p_distance);
      }
   };
   template<>
   struct shift_right<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
      
         return _mm512_srli_epi32(p_vec1, p_distance);
      }
   };
   template<>
   struct shift_right_individual<avx512<v512<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint32_t>>::vector_t
      apply(
         typename avx512<v512<uint32_t>>::vector_t const & p_data,
         typename avx512<v512<uint32_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
   
         return _mm512_srlv_epi32(p_data, p_distance);
      }
   };

   template<>
   struct add<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_add_epi16( p_vec1, p_vec2);
      }
   };
   template<>
   struct add<avx512<v256<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint16_t>>::vector_t
      apply(
         typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_add_epi16( p_vec1, p_vec2);
      }
   };
   template<>
   struct add<avx512<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint16_t>>::vector_t
      apply(
         typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_add_epi16( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_min_epi16( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v256<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint16_t>>::vector_t
      apply(
         typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_min_epi16( p_vec1, p_vec2);
      }
   };
   template<>
   struct min<avx512<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint16_t>>::vector_t
      apply(
         typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_min_epi16( p_vec1, p_vec2);
      }
   };

   template<>
   struct sub<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_sub_epi16( p_vec1, p_vec2);
      }
   };
   template<>
   struct hadd<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::base_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),0)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),1)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),2)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),3)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),4)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),5)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),6)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),7)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),8)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),9)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),10)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),11)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),12)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),13)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),14)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),15)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),0)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),1)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),2)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),3)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),4)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),5)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),6)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),7)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),8)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),9)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),10)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),11)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),12)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),13)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),14)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),15);
      }
   };
   template<>
   struct mul<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_mullo_epi16( p_vec1, p_vec2);
      }
   };

   template<>
   struct mul<avx512<v256<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint16_t>>::vector_t
      apply(
         typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_mullo_epi16( p_vec1, p_vec2);
      }
   };

   template<>
   struct mul<avx512<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint16_t>>::vector_t
      apply(
         typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint16_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_mullo_epi16( p_vec1, p_vec2);
      }
   };

   //doesn't work yet
   // template<>
   // struct div<avx512<v512<uint16_t>>/*, 16*/> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename avx512<v512<uint16_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
   //       typename avx512<v512<uint16_t>>::vector_t const & p_vec2
   //    ){
   //       trace( "[VECTOR] - Divide 16 bit integer values from two registers (avx512)" );
   //       __m512d divhelper = _mm512_set1_pd(0x0010000000000000);
   //       return
   //          _mm512_xor_si512(
   //             _mm512_castpd_si512(
   //                _mm512_add_pd(
   //                   // @todo This rounds the result to the nearest integer,
   //                   // but we want it to be rounded down, since this would be
   //                   // the expected outcome of an integer division. There is
   //                   // no _mm512_floor_pd (like in SSE and AVX). I tried
   //                   // _mm512_div_round_pd with all possible rounding modes,
   //                   // but none of them worked...
   //                   _mm512_div_pd(
   //                      _mm512_castsi512_pd(p_vec1),
   //                      _mm512_castsi512_pd(p_vec2)
   //                   ),
   //                   divhelper
   //                )
   //             ),
   //             _mm512_castpd_si512(
   //                divhelper
   //             )
   //          );
   //    }
   // };
   //doesn't work yet
   // template<>
   // struct mod<avx512<v512<uint16_t>>/*, 16*/> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename avx512<v512<uint16_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
   //       typename avx512<v512<uint16_t>>::vector_t const & p_vec2
   //    ){
   //       trace( "[VECTOR] - Modulo divide 16 bit integer values from two registers (avx512)" );
   //       info( "[VECTOR] - MODULO IS A WORKAROUND" );
   //       __m512d divhelper = _mm512_set1_pd(0x0010000000000000);
   //       __m512d intermediate =
   //          _mm512_add_pd(
   //             _mm512_floor_pd(
   //                _mm512_div_pd(
   //                   _mm512_castsi512_pd(p_vec1),
   //                   _mm512_castsi512_pd(p_vec2)
   //                )
   //             ),
   //             divhelper
   //          );
   //       return
   //          _mm512_sub_epi32(
   //             p_vec1,
   //             _mm512_mul_epi32(
   //                _mm512_xor_si512(
   //                   _mm512_castpd_si512(intermediate),
   //                   _mm512_castpd_si512(divhelper)
   //                ),
   //                p_vec2
   //             )
   //          );
   //    }
   // };
   template<>
   struct inv<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm512_sub_epi16( _mm512_set1_epi16(0), p_vec1);
      }
   };
   template<>
   struct shift_left<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_slli_epi16(p_vec1, p_distance);
      }
   };
   template<>
   struct shift_left_individual<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_data,
         typename avx512<v512<uint16_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_sllv_epi16(p_data, p_distance);
      }
   };
   template<>
   struct shift_right<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_srli_epi16(p_vec1, p_distance);
      }
   };
   template<>
   struct shift_right_individual<avx512<v512<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint16_t>>::vector_t
      apply(
         typename avx512<v512<uint16_t>>::vector_t const & p_data,
         typename avx512<v512<uint16_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_srlv_epi16(p_data, p_distance);
      }
   };

   template<>
   struct add<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_add_epi8( p_vec1, p_vec2);
      }
   };
   template<>
   struct add<avx512<v256<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint8_t>>::vector_t
      apply(
         typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_add_epi8( p_vec1, p_vec2);
      }
   };
   template<>
   struct add<avx512<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint8_t>>::vector_t
      apply(
         typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_add_epi8( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_min_epi8( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<avx512<v256<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v256<uint8_t>>::vector_t
      apply(
         typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v256<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm256_min_epi8( p_vec1, p_vec2);
      }
   };
   template<>
   struct min<avx512<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v128<uint8_t>>::vector_t
      apply(
         typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v128<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm_min_epi8( p_vec1, p_vec2);
      }
   };

   template<>
   struct sub<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_sub_epi8( p_vec1, p_vec2);
      }
   };
   template<>
   struct hadd<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::base_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),0)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),1)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),2)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),3)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),4)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),5)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),6)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),7)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),8)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),9)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),10)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),11)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),12)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),13)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),14)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),15)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),16)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),17)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),18)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),19)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),20)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),21)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),22)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),23)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),24)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),25)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),26)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),27)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),28)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),29)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),30)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),31)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),0)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),1)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),2)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),3)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),4)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),5)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),6)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),7)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),8)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),9)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),10)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),11)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),12)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),13)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),14)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),15)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),16)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),17)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),18)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),19)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),20)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),21)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),22)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),23)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),24)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),25)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),26)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),27)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),28)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),29)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),30)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),31);
      }
   };
   template<>
   struct mul<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
         typename avx512<v512<uint8_t>>::vector_t const & p_vec2
      ){
#if tally
calc_binary_simd += 1;
#endif
         
          // unpack and multiply
          __m512i dst_even = _mm512_mullo_epi16(p_vec1, p_vec2);
          __m512i dst_odd = _mm512_mullo_epi16(_mm512_srli_epi16(p_vec1, 8),_mm512_srli_epi16(p_vec2, 8));
          // repack
          return _mm512_or_si512(
            _mm512_slli_epi16(dst_odd, 8),
            _mm512_srli_epi16(
               _mm512_slli_epi16(dst_even, 8),
               8
            )
         );

      }
   };
   //doesn't work yet
   // template<>
   // struct div<avx512<v512<uint8_t>>/*, 8*/> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename avx512<v512<uint8_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
   //       typename avx512<v512<uint8_t>>::vector_t const & p_vec2
   //    ){
   //       trace( "[VECTOR] - Divide 8 bit integer values from two registers (avx512)" );
   //       __m512d divhelper = _mm512_set1_pd(0x0010000000000000);
   //       return
   //          _mm512_xor_si512(
   //             _mm512_castpd_si512(
   //                _mm512_add_pd(
   //                   // @todo This rounds the result to the nearest integer,
   //                   // but we want it to be rounded down, since this would be
   //                   // the expected outcome of an integer division. There is
   //                   // no _mm512_floor_pd (like in SSE and AVX). I tried
   //                   // _mm512_div_round_pd with all possible rounding modes,
   //                   // but none of them worked...
   //                   _mm512_div_pd(
   //                      _mm512_castsi512_pd(p_vec1),
   //                      _mm512_castsi512_pd(p_vec2)
   //                   ),
   //                   divhelper
   //                )
   //             ),
   //             _mm512_castpd_si512(
   //                divhelper
   //             )
   //          );
   //    }
   // };
   //doesn't work yet
   // template<>
   // struct mod<avx512<v512<uint16_t>>/*, 8*/> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename avx512<v512<uint8_t>>::vector_t
   //    apply(
   //       typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
   //       typename avx512<v512<uint8_t>>::vector_t const & p_vec2
   //    ){
   //       trace( "[VECTOR] - Modulo divide 8 bit integer values from two registers (avx512)" );
   //       info( "[VECTOR] - MODULO IS A WORKAROUND" );
   //       __m512d divhelper = _mm512_set1_pd(0x0010000000000000);
   //       __m512d intermediate =
   //          _mm512_add_pd(
   //             _mm512_floor_pd(
   //                _mm512_div_pd(
   //                   _mm512_castsi512_pd(p_vec1),
   //                   _mm512_castsi512_pd(p_vec2)
   //                )
   //             ),
   //             divhelper
   //          );
   //       return
   //          _mm512_sub_epi32(
   //             p_vec1,
   //             _mm512_mul_epi32(
   //                _mm512_xor_si512(
   //                   _mm512_castpd_si512(intermediate),
   //                   _mm512_castpd_si512(divhelper)
   //                ),
   //                p_vec2
   //             )
   //          );
   //    }
   // };
   template<>
   struct inv<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec1
      ){
#if tally
calc_unary_simd += 1;
#endif
         
         return _mm512_sub_epi8( _mm512_set1_epi8(0), p_vec1);
      }
   };
   template<>
   struct shift_left<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         return _mm512_set_epi8(
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),31) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),30) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),29) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),28) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),27) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),26) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),25) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),24) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),23) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),22) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),21)<< p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),20) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),19) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),18) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),17) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),16) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),15) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),14)<< p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),13) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),12) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),11) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),10) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),9) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),8) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),7) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),6) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),5) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),4) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),3) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),2) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),1) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),0) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),31) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),30) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),29) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),28) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),27) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),26) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),25) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),24) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),23) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),22) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),21)<< p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),20) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),19) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),18) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),17) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),16) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),15) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),14)<< p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),13) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),12) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),11) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),10) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),9) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),8) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),7) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),6) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),5) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),4) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),3) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),2) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),1) << p_distance),
                 (p_distance == 8) ? 0 : (_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0) << p_distance)

         );
      }
   };
   template<>
   struct shift_left_individual<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         typename avx512<v512<uint8_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         uint8_t distance0 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),0);
         uint8_t distance1 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),1);
         uint8_t distance2 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),2);
         uint8_t distance3 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),3);
         uint8_t distance4 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),4);
         uint8_t distance5 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),5);
         uint8_t distance6 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),6);
         uint8_t distance7 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),7);
         uint8_t distance8 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),8);
         uint8_t distance9 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),9);
         uint8_t distance10 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),10);
         uint8_t distance11 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),11);
         uint8_t distance12 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),12);
         uint8_t distance13 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),13);
         uint8_t distance14 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),14);
         uint8_t distance15 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),15);
         uint8_t distance16 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),16);
         uint8_t distance17 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),17);
         uint8_t distance18 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),18);
         uint8_t distance19 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),19);
         uint8_t distance20 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),20);
         uint8_t distance21 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),21);
         uint8_t distance22 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),22);
         uint8_t distance23 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),23);
         uint8_t distance24 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),24);
         uint8_t distance25 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),25);
         uint8_t distance26 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),26);
         uint8_t distance27 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),27);
         uint8_t distance28 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),28);
         uint8_t distance29 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),29);
         uint8_t distance30 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),30);
         uint8_t distance31 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),31);
         uint8_t distance32 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),0);
         uint8_t distance33 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),1);
         uint8_t distance34 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),2);
         uint8_t distance35 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),3);
         uint8_t distance36 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),4);
         uint8_t distance37 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),5);
         uint8_t distance38 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),6);
         uint8_t distance39 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),7);
         uint8_t distance40 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),8);
         uint8_t distance41 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),9);
         uint8_t distance42 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),10);
         uint8_t distance43 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),11);
         uint8_t distance44 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),12);
         uint8_t distance45 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),13);
         uint8_t distance46 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),14);
         uint8_t distance47 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),15);
         uint8_t distance48 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),16);
         uint8_t distance49 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),17);
         uint8_t distance50 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),18);
         uint8_t distance51 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),19);
         uint8_t distance52 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),20);
         uint8_t distance53 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),21);
         uint8_t distance54 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),22);
         uint8_t distance55 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),23);
         uint8_t distance56 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),24);
         uint8_t distance57 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),25);
         uint8_t distance58 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),26);
         uint8_t distance59 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),27);
         uint8_t distance60 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),28);
         uint8_t distance61 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),29);
         uint8_t distance62 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),30);
         uint8_t distance63 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),31);
          return _mm512_set_epi8(
                 (distance63 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),31)) >> distance63),
                 (distance62 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),30)) >> distance62),
                 (distance61 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),29)) >> distance61),
                 (distance60 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),28)) >> distance60),
                 (distance59 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),27)) >> distance50),
                 (distance58 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),26)) >> distance58),
                 (distance57 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),25)) >> distance57),
                 (distance56 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),24)) >> distance56),
                 (distance55 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),23)) >> distance55),
                 (distance54 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),22)) >> distance54),
                 (distance53 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),21)) >> distance53),
                 (distance52 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),20)) >> distance52),
                 (distance51 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),19)) >> distance51),
                 (distance50 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),18)) >> distance50),
                 (distance49 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),17)) >> distance49),
                 (distance48 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),16)) >> distance48),
                 (distance47 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),15)) >> distance47),
                 (distance46 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),14)) >> distance46),
                 (distance45 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),13)) >> distance45),
                 (distance44 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),12)) >> distance44),
                 (distance43 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),11)) >> distance43),
                 (distance42 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),10)) >> distance42),
                 (distance41 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),9)) >> distance41),
                 (distance40 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),8)) >> distance40),
                 (distance39 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),7)) >> distance39),
                 (distance38 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),6)) >> distance38),
                 (distance37 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),5)) >> distance37),
                 (distance36 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),4)) >> distance36),
                 (distance35 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),3)) >> distance35),
                 (distance34 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),2)) >> distance34),
                 (distance33 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),1)) >> distance33),
                 (distance32 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),0)) >> distance32),
                 (distance31 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),31)) >> distance31),
                 (distance30 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),30)) >> distance30),
                 (distance29 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),29)) >> distance29),
                 (distance28 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),28)) >> distance28),
                 (distance27 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),27)) >> distance27),
                 (distance26 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),26)) >> distance26),
                 (distance25 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),25)) >> distance25),
                 (distance24 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),24)) >> distance24),
                 (distance23 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),23)) >> distance23),
                 (distance22 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),22)) >> distance22),
                 (distance21 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),21)) >> distance21),
                 (distance20 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),20)) >> distance20),
                 (distance19 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),19)) >> distance19),
                 (distance18 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),18)) >> distance18),
                 (distance17 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),17)) >> distance17),
                 (distance16 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),16)) >> distance16),
                 (distance15 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),15)) >> distance15),
                 (distance14 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),14)) >> distance14),
                 (distance13 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),13)) >> distance13),
                 (distance12 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),12)) >> distance12),
                 (distance11 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),11)) >> distance11),
                 (distance10 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),10)) >> distance10),
                 (distance9 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),9)) >> distance9),
                 (distance8 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),8)) >> distance8),
                 (distance7 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),7)) >> distance7),
                 (distance6 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),6)) >> distance6),
                 (distance5 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),5)) >> distance5),
                 (distance4 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),4)) >> distance4),
                 (distance3 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),3)) >> distance3),
                 (distance2 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),2)) >> distance2),
                 (distance1 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),1)) >> distance1),
                 (distance0 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0)) >> distance0)
         );
      }
   };
   template<>
   struct shift_right<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         int const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
          return _mm512_set_epi8(
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),31)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),30)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),29)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),28)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),27)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),26)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),25)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),24)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),23)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),22)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),21)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),20)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),19)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),18)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),17)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),16)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),15)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),14)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),13)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),12)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),11)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),10)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),9)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),8)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),7)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),6)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),5)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),4)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),3)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),2)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),1)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),0)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),31)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),30)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),29)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),28)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),27)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),26)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),25)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),24)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),23)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),22)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),21)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),20)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),19)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),18)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),17)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),16)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),15)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),14)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),13)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),12)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),11)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),10)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),9)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),8)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),7)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),6)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),5)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),4)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),3)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),2)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),1)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0)) >> p_distance)
         );
      }
   };
   template<>
   struct shift_right_individual<avx512<v512<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename avx512<v512<uint8_t>>::vector_t
      apply(
         typename avx512<v512<uint8_t>>::vector_t const & p_vec,
         typename avx512<v512<uint8_t>>::vector_t const & p_distance
      ){
#if tally
calc_binary_simd += 1;
#endif
         
         uint8_t distance0 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),0);
         uint8_t distance1 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),1);
         uint8_t distance2 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),2);
         uint8_t distance3 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),3);
         uint8_t distance4 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),4);
         uint8_t distance5 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),5);
         uint8_t distance6 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),6);
         uint8_t distance7 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),7);
         uint8_t distance8 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),8);
         uint8_t distance9 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),9);
         uint8_t distance10 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),10);
         uint8_t distance11 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),11);
         uint8_t distance12 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),12);
         uint8_t distance13 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),13);
         uint8_t distance14 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),14);
         uint8_t distance15 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),15);
         uint8_t distance16 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),16);
         uint8_t distance17 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),17);
         uint8_t distance18 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),18);
         uint8_t distance19 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),19);
         uint8_t distance20 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),20);
         uint8_t distance21 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),21);
         uint8_t distance22 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),22);
         uint8_t distance23 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),23);
         uint8_t distance24 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),24);
         uint8_t distance25 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),25);
         uint8_t distance26 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),26);
         uint8_t distance27 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),27);
         uint8_t distance28 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),28);
         uint8_t distance29 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),29);
         uint8_t distance30 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),30);
         uint8_t distance31 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,0),31);
         uint8_t distance32 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),0);
         uint8_t distance33 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),1);
         uint8_t distance34 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),2);
         uint8_t distance35 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),3);
         uint8_t distance36 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),4);
         uint8_t distance37 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),5);
         uint8_t distance38 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),6);
         uint8_t distance39 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),7);
         uint8_t distance40 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),8);
         uint8_t distance41 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),9);
         uint8_t distance42 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),10);
         uint8_t distance43 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),11);
         uint8_t distance44 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),12);
         uint8_t distance45 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),13);
         uint8_t distance46 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),14);
         uint8_t distance47 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),15);
         uint8_t distance48 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),16);
         uint8_t distance49 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),17);
         uint8_t distance50 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),18);
         uint8_t distance51 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),19);
         uint8_t distance52 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),20);
         uint8_t distance53 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),21);
         uint8_t distance54 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),22);
         uint8_t distance55 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),23);
         uint8_t distance56 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),24);
         uint8_t distance57 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),25);
         uint8_t distance58 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),26);
         uint8_t distance59 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),27);
         uint8_t distance60 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),28);
         uint8_t distance61 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),29);
         uint8_t distance62 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),30);
         uint8_t distance63 = _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_distance,1),31);
          return _mm512_set_epi8(
                 (distance63 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),31)) >> distance63),
                 (distance62 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),30)) >> distance62),
                 (distance61 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),29)) >> distance61),
                 (distance60 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),28)) >> distance60),
                 (distance59 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),27)) >> distance59),
                 (distance58 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),26)) >> distance58),
                 (distance57 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),25)) >> distance57),
                 (distance56 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),24)) >> distance56),
                 (distance55 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),23)) >> distance55),
                 (distance54 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),22)) >> distance54),
                 (distance53 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),21)) >> distance53),
                 (distance52 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),20)) >> distance52),
                 (distance51 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),19)) >> distance51),
                 (distance50 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),18)) >> distance50),
                 (distance49 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),17)) >> distance49),
                 (distance48 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),16)) >> distance48),
                 (distance47 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),15)) >> distance47),
                 (distance46 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),14)) >> distance46),
                 (distance45 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),13)) >> distance45),
                 (distance44 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),12)) >> distance44),
                 (distance43 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),11)) >> distance43),
                 (distance42 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),10)) >> distance42),
                 (distance41 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),9)) >> distance41),
                 (distance40 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),8)) >> distance40),
                 (distance39 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),7)) >> distance39),
                 (distance38 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),6)) >> distance38),
                 (distance37 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),5)) >> distance37),
                 (distance36 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),4)) >> distance36),
                 (distance35 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),3)) >> distance35),
                 (distance34 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),2)) >> distance34),
                 (distance33 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),1)) >> distance33),
                 (distance32 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),0)) >> distance32),
                 (distance31 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),31)) >> distance31),
                 (distance30 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),30)) >> distance30),
                 (distance29 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),29)) >> distance29),
                 (distance28 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),28)) >> distance28),
                 (distance27 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),27)) >> distance27),
                 (distance26 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),26)) >> distance26),
                 (distance25 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),25)) >> distance25),
                 (distance24 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),24)) >> distance24),
                 (distance23 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),23)) >> distance23),
                 (distance22 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),22)) >> distance22),
                 (distance21 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),21)) >> distance21),
                 (distance20 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),20)) >> distance20),
                 (distance19 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),19)) >> distance19),
                 (distance18 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),18)) >> distance18),
                 (distance17 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),17)) >> distance17),
                 (distance16 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),16)) >> distance16),
                 (distance15 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),15)) >> distance15),
                 (distance14 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),14)) >> distance14),
                 (distance13 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),13)) >> distance13),
                 (distance12 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),12)) >> distance12),
                 (distance11 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),11)) >> distance11),
                 (distance10 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),10)) >> distance10),
                 (distance9 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),9)) >> distance9),
                 (distance8 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),8)) >> distance8),
                 (distance7 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),7)) >> distance7),
                 (distance6 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),6)) >> distance6),
                 (distance5 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),5)) >> distance5),
                 (distance4 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),4)) >> distance4),
                 (distance3 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),3)) >> distance3),
                 (distance2 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),2)) >> distance2),
                 (distance1 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),1)) >> distance1),
                 (distance0 == 8) ? 0 : (static_cast<uint8_t>(_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0)) >> distance0)
         );
      }
   };
}
#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_CALC_AVX512_H */
