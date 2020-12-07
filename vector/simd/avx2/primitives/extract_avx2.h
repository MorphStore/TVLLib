/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_EXTRACT_AVX2_H
#define MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_EXTRACT_AVX2_H


#include "../../../preprocessor.h"
#include "../extension_avx2.h"
#include "../../../primitives/extract.h"

#include <functional>

namespace vectorlib {


   template<typename T>
   struct extract<avx2<v256<T>>,64> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::base_t
      extract_value( avx2< v256< uint64_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm256_extract_epi64(p_vec,0); break;
             case 1: return _mm256_extract_epi64(p_vec,1); break;
             case 2: return _mm256_extract_epi64(p_vec,2); break;
             case 3: return _mm256_extract_epi64(p_vec,3); break;
         }

         return _mm256_extract_epi64(p_vec,0);

      }
   };

      template<typename T>
   struct extract<avx2<v256<T>>,32> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::base_t
      extract_value( avx2< v256< uint32_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm256_extract_epi32(p_vec,0); break;
             case 1: return _mm256_extract_epi32(p_vec,1); break;
             case 2: return _mm256_extract_epi32(p_vec,2); break;
             case 3: return _mm256_extract_epi32(p_vec,3); break;
             case 4: return _mm256_extract_epi32(p_vec,4); break;
             case 5: return _mm256_extract_epi32(p_vec,5); break;
             case 6: return _mm256_extract_epi32(p_vec,6); break;
             case 7: return _mm256_extract_epi32(p_vec,7); break;
         }
         return (typename avx2< v256< U > >::base_t)0;
      }
   };
      template<typename T>
   struct extract<avx2<v256<T>>,16> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::base_t
      extract_value( avx2< v256< uint16_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm256_extract_epi16(p_vec,0); break;
             case 1: return _mm256_extract_epi16(p_vec,1); break;
             case 2: return _mm256_extract_epi16(p_vec,2); break;
             case 3: return _mm256_extract_epi16(p_vec,3); break;
             case 4: return _mm256_extract_epi16(p_vec,4); break;
             case 5: return _mm256_extract_epi16(p_vec,5); break;
             case 6: return _mm256_extract_epi16(p_vec,6); break;
             case 7: return _mm256_extract_epi16(p_vec,7); break;
             case 8: return _mm256_extract_epi16(p_vec,8); break;
             case 9: return _mm256_extract_epi16(p_vec,9); break;
             case 10: return _mm256_extract_epi16(p_vec,10); break;
             case 11: return _mm256_extract_epi16(p_vec,11); break;
             case 12: return _mm256_extract_epi16(p_vec,12); break;
             case 13: return _mm256_extract_epi16(p_vec,13); break;
             case 14: return _mm256_extract_epi16(p_vec,14); break;
             case 15: return _mm256_extract_epi16(p_vec,15); break;
         }
         return (typename avx2< v256< U > >::base_t)0;
      }
   };

      template<typename T>
   struct extract<avx2<v256<T>>,8> {

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::base_t
      extract_value( avx2< v256< uint8_t > >::vector_t p_vec, int idx) {
         TALLY_EXTRACT_SIMD
         
         switch (idx){
             case 0: return _mm256_extract_epi8(p_vec,0); break;
             case 1: return _mm256_extract_epi8(p_vec,1); break;
             case 2: return _mm256_extract_epi8(p_vec,2); break;
             case 3: return _mm256_extract_epi8(p_vec,3); break;
             case 4: return _mm256_extract_epi8(p_vec,4); break;
             case 5: return _mm256_extract_epi8(p_vec,5); break;
             case 6: return _mm256_extract_epi8(p_vec,6); break;
             case 7: return _mm256_extract_epi8(p_vec,7); break;
             case 8: return _mm256_extract_epi8(p_vec,8); break;
             case 9: return _mm256_extract_epi8(p_vec,9); break;
             case 10: return _mm256_extract_epi8(p_vec,10); break;
             case 11: return _mm256_extract_epi8(p_vec,11); break;
             case 12: return _mm256_extract_epi8(p_vec,12); break;
             case 13: return _mm256_extract_epi8(p_vec,13); break;
             case 14: return _mm256_extract_epi8(p_vec,14); break;
             case 15: return _mm256_extract_epi8(p_vec,15); break;
             case 16: return _mm256_extract_epi8(p_vec,16); break;
             case 17: return _mm256_extract_epi8(p_vec,17); break;
             case 18: return _mm256_extract_epi8(p_vec,18); break;
             case 19: return _mm256_extract_epi8(p_vec,19); break;
             case 20: return _mm256_extract_epi8(p_vec,20); break;
             case 21: return _mm256_extract_epi8(p_vec,21); break;
             case 22: return _mm256_extract_epi8(p_vec,22); break;
             case 23: return _mm256_extract_epi8(p_vec,23); break;
             case 24: return _mm256_extract_epi8(p_vec,24); break;
             case 25: return _mm256_extract_epi8(p_vec,25); break;
             case 26: return _mm256_extract_epi8(p_vec,26); break;
             case 27: return _mm256_extract_epi8(p_vec,27); break;
             case 28: return _mm256_extract_epi8(p_vec,28); break;
             case 29: return _mm256_extract_epi8(p_vec,29); break;
             case 30: return _mm256_extract_epi8(p_vec,30); break;
             case 31: return _mm256_extract_epi8(p_vec,31); break;
         }
         return (typename avx2< v256< U > >::base_t)0;
      }
   };

}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_EXTRACT_AVX2_H */
