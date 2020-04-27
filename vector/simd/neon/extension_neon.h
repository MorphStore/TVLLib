/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   extension_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 14:41
 */

#ifndef EXTENSION_NEON_H
#define EXTENSION_NEON_H

#include <cstdint>
#include <type_traits>
#include <arm_neon.h>
#include "../../vector_extension_structs.h"

namespace vectorlib {
   template<class VectorReg>
   struct neon;

   template<typename T>
   struct neon< v128< T > > {
      static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
      using vector_helper_t = v128<T>;
      using base_t = typename vector_helper_t::base_t;

      using vector_t =
      typename std::conditional<
         (1==1) == std::is_integral<T>::value,    // if T is integer, ugly but it works
         uint64x2_t,
         typename std::conditional<
            (1==1) == std::is_same<float, T>::value, // else if T is float
            float32x4_t,                       //    vector register = __m128
            poly16x8_t                       // else [T == double]: vector register = __m128d
         >::type
      >::type;

      using size = std::integral_constant<size_t, sizeof(vector_t)>;
      using mask_t = uint16_t;
   };

}

#endif /* EXTENSION_NEON_H */

