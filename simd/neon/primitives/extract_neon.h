/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   extract_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 15:57
 */

#ifndef EXTRACT_NEON_H
#define EXTRACT_NEON_H


#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/extract.h"

#include <functional>

namespace vectorlib {
    
    
   template<typename T>
   struct extract<neon<v128<T>>,64> {
       
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::base_t
      extract_value( neon< v128< uint64_t > >::vector_t p_vec, int idx) {
         
        
         if (idx == 0) return vgetq_lane_u64(p_vec, 0);
         return vgetq_lane_u64(p_vec, 1);
      }
   };
   
   
}
      

#endif /* EXTRACT_NEON_H */

