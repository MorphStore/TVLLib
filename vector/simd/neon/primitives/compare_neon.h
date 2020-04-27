/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   compare_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 15:57
 */

#ifndef COMPARE_NEON_H
#define COMPARE_NEON_H


#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/compare.h"

#include <functional>

namespace vectorlib{
   template<>
   struct equal<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon<v128<uint64_t>>::mask_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const p_vec1,
         typename neon<v128<uint64_t>>::vector_t const p_vec2
      ) {
         
         neon<v128<uint64_t>>::vector_t vec_comp = vmovq_n_u64(0);
         vec_comp = vsetq_lane_u64(1, vec_comp, 0);
         vec_comp = vsetq_lane_u64(2, vec_comp, 1);
         neon<v128<uint64_t>>::vector_t vec= vandq_u64(vceqq_u64(p_vec1, p_vec2), vec_comp);
         
         return (neon<v128<uint64_t>>::mask_t)(vgetq_lane_u64(vec,0)+  vgetq_lane_u64(vec,1));
      }
   };
   template<>
   struct less<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon<v128<uint64_t>>::mask_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         
         neon<v128<uint64_t>>::vector_t vec_comp = vmovq_n_u64(0);
         vec_comp = vsetq_lane_u64(1, vec_comp, 0);
         vec_comp = vsetq_lane_u64(2, vec_comp, 1);
         neon<v128<uint64_t>>::vector_t vec= vandq_u64(vcltq_u64(p_vec1, p_vec2), vec_comp);
         
         return (neon<v128<uint64_t>>::mask_t)(vgetq_lane_u64(vec,0)+  vgetq_lane_u64(vec,1));
      }
   };
   template<>
   struct lessequal<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon<v128<uint64_t>>::mask_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         
         
         neon<v128<uint64_t>>::vector_t vec_comp = vmovq_n_u64(0);
         vec_comp = vsetq_lane_u64(1, vec_comp, 0);
         vec_comp = vsetq_lane_u64(2, vec_comp, 1);
         neon<v128<uint64_t>>::vector_t vec= vandq_u64(vcleq_u64(p_vec1, p_vec2), vec_comp);
         
         return (neon<v128<uint64_t>>::mask_t)(vgetq_lane_u64(vec,0)+  vgetq_lane_u64(vec,1));
      }
   };

   template<>
   struct greater<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon<v128<uint64_t>>::mask_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         
         neon<v128<uint64_t>>::vector_t vec_comp = vmovq_n_u64(0);
         vec_comp = vsetq_lane_u64(1, vec_comp, 0);
         vec_comp = vsetq_lane_u64(2, vec_comp, 1);
         neon<v128<uint64_t>>::vector_t vec= vandq_u64(vcgtq_u64(p_vec1, p_vec2), vec_comp);
         
         return (neon<v128<uint64_t>>::mask_t)(vgetq_lane_u64(vec,0)+  vgetq_lane_u64(vec,1));
      }
   };
   template<>
   struct greaterequal<neon<v128<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon<v128<uint64_t>>::mask_t
      apply(
         typename neon<v128<uint64_t>>::vector_t const & p_vec1,
         typename neon<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         
              neon<v128<uint64_t>>::vector_t vec_comp = vmovq_n_u64(0);
         vec_comp = vsetq_lane_u64(1, vec_comp, 0);
         vec_comp = vsetq_lane_u64(2, vec_comp, 1);
         neon<v128<uint64_t>>::vector_t vec= vandq_u64(vcgeq_u64(p_vec1, p_vec2), vec_comp);
         
         return (neon<v128<uint64_t>>::mask_t)(vgetq_lane_u64(vec,0)+  vgetq_lane_u64(vec,1));
      }
   };
   template<>
   struct count_matches<neon<v128<uint64_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename neon<v128<uint64_t>>::mask_t const & p_mask
      ) {
         
         // @todo Which one is faster?
         return __builtin_popcount(p_mask);
      }
   };

}

#endif /* COMPARE_NEON_H */

