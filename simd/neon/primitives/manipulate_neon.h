/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   manipulate_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 15:58
 */

#ifndef MANIPULATE_NEON_H
#define MANIPULATE_NEON_H

#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/manipulate.h"

#include <functional>

namespace vectorlib{
    template<typename T>
    struct manipulate<neon<v128<T>>, 64> {
        
        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename neon< v128< U > >::vector_t
        rotate( neon< v128< uint64_t > >::vector_t p_vec ) {
            
            neon< v128< uint64_t > >::vector_t vec = vmovq_n_u64(0);
            uint64_t val_0=vgetq_lane_u64(p_vec,0);
            uint64_t val_1=vgetq_lane_u64(p_vec,1);
            vec = vsetq_lane_u64(val_1, vec, 0);
            vec = vsetq_lane_u64(val_0, vec, 1);
            return vec;

        }
    };
}

#endif /* MANIPULATE_NEON_H */

