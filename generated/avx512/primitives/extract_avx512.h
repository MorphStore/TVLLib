#ifndef extract_avx512_H
#define extract_avx512_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx512.h"
#include "../../primitives/extract.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct extract_value_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::base_t apply (
			 typename avx512<v128<uint64_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm_extract_epi64(p_vec,0); break;
             case 1: return _mm_extract_epi64(p_vec,1); break;
          }
          return (typename sse< v128< uint64_t > >::base_t)0;
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::base_t apply (
			 typename avx512<v128<uint32_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm_extract_epi32(p_vec,0); break;
             case 1: return _mm_extract_epi32(p_vec,1); break;
             case 2: return _mm_extract_epi32(p_vec,2); break;
             case 3: return _mm_extract_epi32(p_vec,3); break;
         }
         return (typename sse< v128< uint32_t > >::base_t)0;
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::base_t apply (
			 typename avx512<v128<uint16_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm_extract_epi16(p_vec,0); break;
             case 1: return _mm_extract_epi16(p_vec,1); break;
             case 2: return _mm_extract_epi16(p_vec,2); break;
             case 3: return _mm_extract_epi16(p_vec,3); break;
             case 4: return _mm_extract_epi16(p_vec,4); break;
             case 5: return _mm_extract_epi16(p_vec,5); break;
             case 6: return _mm_extract_epi16(p_vec,6); break;
             case 7: return _mm_extract_epi16(p_vec,7); break;
         }
         return (typename sse< v128< uint16_t > >::base_t)0;
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::base_t apply (
			 typename avx512<v128<uint8_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm_extract_epi8(p_vec,0); break;
             case 1: return _mm_extract_epi8(p_vec,1); break;
             case 2: return _mm_extract_epi8(p_vec,2); break;
             case 3: return _mm_extract_epi8(p_vec,3); break;
             case 4: return _mm_extract_epi8(p_vec,4); break;
             case 5: return _mm_extract_epi8(p_vec,5); break;
             case 6: return _mm_extract_epi8(p_vec,6); break;
             case 7: return _mm_extract_epi8(p_vec,7); break;
             case 8: return _mm_extract_epi8(p_vec,8); break;
             case 9: return _mm_extract_epi8(p_vec,9); break;
             case 10: return _mm_extract_epi8(p_vec,10); break;
             case 11: return _mm_extract_epi8(p_vec,11); break;
             case 12: return _mm_extract_epi8(p_vec,12); break;
             case 13: return _mm_extract_epi8(p_vec,13); break;
             case 14: return _mm_extract_epi8(p_vec,14); break;
             case 15: return _mm_extract_epi8(p_vec,15); break;
         }
         return (typename sse< v128< uint8_t > >::base_t)0;
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::base_t apply (
			 typename avx512<v256<uint64_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm256_extract_epi64(p_vec,0); break;
             case 1: return _mm256_extract_epi64(p_vec,1); break;
             case 2: return _mm256_extract_epi64(p_vec,2); break;
             case 3: return _mm256_extract_epi64(p_vec,3); break;
         }

         return _mm256_extract_epi64(p_vec,0);
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::base_t apply (
			 typename avx512<v256<uint32_t>>::vector_t p_vec,
			 int idx)
		{
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
         return (typename avx2< v256< uint32_t > >::base_t)0;
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::base_t apply (
			 typename avx512<v256<uint16_t>>::vector_t p_vec,
			 int idx)
		{
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
         return (typename avx2< v256< uint16_t > >::base_t)0;
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::base_t apply (
			 typename avx512<v256<uint8_t>>::vector_t p_vec,
			 int idx)
		{
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
         return (typename avx2< v256< uint8_t > >::base_t)0;
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::base_t apply (
			 typename avx512<v512<uint64_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 5: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 6: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 7: return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,1),3); break;
         }
         return _mm256_extract_epi64(_mm512_extracti64x4_epi64(p_vec,0),0);
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::base_t apply (
			 typename avx512<v512<uint32_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),4); break;
             case 5: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),5); break;
             case 6: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),6); break;
             case 7: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),7); break;
             case 8: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 9: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 10: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 11: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),3); break;
             case 12: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),4); break;
             case 13: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),5); break;
             case 14: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),6); break;
             case 15: return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,1),7); break;
         }
         return _mm256_extract_epi32(_mm512_extracti64x4_epi64(p_vec,0),0);
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::base_t apply (
			 typename avx512<v512<uint16_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),4); break;
             case 5: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),5); break;
             case 6: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),6); break;
             case 7: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),7); break;
             case 8: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),8); break;
             case 9: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),9); break;
             case 10: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),10); break;
             case 11: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),11); break;
             case 12: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),12); break;
             case 13: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),13); break;
             case 14: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),14); break;
             case 15: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),15); break;
             case 16: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 17: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 18: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 19: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),3); break;
             case 20: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),4); break;
             case 21: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),5); break;
             case 22: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),6); break;
             case 23: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),7); break;
             case 24: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),8); break;
             case 25: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),9); break;
             case 26: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),10); break;
             case 27: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),11); break;
             case 28: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),12); break;
             case 29: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),13); break;
             case 30: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),14); break;
             case 31: return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,1),15); break;
         }
         return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec,0),0);
		}
	}
;
	template<
	>
	struct extract_value_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::base_t apply (
			 typename avx512<v512<uint8_t>>::vector_t p_vec,
			 int idx)
		{
			switch (idx){
             case 0: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0); break;
             case 1: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),1); break;
             case 2: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),2); break;
             case 3: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),3); break;
             case 4: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),4); break;
             case 5: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),5); break;
             case 6: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),6); break;
             case 7: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),7); break;
             case 8: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),8); break;
             case 9: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),9); break;
             case 10: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),10); break;
             case 11: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),11); break;
             case 12: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),12); break;
             case 13: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),13); break;
             case 14: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),14); break;
             case 15: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),15); break;
             case 16: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),16); break;
             case 17: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),17); break;
             case 18: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),18); break;
             case 19: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),19); break;
             case 20: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),20); break;
             case 21: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),21); break;
             case 22: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),22); break;
             case 23: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),23); break;
             case 24: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),24); break;
             case 25: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),25); break;
             case 26: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),26); break;
             case 27: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),27); break;
             case 28: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),28); break;
             case 29: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),29); break;
             case 30: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),30); break;
             case 31: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),31); break;
             case 32: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),0); break;
             case 33: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),1); break;
             case 34: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),2); break;
             case 35: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),3); break;
             case 36: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),4); break;
             case 37: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),5); break;
             case 38: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),6); break;
             case 39: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),7); break;
             case 40: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),8); break;
             case 41: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),9); break;
             case 42: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),10); break;
             case 43: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),11); break;
             case 44: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),12); break;
             case 45: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),13); break;
             case 46: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),14); break;
             case 47: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),15); break;
             case 48: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),16); break;
             case 49: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),17); break;
             case 50: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),18); break;
             case 51: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),19); break;
             case 52: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),20); break;
             case 53: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),21); break;
             case 54: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),22); break;
             case 55: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),23); break;
             case 56: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),24); break;
             case 57: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),25); break;
             case 58: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),26); break;
             case 59: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),27); break;
             case 60: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),28); break;
             case 61: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),29); break;
             case 62: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),30); break;
             case 63: return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,1),31); break;
         }
         return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec,0),0);
		}
	}
;
}
#endif
