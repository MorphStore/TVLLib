/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calc_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 15:56
 */

#ifndef CALC_NEON_H
#define CALC_NEON_H

#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/calc.h"

#include <functional>

namespace vectorlib{

   template<>
   struct add<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ){
         
         return vaddq_u64( p_vec1, p_vec2);
      }
   };
   

   template<>
   struct min<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ){
         
         return vbslq_u64(vcltq_u64(p_vec1, p_vec2),p_vec1, p_vec2);
      }
   };
   
   template<>
   struct sub<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ){
         
         return vsubq_u64( p_vec1, p_vec2);
      }
   };
   template<>
   struct hadd<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::base_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1
      ){
         
         return
             vgetq_lane_u64(p_vec1, 0) +  vgetq_lane_u64(p_vec1, 1);
      }
   };
   
   template<>
   struct mul<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ){

         return vmull_u32( vmovn_u64(p_vec1), vmovn_u64(p_vec2)); //TODO Does this really work?
      }
   };

  
   template<>
   struct inv<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1
      ){
         
         return vsubq_u64( vdupq_n_u64(0), p_vec1);
      }
   };

   template<>
   struct shift_left<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         
         return vshlq_n_u64(p_vec1, p_distance);
      }
   };

   template<>
   struct shift_left_individual<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_data,
         typename neon<v128<uint64_t>>::vector_t const & p_distance
      ){
         
         
         return vshlq_u64(p_data,p_distance);
      }
   };

   template<>
   struct shift_right<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         
         return vshrq_n_u64(p_vec1, p_distance);
      }
   };

   template<>
   struct shift_right_individual<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<uint64_t>>::vector_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_data,
         typename neon<v128<uint64_t>>::vector_t const & p_distance
      ){
         
         return vshlq_u64(p_data, vsubq_u64( vdupq_n_u64(0), p_distance));
      }
   };

}

#endif /* CALC_NEON_H */

