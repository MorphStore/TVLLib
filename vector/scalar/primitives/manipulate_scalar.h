/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   manipulate_scalar.h
 * Author: Annett
 *
 * Created on 27. Mai 2019, 17:24
 */

#ifndef MANIPULATE_SCALAR_H
#define MANIPULATE_SCALAR_H


#include "../../preprocessor.h"
#include "../extension_scalar.h"
#include "../../primitives/manipulate.h"

#include <functional>

namespace vectorlib{
   template<typename T>
   struct manipulate<scalar<v64<T>>, 64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v64< U > >::vector_t
      rotate( scalar< v64< uint64_t > >::vector_t p_vec ) {
         TALLY_MANIPULATE_SCALAR
         return p_vec;
      }
   };

   template<typename T>
   struct manipulate<scalar<v32<T>>, 32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v32< U > >::vector_t
      rotate( scalar< v32< uint32_t > >::vector_t p_vec ) {
         TALLY_MANIPULATE_SCALAR
         return p_vec;
      }
   };

   template<typename T>
   struct manipulate<scalar<v16<T>>, 16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v16< U > >::vector_t
      rotate( scalar< v16< uint16_t > >::vector_t p_vec ) {
         TALLY_MANIPULATE_SCALAR
         return p_vec;
      }
   };

   template<typename T>
   struct manipulate<scalar<v8<T>>, 8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v8< U > >::vector_t
      rotate( scalar< v8< uint8_t > >::vector_t p_vec ) {
         TALLY_MANIPULATE_SCALAR
         return p_vec;
      }
   };
}

#endif /* MANIPULATE_SCALAR_H */
