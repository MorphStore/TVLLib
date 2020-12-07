/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_COMPARE_SSE_H
#define MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_COMPARE_SSE_H

#include "../../../preprocessor.h"
#include "../extension_sse.h"
#include "../../../primitives/compare.h"

#include <functional>

namespace vectorlib{
   template<>
   struct equal<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint64_t>>::mask_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const p_vec1,
         typename sse<v128<uint64_t>>::vector_t const p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_pd(
               _mm_castsi128_pd(
                  _mm_cmpeq_epi64(p_vec1, p_vec2)
               )
            );
      }
   };
   template<>
   struct less<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint64_t>>::mask_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_pd(
               _mm_castsi128_pd(
                  _mm_cmpgt_epi64(p_vec2, p_vec1)
               )
            );
      }
   };
   template<>
   struct lessequal<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint64_t>>::mask_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_pd(
               _mm_castsi128_pd(
                  _mm_or_si128(
                     _mm_cmpeq_epi64(p_vec1, p_vec2),
                     _mm_cmpgt_epi64(p_vec2, p_vec1)
                  )
               )
            );
      }
   };

   template<>
   struct greater<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint64_t>>::mask_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_pd(
               _mm_castsi128_pd(
                  _mm_cmpgt_epi64(p_vec1, p_vec2)
               )
            );
      }
   };
   template<>
   struct greaterequal<sse<v128<uint64_t>>, 64> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint64_t>>::mask_t
      apply(
         typename sse<v128<uint64_t>>::vector_t const & p_vec1,
         typename sse<v128<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_pd(
               _mm_castsi128_pd(
                  _mm_or_si128(
                     _mm_cmpeq_epi64(p_vec1, p_vec2),
                     _mm_cmpgt_epi64(p_vec1, p_vec2)
                  )
               )
            );
      }
   };
   template<>
   struct count_matches<sse<v128<uint64_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename sse<v128<uint64_t>>::mask_t const & p_mask
      ) {
         TALLY_CALC_UNARY_SIMD
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

   template<>
   struct equal<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint32_t>>::mask_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const p_vec1,
         typename sse<v128<uint32_t>>::vector_t const p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_ps(
               _mm_castsi128_ps(
                  _mm_cmpeq_epi32(p_vec1, p_vec2)
               )
            );
      }
   };
   template<>
   struct less<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint32_t>>::mask_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_ps(
               _mm_castsi128_ps(
                  _mm_cmpgt_epi32(p_vec2, p_vec1)
               )
            );
      }
   };
   template<>
   struct lessequal<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint32_t>>::mask_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_ps(
               _mm_castsi128_ps(
                  _mm_or_si128(
                     _mm_cmpeq_epi32(p_vec1, p_vec2),
                     _mm_cmpgt_epi32(p_vec2, p_vec1)
                  )
               )
            );
      }
   };

   template<>
   struct greater<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint32_t>>::mask_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_ps(
               _mm_castsi128_ps(
                  _mm_cmpgt_epi32(p_vec1, p_vec2)
               )
            );
      }
   };
   template<>
   struct greaterequal<sse<v128<uint32_t>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint32_t>>::mask_t
      apply(
         typename sse<v128<uint32_t>>::vector_t const & p_vec1,
         typename sse<v128<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_ps(
               _mm_castsi128_ps(
                  _mm_or_si128(
                     _mm_cmpeq_epi32(p_vec1, p_vec2),
                     _mm_cmpgt_epi32(p_vec1, p_vec2)
                  )
               )
            );
      }
   };
   template<>
   struct count_matches<sse<v128<uint32_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename sse<v128<uint32_t>>::mask_t const & p_mask
      ) {
         TALLY_CALC_UNARY_SIMD
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };

//no 16 bit equivalents for _mm_movemask_pd
uint32_t fix_sse_16bit_mask(uint32_t mask){
   uint32_t realmask = 0;
   for(int8_t x = 1; x >= 0; x--){
      switch((mask >> 8*x)&0xff){
         case 0x00:
            realmask = (realmask << 4 | 0b0000); break;
         case 0x03:
            realmask = (realmask << 4 | 0b0001); break;
         case 0x0C:
            realmask = (realmask << 4 | 0b0010); break;
         case 0x0F:
            realmask = (realmask << 4 | 0b0011); break;
         case 0x30:
            realmask = (realmask << 4 | 0b0100); break;
         case 0x33:
            realmask = (realmask << 4 | 0b0101); break;
         case 0x3C:
            realmask = (realmask << 4 | 0b0110); break;
         case 0x3F:
            realmask = (realmask << 4 | 0b0111); break;
         case 0xC0:
            realmask = (realmask << 4 | 0b1000); break;
         case 0xC3:
            realmask = (realmask << 4 | 0b1001); break;
         case 0xCC:
            realmask = (realmask << 4 | 0b1010); break;
         case 0xCF:
            realmask = (realmask << 4 | 0b1011); break;
         case 0xF0:
            realmask = (realmask << 4 | 0b1100); break;
         case 0xF3:
            realmask = (realmask << 4 | 0b1101); break;
         case 0xFC:
            realmask = (realmask << 4 | 0b1110); break;
         case 0xFF:
            realmask = (realmask << 4 | 0b1111); break;
      }
   }
   return realmask;
}
//16 bit

