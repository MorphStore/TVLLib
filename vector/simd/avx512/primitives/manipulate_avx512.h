/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   manipulate_avx512.h
 * Author: Annett
 *
 * Created on 24. April 2019, 17:17
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_MANIPULATE_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_MANIPULATE_AVX512_H

#include "../../../preprocessor.h"
#include "../extension_avx512.h"
#include "../../../primitives/manipulate.h"

#include <functional>

namespace vectorlib{



    template<typename T>
    struct manipulate<avx512<v512<T>>, 64> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx512< v512< U > >::vector_t
        rotate( avx512< v512< uint64_t > >::vector_t p_vec ) {
#if tally
manipulate_simd += 1;
#endif
            

            return _mm512_permutexvar_epi64(_mm512_set_epi64(6,5,4,3,2,1,0,7),p_vec);

        }
    };
    //not tested
    template<typename T>
    struct manipulate<avx512<v512<T>>, 32> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx512< v512< U > >::vector_t
        rotate( avx512< v512< uint32_t > >::vector_t p_vec ) {
#if tally
manipulate_simd += 1;
#endif
            

            return _mm512_permutexvar_epi32(_mm512_set_epi32(14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,15),p_vec);

        }
    };
    //not tested
    template<typename T>
    struct manipulate<avx512<v512<T>>, 16> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx512< v512< U > >::vector_t
        rotate( avx512< v512< uint16_t > >::vector_t p_vec ) {
#if tally
manipulate_simd += 1;
#endif
            
            return _mm512_permutexvar_epi16(_mm512_set_epi16((U)30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,31),p_vec);

        }
    };



    //not tested
    template<typename T>
    struct manipulate<avx512<v512<T>>, 8> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx512< v512< U > >::vector_t
        rotate(  avx512< v512< uint8_t > >::vector_t p_vec ) {
#if tally
manipulate_simd += 1;
#endif
            
            return _mm512_permutexvar_epi8(_mm512_set_epi8((U)62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,
                30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,63),p_vec);

        }
    };
}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_MANIPULATE_AVX512_H */
