/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   create_scalar.h
 * Author: Annett
 *
 * Created on 21. Mai 2019, 13:17
 */

#ifndef CREATE_SCALAR_H
#define CREATE_SCALAR_H


#include "../../preprocessor.h"
#include "../extension_scalar.h"
#include "../../primitives/create.h"

#include <functional>

namespace vectorlib {


   template<typename T>
   struct create<scalar<v64<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64< uint64_t > >::vector_t
      set1( uint64_t a0) {
         TALLY_CREATE_SCALAR
         
         return reinterpret_cast<typename scalar< v64< uint64_t > >::vector_t> (a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v64< U > >::vector_t
      set_sequence( int a, MSV_CXX_ATTRIBUTE_PPUNUSED int b) {
         TALLY_CREATE_SCALAR
         
         return a;
      }
   };

   //start 32 bit

   template<typename T>
   struct create<scalar<v32<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32< T > >::vector_t
      set1( uint32_t a0) {
         TALLY_CREATE_SCALAR
         
         return reinterpret_cast<typename scalar< v32< T > >::vector_t> (a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v32< U > >::vector_t
      set_sequence( int a, MSV_CXX_ATTRIBUTE_PPUNUSED int b) {
         TALLY_CREATE_SCALAR
         
         return a;
      }
   };

   //start 16 bit

   template<typename T>
   struct create<scalar<v16<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v16< T > >::vector_t
      set1( uint16_t a0) {
         TALLY_CREATE_SCALAR
         
         return reinterpret_cast<typename scalar< v16< T > >::vector_t> (a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v16< U > >::vector_t
      set_sequence( int a, MSV_CXX_ATTRIBUTE_PPUNUSED int b) {
         TALLY_CREATE_SCALAR
         
         return a;
      }
   };

   //start 8 bit

   template<typename T>
   struct create<scalar<v8<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v8< T > >::vector_t
      set1( uint8_t a0) {
         TALLY_CREATE_SCALAR
         
         return reinterpret_cast<typename scalar< v8< T > >::vector_t> (a0);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v8< U > >::vector_t
      set_sequence( int a, MSV_CXX_ATTRIBUTE_PPUNUSED int b) {
         TALLY_CREATE_SCALAR
         
         return a;
      }
   };
}


#endif /* CREATE_SCALAR_H */