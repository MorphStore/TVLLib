/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   create_avx2.h
 * Author: Annett
 *
 * Created on 25. April 2019, 11:11
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_CREATE_AVX2_H
#define MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_CREATE_AVX2_H

#include "../../../preprocessor.h"
#include "../extension_avx2.h"
#include "../../../primitives/create.h"

#include <functional>

namespace vectorlib {


   template<typename T>
   struct create<avx2<v256<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set( int a3, int a2, int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi64x(a3, a2, a1, a0);
      }


      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi64x(a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set1( int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set1_epi64x(a0);
      }

   };

   template<typename T>
   struct create<avx2<v256<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set( int a7, int a6, int a5, int a4, int a3, int a2, int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi32(a7, a6, a5, a4, a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi32(a+7*b,a+6*b,a+5*b, a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set1( int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set1_epi32(a0);
      }

   };

   template<typename T>
   struct create<avx2<v256<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set( int a15, int a14, int a13, int a12, int a11, int a10, int a9, int a8, int a7, int a6, int a5, int a4, int a3, int a2, int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi16(a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4, a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi16(a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b, a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set1( int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set1_epi16(a0);
      }

   };

   template<typename T>
   struct create<avx2<v256<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set( int a31,int a30, int a29, int a28, int a27, int a26, int a25, int a24, int a23, int a22, int a21, int a20, int a19, int a18, int a17, int a16, int a15, int a14, int a13, int a12, int a11, int a10, int a9, int a8, int a7, int a6, int a5, int a4, int a3, int a2, int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi8(a31, a30, a29, a28, a27, a26, a25, a24, a23, a22, a21, a20, a19, a18, a17, a16, a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4, a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm256_set_epi8(a+31*b,a+30*b,a+29*b,a+28*b,a+27*b,a+26*b,a+25*b,a+24*b,a+23*b,a+22*b,a+21*b,a+20*b,a+19*b, a+18*b,a+17*b,a+16*b,a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b, a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      set1( int a0) {
         TALLY_CREATE_SIMD
         
         return _mm256_set1_epi8(a0);
      }
   };


}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_CREATE_AVX2_H */
