/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   create_avx512.h
 * Author: Annett
 *
 * Created on 25. April 2019, 11:11
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_CREATE_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_CREATE_AVX512_H


#include "../../../preprocessor.h"
#include "../extension_avx512.h"
#include "../../../primitives/create.h"

#include <functional>

namespace vectorlib {


   template<typename T>
   struct create<avx512<v512<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set( uint64_t a7, uint64_t a6, uint64_t a5, uint64_t a4, uint64_t a3, uint64_t a2, uint64_t a1, uint64_t a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set_epi64(a7, a6, a5, a4,a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set_sequence( int a, int b) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set_epi64(a+7*b,a+6*b,a+5*b, a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set1( uint64_t a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set1_epi64(a0);
      }

   };

   template<typename T>
   struct create<avx512<v512<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set( int a15, int a14, int a13, int a12, int a11, int a10, int a9, int a8,int a7, int a6, int a5, int a4, int a3, int a2, int a1, int a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set_epi32(a15, a14, a13, a12, a11, a10, a9, a8,a7, a6, a5, a4, a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set_sequence( int a, int b) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set_epi32(a+15*b,a+14*b,a+13*b, a+12*b,a+11*b,a+10*b,a+9*b, a+8*b,a+7*b,a+6*b,a+5*b, a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set1( uint32_t a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set1_epi32(a0);
      }

   };
   //not tested
   template<typename T>
   struct create<avx512<v512<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set( U a31,U a30, U a29, U a28, U a27, U a26, U a25, U a24, U a23, U a22, U a21, U a20, U a19, U a18, U a17,
         U a16, U a15, U a14, U a13, U a12, U a11, U a10, U a9, U a8, U a7, U a6, U a5, U a4, U a3, U a2, U a1, U a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set_epi16(a31, a30, a29, a28, a27, a26, a25, a24, a23, a22, a21, a20, a19, a18, a17, a16,
            a15, a14, a13, a12, a11, a10, a9, a8,a7, a6, a5, a4, a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set_sequence( U a, int b) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set_epi16(a+31*b,a+30*b,a+29*b,a+28*b,a+27*b,a+26*b,a+25*b,a+24*b,a+23*b,a+22*b,a+21*b,a+20*b,
            a+19*b, a+18*b,a+17*b,a+16*b,a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b, a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set1( uint16_t a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set1_epi16(a0);
      }

   };
   //not tested
   template<typename T>
   struct create<avx512<v512<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< int > >::vector_t
      set(U a63, U a62, U a61, U a60, U a59, U a58, U a57, U a56, U a55, U a54, U a53, U a52, U a51, U a50, U a49, U a48,
      U a47, U a46, U a45, U a44, U a43, U a42, U a41, U a40, U a39, U a38, U a37, U a36, U a35, U a34, U a33, U a32,
      U a31,U a30, U a29, U a28, U a27, U a26, U a25, U a24, U a23, U a22, U a21, U a20, U a19, U a18, U a17,
         U a16, U a15, U a14, U a13, U a12, U a11, U a10, U a9, U a8, U a7, U a6, U a5, U a4, U a3, U a2, U a1, U a0) {
#if tally
create_simd += 1;
#endif
         __m512i v1 =_mm512_set_epi16(a63, a61, a59, a57, a55, a53, a51, a49, a47, a45, a43, a41, a39, a37, a35, a33, a31, a29, a27, a25, a23, a21, a19, a17, a15, a13, a11, a9, a7, a5, a3, a1);
         __m512i v2 = _mm512_set_epi16(a62, a60, a58, a56, a54, a52, a50, a48, a46, a44, a42, a40, a38, a36, a34, a32, a30, a28, a26, a24, a22, a20, a18, a16, a14, a12, a10, a8, a6, a4, a2, a0);
         __m512i und = _mm512_set1_epi16(0xFF);
         return _mm512_or_si512(
               _mm512_slli_epi16(_mm512_and_si512(v1, und), 8),
               _mm512_and_si512(v1, und)
            );
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set_sequence( U a, int b) {
#if tally
create_simd += 1;
#endif
         
         __m512i v1 = _mm512_set_epi16(a+63*b, a+61*b, a+59*b, a+57*b, a+55*b, a+53*b, a+51*b, a+49*b, a+47*b, a+45*b, a+43*b, a+41*b, a+39*b, a+37*b, a+35*b, a+33*b, a+31*b, a+29*b, a+27*b, a+25*b, a+23*b, a+21*b, a+19*b, a+17*b, a+15*b, a+13*b, a+11*b, a+9*b, a+7*b, a+5*b, a+3*b, a+b);
         __m512i v2 = _mm512_set_epi16(a+62*b, a+60*b, a+58*b, a+56*b, a+54*b, a+52*b, a+50*b, a+48*b, a+46*b, a+44*b, a+42*b, a+40*b, a+38*b, a+36*b,  a+34*b, a+32*b, a+30*b, a+28*b, a+26*b, a+24*b, a+22*b, a+20*b, a+18*b, a+16*b, a+14*b, a+12*b, a+10*b, a+8*b, a+6*b, a+4*b, a+2*b, a);

         __m512i und = _mm512_set1_epi16(0xFF);
         return _mm512_or_si512(
               _mm512_slli_epi16(_mm512_and_si512(v1, und), 8),
               _mm512_and_si512(v1, und)
            );
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      set1( uint8_t a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm512_set1_epi8(a0);
      }

   };

   template<typename T>
   struct create<avx512<v256<T>>,64> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v256< U > >::vector_t
      set_sequence( int a, int b) {
#if tally
create_simd += 1;
#endif
         
         return _mm256_set_epi64x(a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v256< U > >::vector_t
      set1( uint64_t a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm256_set1_epi64x(a0);
      }
   };

   template<typename T>
   struct create<avx512<v128<T>>,64> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v128< U > >::vector_t
      set_sequence( int a, int b) {
#if tally
create_simd += 1;
#endif
         
         return _mm_set_epi64x(a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v128< U > >::vector_t
      set1( uint64_t a0) {
#if tally
create_simd += 1;
#endif
         
         return _mm_set1_epi64x(a0);
      }
   };

}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_CREATE_AVX512_H */
