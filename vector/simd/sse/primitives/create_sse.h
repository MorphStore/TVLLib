/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_CREATE_SSE_H
#define MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_CREATE_SSE_H


#include "../../../preprocessor.h"
#include "../extension_sse.h"
#include "../../../primitives/create.h"

#include <functional>

   /** @todo: set should be look like that:
    * template< typename... Ts >
    * struct static_and : std::true_type { };
    * template< typename T, typename... Ts >
    * struct static_and< T, Ts... > :
    *    std::conditional< T::value, static_and< Ts... >, std::false_type >::type{};
    *
    * template< typename T, typename... Ts >
    * using static_all_T = static_and< std::is_same< Ts, T > ... >;
    *
    *
    * template< typename... Args >
    * __m128i f(Args... args ) {
    *    static_assert( static_all_T< int, Args... >::value, "");
    *    static_assert( sizeof...(Args) * sizeof( int ) == sizeof( __m128i ), "Too few or too many arguments provided." );
    *    return _mm_set_epi32( std::forward< Args >( args ) ... );
    * }
    */
namespace vectorlib {

   template<typename T>
   struct create<sse<v128<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set( int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi64x(a1, a0);
      }


      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set1( uint64_t a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set1_epi64x(a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi64x(a+b, a);
      }

   };

   template<typename T>
   struct create<sse<v128<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set( int a3, int a2, int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi32(a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi32(a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set1( uint32_t a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set1_epi32(a0);
      }

   };

   template<typename T>
   struct create<sse<v128<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set( int a7, int a6, int a5, int a4, int a3, int a2, int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi16(a7, a6, a5, a4, a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi16(a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set1( uint16_t a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set1_epi16(a0);
      }

   };

   template<typename T>
   struct create<sse<v128<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set( int a15, int a14, int a13, int a12, int a11, int a10, int a9, int a8, int a7, int a6, int a5, int a4, int a3, int a2, int a1, int a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi8(a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4, a3, a2, a1, a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set_sequence( int a, int b) {
         TALLY_CREATE_SIMD
         
         return _mm_set_epi8(a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b, a);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse< v128< U > >::vector_t
      set1( uint8_t a0) {
         TALLY_CREATE_SIMD
         
         return _mm_set1_epi8(a0);
      }

   };


}

#endif /* MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_CREATE_SSE_H */
