/* 
 * File:   io_sve.h
 * Author: André Berthold
 *
 * Created on 22. Mai 2020, 11:07
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_IO_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_IO_SVE_H

#include "../../../preprocessor.h"
#include "../extension_sve.h"
#include "../../../primitives/io.h"

#include "../predicate_build_sve.h"

#include <functional>

namespace vectorlib {

   template<typename T, int IOGranularity>
   struct io<sve<extv<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<T>>::vector_t
      load( U const * const p_DataPtr ) {
         return svld1(svptrue_select<T>::get(), p_DataPtr);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, typename sve< extv< U > >::vector_t p_vec ) {
         svst1(svptrue_select<T>::get(), p_DataPtr, p_vec);
         return;
      }
   };

   template<typename T, int IOGranularity>
   struct io<sve<extv<T>>,iov::STREAM, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<U>>::vector_t
      load( U const * const p_DataPtr ) {
         return svld1(svptrue_select<T>::get(), p_DataPtr);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, typename sve< extv< U > >::vector_t p_vec ) {
         svst1(svptrue_select<T>::get(), p_DataPtr, p_vec);
         return;
      }
   };

   template<typename T, int IOGranularity>
   struct io<sve<extv<T>>,iov::UNALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<T>>::vector_t
      load( U const * const p_DataPtr ) {
         sve<extv<uint8_t>>::vector_t p_vec = svld1(svptrue_select<uint8_t>::get(), reinterpret_cast<uint8_t const *>(p_DataPtr));
         return _reinterpret<uint8_t, U>(p_vec);
      }

      template<typename U, typename V, 
	       typename std::enable_if< std::is_integral< U >::value, int >::type = 0,
               typename std::enable_if< std::is_integral< V >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<V>>::vector_t
      _reinterpret(typename sve<extv<U>>::vector_t p_vec) {
         if constexpr (       sizeof(V) == 1 &&   std::is_signed<U>::value) {
            return svreinterpret_s8(p_vec);
         } else if constexpr (sizeof(V) == 1 && std::is_unsigned<U>::value) {
            return svreinterpret_u8(p_vec);
         } else if constexpr (sizeof(V) == 2 &&   std::is_signed<U>::value) {
            return svreinterpret_s16(p_vec);
         } else if constexpr (sizeof(V) == 2 && std::is_unsigned<U>::value) {
            return svreinterpret_u16(p_vec);
         } else if constexpr (sizeof(V) == 4 &&   std::is_signed<U>::value) {
            return svreinterpret_s32(p_vec);
         } else if constexpr (sizeof(V) == 4 && std::is_unsigned<U>::value) {
            return svreinterpret_u32(p_vec);
         } else if constexpr (sizeof(V) == 8 &&   std::is_signed<U>::value) {
            return svreinterpret_s64(p_vec);
         } else {
            return svreinterpret_u64(p_vec);
         }
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, typename sve< extv< U > >::vector_t p_vec ) {
         sve<extv<uint8_t>>::vector_t re_vec = _reinterpret<U, uint8_t>(p_vec);
         svst1(svptrue_select<T>::get(), reinterpret_cast<uint8_t *>(p_DataPtr), p_vec);
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr, typename sve< extv< U > >::vector_t p_vec, typename sve< extv< U > >::mask_t mask ) {
         //packs the active elements of the vector at the beginning and fills with zeros, and writes ALL to p_DataPtr
         svst1(svptrue_select<T>::get(), p_DataPtr, svcompact(mask, p_vec));
         return;
      }
   };
   
   template<typename T, int IOGranularity, int Scale>
   struct gather_t<sve<extv<T>>, IOGranularity, Scale> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< U > >::vector_t
      apply( U const * const p_DataPtr,  typename sve< extv< U > >::vector_t p_vec ) {
         return svld1_gather_offset(svptrue_select<T>::get(), p_DataPtr, svmul_z(svptrue_select<T>::get(), p_vec, Scale));
      }

   };
}

#endif //MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_IO_SVE_H

