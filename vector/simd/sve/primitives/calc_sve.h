/* 
 * File:   calc_sve.h
 * Author: André Berthold
 *
 * Created on 11. Mai 2020, 11:07
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_CALC_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_CALC_SVE_H


#include "../../../preprocessor.h"
#include "../extension_sve.h"
#include "../../../primitives/calc.h"

#include "create_sve.h"
#include "../predicate_build_sve.h"

#include <functional>
#include <cstdint>
#include <type_traits>

namespace vectorlib{

   template<typename T>
   struct add<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	         typename sve<extv< U >>::vector_t const & p_vec2 ) {
          return svadd_z(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct sub<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	         typename sve<extv< U >>::vector_t const & p_vec2 ) {
         return svsub_z(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct min<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	         typename sve<extv< U >>::vector_t const & p_vec2 ) {
         return svmin_z(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };

   template<typename T>
   struct hadd<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::base_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1 ){
         return svaddv(svptrue_select<T>::get(), p_vec1);
      }
   };
   
   template<typename T>
   struct mul<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	         typename sve<extv< U >>::vector_t const & p_vec2 ) {
         return svmul_z(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct div<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::integral_constant<bool, (sizeof(U) >= 4)> >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	         typename sve<extv< U >>::vector_t const & p_vec2 ) {
         return svdiv_z(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct mod<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::integral_constant<bool,(sizeof(U) >= 4)> >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	         typename sve<extv< U >>::vector_t const & p_vec2 ) {         
         return
         svsub_z(svptrue_select<T>::get(), 
                 p_vec1, 
                 svmul_z(svptrue_select<T>::get(), 
                         svdiv_z(svptrue_select<T>::get(), 
                                 p_vec1, 
                                 p_vec2), 
                         p_vec2));
      }
   };
   
   template<typename T>
   struct inv<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_signed< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1 ){
         return svneg_z(svptrue_select<T>::get(), p_vec1);
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::is_unsigned< U > >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1 ){
         return svsub_z(svptrue_select<T>::get(), create<sve<extv<U>>, 8 * sizeof(U)>::set1(0), p_vec1);
      }
   };
   
   template<typename T>
   struct shift_left<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value , int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	         int const & p_distance) {
         return svlsl_z(svptrue_select<T>::get(), p_vec1, (typename std::make_unsigned<U>::type)(p_distance));
      }
   };
   
   template<typename T>
   struct shift_left_individual<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	     typename sve<extv< U >>::vector_t const & p_vec2 ) {
         //@todo add some reinterpretation, cause svlsl only allows svuint... as third parameter
         return svlsl_z(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
   template<typename T>
   struct shift_right<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	     int const & p_distance) {
         return svlsr_z(svptrue_select<T>::get(), p_vec1, (typename std::make_unsigned<U>::type)(p_distance));
      }
   };
   
   template<typename T>
   struct shift_right_individual<sve<extv< T >>> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve<extv< U >>::vector_t
      apply( typename sve<extv< U >>::vector_t const & p_vec1,
	     typename sve<extv< U >>::vector_t const & p_vec2 ) {
         //@todo add some reinterpretation, cause svlsr only allows svuint... as third parameter
         return svlsr_z(svptrue_select<T>::get(), p_vec1, p_vec2);
      }
   };
   
/*   template<typename T>
   struct count_leading_zero<sve<extv<T>>> {
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::integral_constant<bool,sizeof(U) == 8> >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename sve<extv<U>>::mask_t const & p_mask ) {
         return (uint8_t) svcntp_b64(svptrue_select<T>::get(), svbrkb_z(svptrue_select<T>::get(), p_mask));
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::integral_constant<bool,sizeof(U) == 4> >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename sve<extv<U>>::mask_t const & p_mask ) {
         return (uint8_t) svcntp_b32(svptrue_select<T>::get(), svbrkb_z(svptrue_select<T>::get(), p_mask));
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::integral_constant<bool,sizeof(U) == 2> >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename sve<extv<U>>::mask_t const & p_mask ) {
         return (uint8_t) svcntp_b16(svptrue_select<T>::get(), svbrkb_z(svptrue_select<T>::get(), p_mask));
      }
      
      template< typename U = T, typename std::enable_if< std::conjunction< std::is_integral< U >, std::integral_constant<bool,sizeof(U) == 1> >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t//@todo if 8 bit ints are stored in 2048 bit vector -> range from 0 - 255 is not enought to ilustrate the case that all 256 bits are zero
      apply(
         typename sve<extv<U>>::mask_t const & p_mask ) {
         return (uint8_t) svcntp_b8(svptrue_select<T>::get(), svbrkb_z(svptrue_select<T>::get(), p_mask));
      }

   };*/
}
#endif /* MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_CALC_SVE_H */
