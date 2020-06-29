/* 
 * File:   compare_sve.h
 * Author: André Berthold
 *
 * Created on 22. Mai 2020, 18:34
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_COMPARE_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_COMPARE_SVE_H


#include <core/utils/preprocessor.h>
#include <core/memory/mm_glob.h>
#include <vector/simd/sve/extension_sve.h>
#include <vector/primitives/compare.h>
#include "../predicate_build_sve.h"

#include <functional>

namespace vectorlib{
   
   template<typename T>
   struct equal<sve<extv<T>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<T>>::mask_t
      apply(
         typename sve<extv<T>>::vector_t const & p_vec1,
         typename sve<extv<T>>::vector_t const & p_vec2
      ) {
         trace( "[VECTOR] - Compare integer values from two registers: == ? (SVE)" );
         return svcmpeq(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct less<sve<extv<T>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<T>>::mask_t
      apply(
         typename sve<extv<T>>::vector_t const & p_vec1,
         typename sve<extv<T>>::vector_t const & p_vec2
      ) {
         trace( "[VECTOR] - Compare integer values from two registers: < ? (SVE)" );
         return svcmplt(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct lessequal<sve<extv<T>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<T>>::mask_t
      apply(
         typename sve<extv<T>>::vector_t const & p_vec1,
         typename sve<extv<T>>::vector_t const & p_vec2
      ) {
         trace( "[VECTOR] - Compare integer values from two registers: <= ? (SVE)" );
         return svcmple(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct greater<sve<extv<T>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<T>>::mask_t
      apply(
         typename sve<extv<T>>::vector_t const & p_vec1,
         typename sve<extv<T>>::vector_t const & p_vec2
      ) {
         trace( "[VECTOR] - Compare integer values from two registers: > ? (SVE)" );
         return svcmpgt(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct greaterequal<sve<extv<T>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv<T>>::mask_t
      apply(
         typename sve<extv<T>>::vector_t const & p_vec1,
         typename sve<extv<T>>::vector_t const & p_vec2
      ) {
         trace( "[VECTOR] - Compare integer values from two registers: >= ? (SVE)" );
         return svcmpge(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct count_matches<sve<extv<T>>> {

      //64 BIT   
      template< typename U = T, typename std::enable_if< sizeof(U) == 8, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint16_t /*if 8bit wide ints are stored in a 2048bit wide vector -> 
      /* possible that 256 elemenents are active -> uint8_t cannot represent the number 256*/
      apply(
         typename sve<extv<T>>::mask_t const & p_mask
      ) {
         trace( "[VECTOR] - Count matches in a 64 bit comparison mask (SVE)" );
         return svcntp_b64(svptrue_select<T>::get(), p_mask);
      }
      
      //32 BIT
      template< typename U = T, typename std::enable_if< sizeof(U) == 4, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint16_t /*if 8bit wide ints are stored in a 2048bit wide vector -> 
      /* possible that 256 elemenents are active -> uint8_t cannot represent the number 256*/
      apply(
         typename sve<extv<T>>::mask_t const & p_mask
      ) {
         trace( "[VECTOR] - Count matches in a 32 bit comparison mask (SVE)" );
         return svcntp_b32(svptrue_select<T>::get(), p_mask);
      }

      //16 BIT      
      template< typename U = T, typename std::enable_if< sizeof(U) == 2, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint16_t /*if 8bit wide ints are stored in a 2048bit wide vector -> 
      /* possible that 256 elemenents are active -> uint8_t cannot represent the number 256*/
      apply(
         typename sve<extv<T>>::mask_t const & p_mask
      ) {
         trace( "[VECTOR] - Count matches in a 16 bit comparison mask (SVE)" );
         return svcntp_b16(svptrue_select<T>::get(), p_mask);
      }

      // 8 BIT      
      template< typename U = T, typename std::enable_if< sizeof(U) == 1, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint16_t /*if 8bit wide ints are stored in a 2048bit wide vector -> 
      /* possible that 256 elemenents are active -> uint8_t cannot represent the number 256*/
      apply(
         typename sve<extv<T>>::mask_t const & p_mask
      ) {
         trace( "[VECTOR] - Count matches in a  8 bit comparison mask (SVE)" );
         return svcntp_b8(svptrue_select<T>::get(), p_mask);
      }
   };
}


#endif /*MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_COMPARE_SVE_H*/