template<>
struct equal<sse<v128<uint16_t>>, 16> {
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static typename sse<v128<uint16_t>>::mask_t
   apply(
      typename sse<v128<uint16_t>>::vector_t const p_vec1,
      typename sse<v128<uint16_t>>::vector_t const p_vec2
   ) {
      TALLY_COMPARE_SIMD
      
      return
         fix_sse_16bit_mask(
            _mm_movemask_epi8(
               _mm_cmpeq_epi16(p_vec1, p_vec2)
            )
         );
   }
};
template<>
struct less<sse<v128<uint16_t>>, 16> {
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static typename sse<v128<uint16_t>>::mask_t
   apply(
      typename sse<v128<uint16_t>>::vector_t const & p_vec1,
      typename sse<v128<uint16_t>>::vector_t const & p_vec2
   ) {
      TALLY_COMPARE_SIMD
      
      return
         fix_sse_16bit_mask(
            _mm_movemask_epi8(
               _mm_cmpgt_epi16(p_vec2, p_vec1)
            )
         );
   }
};
template<>
struct lessequal<sse<v128<uint16_t>>, 16> {
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static typename sse<v128<uint16_t>>::mask_t
   apply(
      typename sse<v128<uint16_t>>::vector_t const & p_vec1,
      typename sse<v128<uint16_t>>::vector_t const & p_vec2
   ) {
      TALLY_COMPARE_SIMD
      
      return
         fix_sse_16bit_mask(
            _mm_movemask_epi8(
               _mm_or_si128(
                  _mm_cmpeq_epi16(p_vec1, p_vec2),
                  _mm_cmpgt_epi16(p_vec2, p_vec1)
               )
            )
         );
   }
};

template<>
struct greater<sse<v128<uint16_t>>, 16> {
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static typename sse<v128<uint16_t>>::mask_t
   apply(
      typename sse<v128<uint16_t>>::vector_t const & p_vec1,
      typename sse<v128<uint16_t>>::vector_t const & p_vec2
   ) {
      TALLY_COMPARE_SIMD
      
      return
         fix_sse_16bit_mask(
            _mm_movemask_epi8(
               _mm_cmpgt_epi16(p_vec1, p_vec2)
            )
         );
   }
};
template<>
struct greaterequal<sse<v128<uint16_t>>,16> {
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static typename sse<v128<uint16_t>>::mask_t
   apply(
      typename sse<v128<uint16_t>>::vector_t const & p_vec1,
      typename sse<v128<uint16_t>>::vector_t const & p_vec2
   ) {
      TALLY_COMPARE_SIMD
      
      return
         fix_sse_16bit_mask(
            _mm_movemask_epi8(
               _mm_or_si128(
                  _mm_cmpeq_epi16(p_vec1, p_vec2),
                  _mm_cmpgt_epi16(p_vec1, p_vec2)
               )
            )
         );
   }
};
template<>
struct count_matches<sse<v128<uint16_t>>> {
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static uint8_t
   apply(
      typename sse<v128<uint16_t>>::mask_t const & p_mask
   ) {
      TALLY_CALC_UNARY_SIMD
      
      // @todo Which one is faster?
      // return __builtin_popcount(p_mask);
      return _mm_popcnt_u64(p_mask);
   }
};




//8 bit
   template<>
   struct equal<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint8_t>>::mask_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const p_vec1,
         typename sse<v128<uint8_t>>::vector_t const p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_epi8(
                  _mm_cmpeq_epi8(p_vec1, p_vec2)
            );
      }
   };
   template<>
   struct less<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint8_t>>::mask_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_epi8(
                  _mm_cmpgt_epi8(p_vec2, p_vec1)
            );
      }
   };
   template<>
   struct lessequal<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint8_t>>::mask_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_epi8(
                  _mm_or_si128(
                     _mm_cmpeq_epi8(p_vec1, p_vec2),
                     _mm_cmpgt_epi8(p_vec2, p_vec1)
               )
            );
      }
   };

   template<>
   struct greater<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint8_t>>::mask_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_epi8(
                  _mm_cmpgt_epi8(p_vec1, p_vec2)

            );
      }
   };
   template<>
   struct greaterequal<sse<v128<uint8_t>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sse<v128<uint8_t>>::mask_t
      apply(
         typename sse<v128<uint8_t>>::vector_t const & p_vec1,
         typename sse<v128<uint8_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SIMD
         
         return
            _mm_movemask_epi8(
                  _mm_or_si128(
                     _mm_cmpeq_epi8(p_vec1, p_vec2),
                     _mm_cmpgt_epi8(p_vec1, p_vec2)

               )
            );
      }
   };
   template<>
   struct count_matches<sse<v128<uint8_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename sse<v128<uint8_t>>::mask_t const & p_mask
      ) {
         TALLY_CALC_UNARY_SIMD
         
         // @todo Which one is faster?
         // return __builtin_popcount(p_mask);
         return _mm_popcnt_u64(p_mask);
      }
   };


}

#endif /* MORPHSTORE_VECTOR_SIMD_SSE_PRIMITIVES_COMPARE_SSE_H */
