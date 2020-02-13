/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   extract_scalar.h
 * Author: Annett
 *
 * Created on 28. Mai 2019, 16:01
 */

#ifndef EXTRACT_SCALAR_H
#define EXTRACT_SCALAR_H

#include "../../preprocessor.h"
#include "../extension_scalar.h"
#include "../../primitives/extract.h"

#include <functional>

namespace vectorlib {


   template<typename T>
   struct extract<scalar<v64<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v64< U > >::base_t
      extract_value( scalar< v64< uint64_t > >::vector_t p_vec, MSV_CXX_ATTRIBUTE_PPUNUSED int idx) {
         TALLY_EXTRACT_SCALAR
         
         return p_vec;
      }
   };

   template<typename T>
   struct extract<scalar<v32<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v32< U > >::base_t
      extract_value( scalar< v32< uint32_t > >::vector_t p_vec, MSV_CXX_ATTRIBUTE_PPUNUSED int idx) {
         TALLY_EXTRACT_SCALAR
         
         return p_vec;
      }
   };

   template<typename T>
   struct extract<scalar<v16<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v16< U > >::base_t
      extract_value( scalar< v16< uint16_t > >::vector_t p_vec, MSV_CXX_ATTRIBUTE_PPUNUSED int idx) {
         TALLY_EXTRACT_SCALAR
         
         return p_vec;
      }
   };

   template<typename T>
   struct extract<scalar<v8<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v8< U > >::base_t
      extract_value( scalar< v8< uint8_t > >::vector_t p_vec, MSV_CXX_ATTRIBUTE_PPUNUSED int idx) {
         TALLY_EXTRACT_SCALAR
         
         return p_vec;
      }
   };

}

#endif /* EXTRACT_SCALAR_H */
