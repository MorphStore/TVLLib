/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   logic_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 15:57
 */

#ifndef LOGIC_NEON_H
#define LOGIC_NEON_H

#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/logic.h"


namespace vectorlib {


   template<typename T>
   struct logic<neon<v128<T>>, neon<v128<T>>::vector_helper_t::size_bit::value > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<T>>::vector_t
      bitwise_and( typename neon<v128<T>>::vector_t const & p_In1, typename neon<v128<T>>::vector_t const & p_In2) {
         return vandq_u64( p_In1, p_In2 );
      }
      
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<T>>::vector_t
      bitwise_or( typename neon<v128<T>>::vector_t const & p_In1, typename neon<v128<T>>::vector_t const & p_In2) {
         return vorrq_u64( p_In1, p_In2 );
      }
   };


}

#endif /* LOGIC_NEON_H */

