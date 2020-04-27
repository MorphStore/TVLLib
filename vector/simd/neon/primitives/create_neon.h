/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   create_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 15:57
 */

#ifndef CREATE_NEON_H
#define CREATE_NEON_H

#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/create.h"

#include <functional>

namespace vectorlib {

   template<typename T>
   struct create<neon<v128<T>>,64> {
       
      
    template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::vector_t
      set1( uint64_t a0) {
         
         return vdupq_n_u64(a0);
      }
   
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::vector_t
      set_sequence( int a, int b) {
         
         neon< v128< uint64_t > >::vector_t result = vmovq_n_u64(0);
         result = vsetq_lane_u64(a, result, 0); 
         return vsetq_lane_u64(a+b, result, 1);
         
      }
      
   };
   
}

#endif /* CREATE_NEON_H */

