/*
 * File:   create_sve.h
 * Author: André Berthold
 *
 * Created on 11. Mai 2020, 11:11
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_CREATE_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_CREATE_SVE_H


#include <core/utils/preprocessor.h>
#include <core/memory/mm_glob.h>
#include <vector/simd/sve/extension_sve.h>
#include <vector/primitives/create.h>

#include <functional>
#include <cstdint>

namespace vectorlib {

   template<typename T>
   struct create<sve<extv<T>>, 64> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint64_t > >::vector_t
      set_sequence( uint64_t a, uint64_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_u64(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint64_t > >::vector_t
      set1( uint64_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_u64(a0);
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int64_t > >::vector_t
      set_sequence( int64_t a, int64_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_s64(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int64_t > >::vector_t
      set1( int64_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_s64(a0);
      }

      template< typename U = T, typename std::enable_if< std::is_same<float, U>::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< U > >::vector_t
      set1( float a0) {
         trace( "[VECTOR] - set1 (float) sve register." );
         return svdup_f64(a0);
      }
   };
   
   template<typename T>
   struct create<sve<extv<T>>, 32> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint32_t > >::vector_t
      set_sequence( uint32_t a, uint32_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_u32(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint32_t > >::vector_t
      set1( uint32_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_u32(a0);
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int32_t > >::vector_t
      set_sequence( int32_t a, int32_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_s32(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int32_t > >::vector_t
      set1( int32_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_s32(a0);
      }

      template< typename U = T, typename std::enable_if< std::is_same<double, U>::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< U > >::vector_t
      set1( double a0) {
         trace( "[VECTOR] - set1 (double) sve register." );
         return svdup_f32(a0);
      }
   };
   
   template<typename T>
   struct create<sve<extv<T>>, 16> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint16_t > >::vector_t
      set_sequence( uint16_t a, uint16_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_u16(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint16_t > >::vector_t
      set1( uint16_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_u16(a0);
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int16_t > >::vector_t
      set_sequence( int16_t a, int16_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_s16(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int16_t > >::vector_t
      set1( int16_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_s16(a0);
      }
   };
   
   template<typename T>
   struct create<sve<extv<T>>, 8> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint8_t > >::vector_t
      set_sequence( uint8_t a, uint8_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_u8(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< uint8_t > >::vector_t
      set1( uint8_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_u8(a0);
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int8_t > >::vector_t
      set_sequence( int8_t a, int8_t b ) {
         trace( "[VECTOR] - set_sequence sve register." );
         return svindex_s8(a, b);
      }

      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< int8_t > >::vector_t
      set1( int8_t a0 ) {
         trace( "[VECTOR] - set1 sve register." );
         return svdup_s8(a0);
      }
   };
}

#endif /* MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_CREATE_SVE_H*/
