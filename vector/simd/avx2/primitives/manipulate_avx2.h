/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   manipulate_avx2.h
 * Author: Annett
 *
 * Created on 24. April 2019, 17:17
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_MANIPULATE_AVX2_H
#define MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_MANIPULATE_AVX2_H

#include "../../../preprocessor.h"
#include "../extension_avx2.h"
#include "../../../primitives/manipulate.h"

#include <functional>

namespace vectorlib{
    template<typename T>
    struct manipulate<avx2<v256<T>>, 64> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx2< v256< U > >::vector_t
        rotate( avx2< v256< uint64_t > >::vector_t p_vec ) {
            TALLY_MANIPULATE_SIMD
            

            return _mm256_permute4x64_epi64(p_vec,57);

        }
    };

    template<typename T>
    struct manipulate<avx2<v256<T>>, 32> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx2< v256< U > >::vector_t
        rotate( avx2< v256< uint32_t > >::vector_t p_vec ) {
         TALLY_MANIPULATE_SIMD
            
            return _mm256_permutevar8x32_epi32(p_vec,_mm256_set_epi32(0,7,6,5,4,3,2,1));
        }
    };

    template<typename T>
    struct manipulate<avx2<v256<T>>, 16> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx2< v256< U > >::vector_t
        rotate( avx2< v256< uint16_t > >::vector_t p_vec ) {
            TALLY_MANIPULATE_SIMD
            
            return _mm256_set_epi16(
                _mm256_extract_epi16(p_vec, 0),
                _mm256_extract_epi16(p_vec, 15),
                _mm256_extract_epi16(p_vec, 14),
                _mm256_extract_epi16(p_vec, 13),
                _mm256_extract_epi16(p_vec, 12),
                _mm256_extract_epi16(p_vec, 11),
                _mm256_extract_epi16(p_vec, 10),
                _mm256_extract_epi16(p_vec, 9),
                _mm256_extract_epi16(p_vec, 8),
                _mm256_extract_epi16(p_vec, 7),
                _mm256_extract_epi16(p_vec, 6),
                _mm256_extract_epi16(p_vec, 5),
                _mm256_extract_epi16(p_vec, 4),
                _mm256_extract_epi16(p_vec, 3),
                _mm256_extract_epi16(p_vec, 2),
                _mm256_extract_epi16(p_vec, 1)
                );
        }
    };

    template<typename T>
    struct manipulate<avx2<v256<T>>, 8> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx2< v256< U > >::vector_t
        rotate( avx2< v256< uint8_t > >::vector_t p_vec ) {
            TALLY_MANIPULATE_SIMD
            
            return _mm256_set_epi8(
                _mm256_extract_epi8(p_vec, 0),
                _mm256_extract_epi8(p_vec, 31),
                _mm256_extract_epi8(p_vec, 30),
                _mm256_extract_epi8(p_vec, 29),
                _mm256_extract_epi8(p_vec, 28),
                _mm256_extract_epi8(p_vec, 27),
                _mm256_extract_epi8(p_vec, 26),
                _mm256_extract_epi8(p_vec, 25),
                _mm256_extract_epi8(p_vec, 24),
                _mm256_extract_epi8(p_vec, 23),
                _mm256_extract_epi8(p_vec, 22),
                _mm256_extract_epi8(p_vec, 21),
                _mm256_extract_epi8(p_vec, 20),
                _mm256_extract_epi8(p_vec, 19),
                _mm256_extract_epi8(p_vec, 18),
                _mm256_extract_epi8(p_vec, 17),
                _mm256_extract_epi8(p_vec, 16),
                _mm256_extract_epi8(p_vec, 15),
                _mm256_extract_epi8(p_vec, 14),
                _mm256_extract_epi8(p_vec, 13),
                _mm256_extract_epi8(p_vec, 12),
                _mm256_extract_epi8(p_vec, 11),
                _mm256_extract_epi8(p_vec, 10),
                _mm256_extract_epi8(p_vec, 9),
                _mm256_extract_epi8(p_vec, 8),
                _mm256_extract_epi8(p_vec, 7),
                _mm256_extract_epi8(p_vec, 6),
                _mm256_extract_epi8(p_vec, 5),
                _mm256_extract_epi8(p_vec, 4),
                _mm256_extract_epi8(p_vec, 3),
                _mm256_extract_epi8(p_vec, 2),
                _mm256_extract_epi8(p_vec, 1)
                );
        }
    };
}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_MANIPULATE_AVX2_H */
