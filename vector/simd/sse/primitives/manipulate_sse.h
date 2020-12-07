/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_MANIPULATE_SSE_H
#define MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_MANIPULATE_SSE_H

#include "../../../preprocessor.h"
#include "../extension_sse.h"
#include "../../../primitives/manipulate.h"

#include <functional>

namespace vectorlib{
    template<typename T>
    struct manipulate<sse<v128<T>>, 64> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename sse< v128< U > >::vector_t
        rotate( sse< v128< uint64_t > >::vector_t p_vec ) {
           TALLY_MANIPULATE_SIMD
           
            return (__m128i)(_mm_permute_pd((__m128d)p_vec,1));
        }
    };

    template<typename T>
    struct manipulate<sse<v128<T>>, 32> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename sse< v128< U > >::vector_t
        rotate( sse< v128< uint32_t > >::vector_t p_vec ) {
           TALLY_MANIPULATE_SIMD
           
            return (__m128i)(_mm_permute_ps((__m128)p_vec,57));
        }
    };

    template<typename T>
    struct manipulate<sse<v128<T>>, 16> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename sse< v128< U > >::vector_t
        rotate( sse< v128< uint16_t > >::vector_t p_vec ) {
           TALLY_MANIPULATE_SIMD
           
            return _mm_set_epi16(
                _mm_extract_epi16(p_vec, 0),
                _mm_extract_epi16(p_vec, 7),
                _mm_extract_epi16(p_vec, 6),
                _mm_extract_epi16(p_vec, 5),
                _mm_extract_epi16(p_vec, 4),
                _mm_extract_epi16(p_vec, 3),
                _mm_extract_epi16(p_vec, 2),
                _mm_extract_epi16(p_vec, 1)
                );
        }
    };

    template<typename T>
    struct manipulate<sse<v128<T>>, 8> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename sse< v128< U > >::vector_t
        rotate( sse< v128< uint8_t > >::vector_t p_vec ) {
           TALLY_MANIPULATE_SIMD
           
            return _mm_set_epi8(
                _mm_extract_epi8(p_vec, 0),
                _mm_extract_epi8(p_vec, 15),
                _mm_extract_epi8(p_vec, 14),
                _mm_extract_epi8(p_vec, 13),
                _mm_extract_epi8(p_vec, 12),
                _mm_extract_epi8(p_vec, 11),
                _mm_extract_epi8(p_vec, 10),
                _mm_extract_epi8(p_vec, 9),
                _mm_extract_epi8(p_vec, 8),
                _mm_extract_epi8(p_vec, 7),
                _mm_extract_epi8(p_vec, 6),
                _mm_extract_epi8(p_vec, 5),
                _mm_extract_epi8(p_vec, 4),
                _mm_extract_epi8(p_vec, 3),
                _mm_extract_epi8(p_vec, 2),
                _mm_extract_epi8(p_vec, 1)
                );
        }
    };


}

#endif /* MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_MANIPULATE_SSE_H */
