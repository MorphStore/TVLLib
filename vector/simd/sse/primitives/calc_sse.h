/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   calc_sse.h
 * Author: Annett
 *
 * Created on 17. April 2019, 11:07
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_CALC_SSE_H
#define MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_CALC_SSE_H

#include "../../../preprocessor.h"
#include "../extension_sse.h"
#include "../../../primitives/calc.h"

#include <functional>

namespace vectorlib{

   template<>
   struct add<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_add_epi64( p_vec1, p_vec2);
      }
   };
   template<>
   struct sub<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_sub_epi64( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_blendv_epi8(p_vec2, p_vec1, _mm_cmpgt_epi64(p_vec2, p_vec1));
      }
   };


   template<>
   struct hadd<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::base_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
#if 0
         // This does not work for large inputs.
         return
            _mm_extract_epi64(
               _mm_castpd_si128(
                  _mm_hadd_pd(
                     _mm_castsi128_pd(p_vec1),
                     _mm_castsi128_pd(p_vec1)
                  )
               ),
               0
            );
#else
         // This does work for all inputs.
         return _mm_extract_epi64(p_vec1, 0) + _mm_extract_epi64(p_vec1, 1);
#endif
      }
   };
   template<>
   struct hor<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::base_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
                 
         return _mm_extract_epi64(p_vec1, 0) | _mm_extract_epi64(p_vec1, 1);
      }
   };
   template<>
   struct mul<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD

         return _mm_mul_epu32( p_vec1, p_vec2);
      }
   };

   template<>
   struct div<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const &p_vec1,
         typename sse<v128<uint64_t>>::vector_t const &p_vec2
      ) {
         TALLY_CALC_BINARY_SIMD
         
         __m128d divhelper=_mm_set1_pd(0x0010000000000000);

         return
            _mm_xor_si128(
               _mm_castpd_si128(
                  _mm_add_pd(
                     _mm_floor_pd(
                        _mm_div_pd(
                           _mm_castsi128_pd(p_vec1),
                           _mm_castsi128_pd(p_vec2)
                        )
                     ),
                     divhelper
                  )
               ),
               _mm_castpd_si128(
                  divhelper
               )
            );
      }
   };

   template<>
   struct mod<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD

         __m128d divhelper = _mm_set1_pd(0x0010000000000000);
         __m128d intermediate =
            _mm_add_pd(
               _mm_floor_pd(
                  _mm_div_pd(
                     _mm_castsi128_pd(p_vec1),
                     _mm_castsi128_pd(p_vec2)
                  )
               ),
               divhelper
            );
         return
            _mm_sub_epi64(
               p_vec1,
               _mm_mul_epi32(
                  _mm_xor_si128(
                     _mm_castpd_si128(intermediate),
                     _mm_castpd_si128(divhelper)
                  ),
                  p_vec2
               )
            );
      }
   };

   template<>
   struct inv<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_sub_epi64( _mm_set1_epi64x(0), p_vec1);
      }
   };

   template<>
   struct shift_left<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_slli_epi64(p_vec1, p_distance);
      }
   };

   template<>
   struct shift_left_individual<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_data,
         typename sse<v128<uint64_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         // The comparison with 64 is necessary, since the scalar shift behaves
         // strangely in that case.
         
         uint64_t distance0 = _mm_extract_epi64(p_distance, 0);
         uint64_t distance1 = _mm_extract_epi64(p_distance, 1);
         return _mm_set_epi64x(
                 (distance1 == 64) ? 0 : (_mm_extract_epi64(p_data, 1) << distance1),
                 (distance0 == 64) ? 0 : (_mm_extract_epi64(p_data, 0) << distance0)
         );
      }
   };

   template<>
   struct shift_right<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_srli_epi64(p_vec1, p_distance);
      }
   };

   template<>
   struct shift_right_individual<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint64_t>>::vector_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_data,
         typename sse<v128<uint64_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         // The comparison with 64 is necessary, since the scalar shift behaves
         // strangely in that case.
         // The static_cast to an unsigned type is necessary, since the scalar
         // shift shifts in sign-bits otherwise.
         
         uint64_t distance0 = _mm_extract_epi64(p_distance, 0);
         uint64_t distance1 = _mm_extract_epi64(p_distance, 1);
         return _mm_set_epi64x(
                 (distance1 == 64) ? 0 : (static_cast<uint64_t>(_mm_extract_epi64(p_data, 1)) >> distance1),
                 (distance0 == 64) ? 0 : (static_cast<uint64_t>(_mm_extract_epi64(p_data, 0)) >> distance0)
         );
      }
   };


   template<>
   struct add<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_add_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct sub<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_sub_epi32( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_blendv_epi8(p_vec2, p_vec1, _mm_cmpgt_epi32(p_vec2, p_vec1));
      }
   };

   template<>
   struct hadd<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::base_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
         __m128i tmp =
            _mm_castps_si128(
               _mm_hadd_ps(
                  _mm_castsi128_ps(p_vec1),
                  _mm_castsi128_ps(p_vec1)
               )
            );
         return _mm_extract_epi32(tmp,0)+_mm_extract_epi32(tmp,1);
      }
   };


   template<>
   struct mul<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD

         return _mm_mullo_epi32( p_vec1, p_vec2);
      }
   };
   template<>
   struct div<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const &p_vec1,
         typename sse<v128<uint32_t>>::vector_t const &p_vec2
      ) {
         TALLY_CALC_BINARY_SIMD
         
         return
            _mm_cvtps_epi32( //(__m128 a)
               _mm_floor_ps( //Round the packed single-precision (32-bit) floating-point elements in a down to an integer value
                  _mm_div_ps( //Divide packed single-precision (32-bit) floating-point elements (__m128 a, __m128 b)
                     _mm_castsi128_ps(p_vec1),
                      _mm_castsi128_ps(p_vec2) //Cast vector of type __m128i to type __m128
                     )
                  )
               );
      }
   };
   template<>
   struct mod<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD

         return
            _mm_sub_epi32(
               p_vec1,
               _mm_mullo_epi32( //(__m128i a, __m128i b)
                     _mm_cvtps_epi32(//(__m128 a)
                        _mm_floor_ps( //Round the packed single-precision (32-bit) floating-point elements in a down to an integer value
                           _mm_div_ps( //Divide packed single-precision (32-bit) floating-point elements (__m128 a, __m128 b)
                              _mm_castsi128_ps(p_vec1),
                              _mm_castsi128_ps(p_vec2) //Cast vector of type __m128i to type __m128
                            )
                      )
                   ),
                  p_vec2
               )
            );
      }
   };

   //not tested
   template<>
   struct inv<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_sub_epi32( _mm_set1_epi32(0), p_vec1);
      }
   };
   //not tested
   template<>
   struct shift_left<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_slli_epi32(p_vec1, p_distance);
      }
   };
   //not tested
   template<>
   struct shift_left_individual<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_data,
         typename sse<v128<uint32_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         //is the comparison with 32 necessary?
         
         uint32_t distance0 = _mm_extract_epi32(p_distance, 0);
         uint32_t distance1 = _mm_extract_epi32(p_distance, 1);
         uint32_t distance2 = _mm_extract_epi32(p_distance, 2);
         uint32_t distance3 = _mm_extract_epi32(p_distance, 3);
         return _mm_set_epi32(
                 (distance3 == 32) ? 0 : (_mm_extract_epi32(p_data, 3) << distance3),
                 (distance2 == 32) ? 0 : (_mm_extract_epi32(p_data, 2) << distance2),
                 (distance1 == 32) ? 0 : (_mm_extract_epi32(p_data, 1) << distance1),
                 (distance0 == 32) ? 0 : (_mm_extract_epi32(p_data, 0) << distance0)

         );
      }
   };
   //not tested
   template<>
   struct shift_right<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_srli_epi32(p_vec1, p_distance);
      }
   };
   //not tested
   template<>
   struct shift_right_individual<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint32_t>>::vector_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_data,
         typename sse<v128<uint32_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         // is the comparison with 32 necessary?
         // The static_cast to an unsigned type is necessary, since the scalar
         // shift shifts in sign-bits otherwise.
         
         uint32_t distance0 = _mm_extract_epi32(p_distance, 0);
         uint32_t distance1 = _mm_extract_epi32(p_distance, 1);
         uint32_t distance2 = _mm_extract_epi32(p_distance, 2);
         uint32_t distance3 = _mm_extract_epi32(p_distance, 3);
         return _mm_set_epi32(
                 (distance3 == 32) ? 0 : (static_cast<uint32_t>(_mm_extract_epi32(p_data, 3)) >> distance3),
                 (distance2 == 32) ? 0 : (static_cast<uint32_t>(_mm_extract_epi32(p_data, 2)) >> distance2),
                 (distance1 == 32) ? 0 : (static_cast<uint32_t>(_mm_extract_epi32(p_data, 1)) >> distance1),
                 (distance0 == 32) ? 0 : (static_cast<uint32_t>(_mm_extract_epi32(p_data, 0)) >> distance0)
         );
      }
   };

   template<>
   struct add<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1,
         typename sse<v128<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_add_epi16( p_vec1, p_vec2);
      }
   };

   template<>
   struct sub<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1,
         typename sse<v128<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_sub_epi16( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1,
         typename sse<v128<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_blendv_epi8(p_vec2, p_vec1, _mm_cmpgt_epi16(p_vec2, p_vec1));
      }
   };

   template<>
   struct hadd<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::base_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_extract_epi16(p_vec1,0)+_mm_extract_epi16(p_vec1,1)+_mm_extract_epi16(p_vec1,2)+_mm_extract_epi16(p_vec1,3)
         +_mm_extract_epi16(p_vec1,4)+_mm_extract_epi16(p_vec1,5)+_mm_extract_epi16(p_vec1,6)+_mm_extract_epi16(p_vec1,7);
      }
   };


   template<>
   struct mul<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1,
         typename sse<v128<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_mullo_epi16( p_vec1, p_vec2);
      }
   };
   //doesn't work yet
   // template<>
   // struct div<sse<v128<uint16_t>>, 16> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename sse<v128<uint16_t>>::vector_t
   //    apply(
   //       typename sse<v128<uint16_t>>::vector_t const &p_vec1,
   //       typename sse<v128<uint16_t>>::vector_t const &p_vec2
   //    ) {
   //       trace("[VECTOR] - Divide 16 bit integer values from two registers (sse)");
   //        // unpack and divide
   //        __m128i dst_even = _mm_cvtps_epi32(
   //          _mm_floor_ps(
   //             _mm_div_ps(
   //                _mm_castsi128_ps(p_vec1),
   //                _mm_castsi128_ps(p_vec2)
   //                )
   //             )
   //          );
   //        __m128i dst_odd = _mm_cvtps_epi32(
   //          _mm_floor_ps(
   //             _mm_div_ps(
   //                _mm_castsi128_ps(
   //                   _mm_srli_epi32(p_vec1, 16)
   //                   ),
   //                _mm_castsi128_ps(
   //                   _mm_srli_epi32(p_vec2, 16))
   //                )
   //             )
   //          );
   //        // repack
   //        return  _mm_or_si128(
   //         _mm_slli_epi32(dst_odd, 16),
   //         _mm_srli_epi32(
   //            _mm_slli_epi32(dst_even, 16),
   //            16
   //         )
   //      );
   //    }
   // };


   //doesn't work yet
   // template<>
   // struct mod<sse<v128<uint16_t>>/*, 16*/> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename sse<v128<uint16_t>>::vector_t
   //    apply(
   //       typename sse<v128<uint16_t>>::vector_t const & p_vec1,
   //       typename sse<v128<uint16_t>>::vector_t const & p_vec2
   //    ){
   //       trace( "[VECTOR] - Modulo divide 16 bit integer values from two registers (sse)" );
   //       info( "[VECTOR] - MODULO IS A WORKAROUND" );
   //       __m128d divhelper = _mm_set1_pd(0x0010000000000000);
   //       __m128d intermediate =
   //          _mm_add_pd(
   //             _mm_floor_pd(
   //                _mm_div_pd(
   //                   _mm_castsi128_pd(p_vec1),
   //                   _mm_castsi128_pd(p_vec2)
   //                )
   //             ),
   //             divhelper
   //          );
   //       return
   //          _mm_sub_epi32(
   //             p_vec1,
   //             _mm_mul_epi32(
   //                _mm_xor_si128(
   //                   _mm_castpd_si128(intermediate),
   //                   _mm_castpd_si128(divhelper)
   //                ),
   //                p_vec2
   //             )
   //          );
   //    }
   // };
   //not tested
   template<>
   struct inv<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_sub_epi16( _mm_set1_epi16(0), p_vec1);
      }
   };
   //not tested
   template<>
   struct shift_left<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_slli_epi16(p_vec1, p_distance);
      }
   };
   //not tested
   template<>
   struct shift_left_individual<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_data,
         typename sse<v128<uint16_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         
         uint16_t distance0 = _mm_extract_epi16(p_distance, 0);
         uint16_t distance1 = _mm_extract_epi16(p_distance, 1);
         uint16_t distance2 = _mm_extract_epi16(p_distance, 2);
         uint16_t distance3 = _mm_extract_epi16(p_distance, 3);
         uint16_t distance4 = _mm_extract_epi16(p_distance, 4);
         uint16_t distance5 = _mm_extract_epi16(p_distance, 5);
         uint16_t distance6 = _mm_extract_epi16(p_distance, 6);
         uint16_t distance7 = _mm_extract_epi16(p_distance, 7);
         return _mm_set_epi16(
                 (distance7 == 16) ? 0 : (_mm_extract_epi16(p_data, 7) << distance7),
                 (distance6 == 16) ? 0 : (_mm_extract_epi16(p_data, 6) << distance6),
                 (distance5 == 16) ? 0 : (_mm_extract_epi16(p_data, 5) << distance5),
                 (distance4 == 16) ? 0 : (_mm_extract_epi16(p_data, 4) << distance4),
                 (distance3 == 16) ? 0 : (_mm_extract_epi16(p_data, 3) << distance3),
                 (distance2 == 16) ? 0 : (_mm_extract_epi16(p_data, 2) << distance2),
                 (distance1 == 16) ? 0 : (_mm_extract_epi16(p_data, 1) << distance1),
                 (distance0 == 16) ? 0 : (_mm_extract_epi16(p_data, 0) << distance0)

         );
      }
   };
   //not tested
   template<>
   struct shift_right<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_srli_epi16(p_vec1, p_distance);
      }
   };
   // //not tested
   template<>
   struct shift_right_individual<sse<v128<uint16_t>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint16_t>>::vector_t
      apply(
         typename sse<v128<uint16_t>>::vector_t const & p_data,
         typename sse<v128<uint16_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         // The static_cast to an unsigned type is necessary, since the scalar
         // shift shifts in sign-bits otherwise.
         
         uint16_t distance0 = _mm_extract_epi16(p_distance, 0);
         uint16_t distance1 = _mm_extract_epi16(p_distance, 1);
         uint16_t distance2 = _mm_extract_epi16(p_distance, 2);
         uint16_t distance3 = _mm_extract_epi16(p_distance, 3);
         uint16_t distance4 = _mm_extract_epi16(p_distance, 4);
         uint16_t distance5 = _mm_extract_epi16(p_distance, 5);
         uint16_t distance6 = _mm_extract_epi16(p_distance, 6);
         uint16_t distance7 = _mm_extract_epi16(p_distance, 7);
         return _mm_set_epi16(
                 (distance7 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 7)) >> distance7),
                 (distance6 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 6)) >> distance6),
                 (distance5 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 5)) >> distance5),
                 (distance4 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 4)) >> distance4),
                 (distance3 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 3)) >> distance3),
                 (distance2 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 2)) >> distance2),
                 (distance1 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 1)) >> distance1),
                 (distance0 == 16) ? 0 : (static_cast<uint16_t>(_mm_extract_epi16(p_data, 0)) >> distance0)
         );
      }
   };


   template<>
   struct add<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_add_epi8( p_vec1, p_vec2);
      }
   };

   template<>
   struct sub<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_sub_epi8( p_vec1, p_vec2);
      }
   };

   template<>
   struct min<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
         return _mm_blendv_epi8(p_vec2, p_vec1, _mm_cmpgt_epi8(p_vec2, p_vec1));
      }
   };

   template<>
   struct hadd<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::base_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_extract_epi8(p_vec1,0)+_mm_extract_epi8(p_vec1,1)+_mm_extract_epi8(p_vec1,2)+_mm_extract_epi8(p_vec1,3)
         +_mm_extract_epi8(p_vec1,4)+_mm_extract_epi8(p_vec1,5)+_mm_extract_epi8(p_vec1,6)+_mm_extract_epi8(p_vec1,7)+
         _mm_extract_epi8(p_vec1,8)+_mm_extract_epi8(p_vec1,9)+_mm_extract_epi8(p_vec1,10)+_mm_extract_epi8(p_vec1,11)
         +_mm_extract_epi8(p_vec1,12)+_mm_extract_epi8(p_vec1,13)+_mm_extract_epi8(p_vec1,14)+_mm_extract_epi8(p_vec1,15);
      }
   };
   template<>
   struct mul<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SIMD
         
          // unpack and multiply
          __m128i dst_even = _mm_mullo_epi16(p_vec1, p_vec2);
          __m128i dst_odd = _mm_mullo_epi16(_mm_srli_epi16(p_vec1, 8),_mm_srli_epi16(p_vec2, 8));
          // repack
          return _mm_or_si128(
            _mm_slli_epi16(dst_odd, 8),
            _mm_srli_epi16(
               _mm_slli_epi16(dst_even, 8),
               8
            )
         );

      }
   };
   //doesn't work yet
   // template<>
   // struct div<sse<v128<uint8_t>>/*, 8*/> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename sse<v128<uint8_t>>::vector_t
   //    apply(
   //       typename sse<v128<uint8_t>>::vector_t const &p_vec1,
   //       typename sse<v128<uint8_t>>::vector_t const &p_vec2
   //    ) {
   //       trace("[VECTOR] - Divide 8 bit integer values from two registers (sse)");
   //       __m128d divhelper=_mm_set1_pd(0x0010000000000000);

   //       return
   //          _mm_xor_si128(
   //             _mm_castpd_si128(
   //                _mm_add_pd(
   //                   _mm_floor_pd(
   //                      _mm_div_pd(
   //                         _mm_castsi128_pd(p_vec1),
   //                         _mm_castsi128_pd(p_vec2)
   //                      )
   //                   ),
   //                   divhelper
   //                )
   //             ),
   //             _mm_castpd_si128(
   //                divhelper
   //             )
   //          );
   //    }
   // };
   //doesn't work yet
   // template<>
   // struct mod<sse<v128<uint8_t>>/*, 8*/> {
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static
   //    typename sse<v128<uint8_t>>::vector_t
   //    apply(
   //       typename sse<v128<uint8_t>>::vector_t const & p_vec1,
   //       typename sse<v128<uint8_t>>::vector_t const & p_vec2
   //    ){
   //       trace( "[VECTOR] - Modulo divide 8 bit integer values from two registers (sse)" );
   //       info( "[VECTOR] - MODULO IS A WORKAROUND" );
   //       __m128d divhelper = _mm_set1_pd(0x0010000000000000);
   //       __m128d intermediate =
   //          _mm_add_pd(
   //             _mm_floor_pd(
   //                _mm_div_pd(
   //                   _mm_castsi128_pd(p_vec1),
   //                   _mm_castsi128_pd(p_vec2)
   //                )
   //             ),
   //             divhelper
   //          );
   //       return
   //          _mm_sub_epi32(
   //             p_vec1,
   //             _mm_mul_epi32(
   //                _mm_xor_si128(
   //                   _mm_castpd_si128(intermediate),
   //                   _mm_castpd_si128(divhelper)
   //                ),
   //                p_vec2
   //             )
   //          );
   //    }
   // };
   //not tested
   template<>
   struct inv<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_sub_epi8( _mm_set1_epi8(0), p_vec1);
      }
   };
   template<>
   struct shift_left<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_set_epi8(
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 15) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 14) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 13) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 12) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 11) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 10) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 9) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 8) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 7) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 6) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 5) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 4) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 3) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 2) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 1) << p_distance),
                 (p_distance == 8) ? 0 : (_mm_extract_epi8(p_vec1, 0) << p_distance)

         );
      }
   };
   //not tested
   template<>
   struct shift_left_individual<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_data,
         typename sse<v128<uint8_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         
         uint8_t distance0 = _mm_extract_epi8(p_distance, 0);
         uint8_t distance1 = _mm_extract_epi8(p_distance, 1);
         uint8_t distance2 = _mm_extract_epi8(p_distance, 2);
         uint8_t distance3 = _mm_extract_epi8(p_distance, 3);
         uint8_t distance4 = _mm_extract_epi8(p_distance, 4);
         uint8_t distance5 = _mm_extract_epi8(p_distance, 5);
         uint8_t distance6 = _mm_extract_epi8(p_distance, 6);
         uint8_t distance7 = _mm_extract_epi8(p_distance, 7);
         uint8_t distance8 = _mm_extract_epi8(p_distance, 8);
         uint8_t distance9 = _mm_extract_epi8(p_distance, 9);
         uint8_t distance10 = _mm_extract_epi8(p_distance, 10);
         uint8_t distance11 = _mm_extract_epi8(p_distance, 11);
         uint8_t distance12 = _mm_extract_epi8(p_distance, 12);
         uint8_t distance13 = _mm_extract_epi8(p_distance, 13);
         uint8_t distance14 = _mm_extract_epi8(p_distance, 14);
         uint8_t distance15 = _mm_extract_epi8(p_distance, 15);
         return _mm_set_epi8(
                 (distance15 == 8) ? 0 : (_mm_extract_epi8(p_data, 15) << distance15),
                 (distance14 == 8) ? 0 : (_mm_extract_epi8(p_data, 14) << distance14),
                 (distance13 == 8) ? 0 : (_mm_extract_epi8(p_data, 13) << distance13),
                 (distance12 == 8) ? 0 : (_mm_extract_epi8(p_data, 12) << distance12),
                 (distance11 == 8) ? 0 : (_mm_extract_epi8(p_data, 11) << distance11),
                 (distance10 == 8) ? 0 : (_mm_extract_epi8(p_data, 10) << distance10),
                 (distance9 == 8) ? 0 : (_mm_extract_epi8(p_data, 9) << distance9),
                 (distance8 == 8) ? 0 : (_mm_extract_epi8(p_data, 8) << distance8),
                 (distance7 == 8) ? 0 : (_mm_extract_epi8(p_data, 7) << distance7),
                 (distance6 == 8) ? 0 : (_mm_extract_epi8(p_data, 6) << distance6),
                 (distance5 == 8) ? 0 : (_mm_extract_epi8(p_data, 5) << distance5),
                 (distance4 == 8) ? 0 : (_mm_extract_epi8(p_data, 4) << distance4),
                 (distance3 == 8) ? 0 : (_mm_extract_epi8(p_data, 3) << distance3),
                 (distance2 == 8) ? 0 : (_mm_extract_epi8(p_data, 2) << distance2),
                 (distance1 == 8) ? 0 : (_mm_extract_epi8(p_data, 1) << distance1),
                 (distance0 == 8) ? 0 : (_mm_extract_epi8(p_data, 0) << distance0)

         );
      }
   };
   template<>
   struct shift_right<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SIMD
         
         return _mm_set_epi8(
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 15)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 14)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 13)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 12)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 11)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 10)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 9)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 8)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 7)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 6)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 5)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 4)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 3)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 2)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 1)) >> p_distance),
                 (p_distance == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_vec1, 0)) >> p_distance)
         );
      }
   };
   // //not tested
   template<>
   struct shift_right_individual<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sse<v128<uint8_t>>::vector_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_data,
         typename sse<v128<uint8_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SIMD
         // SSE does not have an intrinsic for this.
         // The static_cast to an unsigned type is necessary, since the scalar
         // shift shifts in sign-bits otherwise.
         
         uint8_t distance0 = _mm_extract_epi8(p_distance, 0);
         uint8_t distance1 = _mm_extract_epi8(p_distance, 1);
         uint8_t distance2 = _mm_extract_epi8(p_distance, 2);
         uint8_t distance3 = _mm_extract_epi8(p_distance, 3);
         uint8_t distance4 = _mm_extract_epi8(p_distance, 4);
         uint8_t distance5 = _mm_extract_epi8(p_distance, 5);
         uint8_t distance6 = _mm_extract_epi8(p_distance, 6);
         uint8_t distance7 = _mm_extract_epi8(p_distance, 7);
         uint8_t distance8 = _mm_extract_epi8(p_distance, 8);
         uint8_t distance9 = _mm_extract_epi8(p_distance, 9);
         uint8_t distance10 = _mm_extract_epi8(p_distance, 10);
         uint8_t distance11 = _mm_extract_epi8(p_distance, 11);
         uint8_t distance12 = _mm_extract_epi8(p_distance, 12);
         uint8_t distance13 = _mm_extract_epi8(p_distance, 13);
         uint8_t distance14 = _mm_extract_epi8(p_distance, 14);
         uint8_t distance15 = _mm_extract_epi8(p_distance, 15);
         return _mm_set_epi8(
                 (distance15 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 15)) >> distance15),
                 (distance14 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 14)) >> distance14),
                 (distance13 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 13)) >> distance13),
                 (distance12 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 12)) >> distance12),
                 (distance11 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 11)) >> distance11),
                 (distance10 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 10)) >> distance10),
                 (distance9 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 9)) >> distance9),
                 (distance8 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 8)) >> distance8),
                 (distance7 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 7)) >> distance7),
                 (distance6 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 6)) >> distance6),
                 (distance5 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 5)) >> distance5),
                 (distance4 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 4)) >> distance4),
                 (distance3 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 3)) >> distance3),
                 (distance2 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 2)) >> distance2),
                 (distance1 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 1)) >> distance1),
                 (distance0 == 8) ? 0 : (static_cast<uint8_t>(_mm_extract_epi8(p_data, 0)) >> distance0)
         );
      }
   };

}
#endif /* MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_CALC_SSE_H */
