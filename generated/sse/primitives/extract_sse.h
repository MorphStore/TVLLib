#ifndef extract_sse_H
#define extract_sse_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_sse.h"
#include "../../primitives/extract.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct extract_value_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::base_t apply (
			 typename sse<v128<uint64_t>>::vector_t p_vec,
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
	struct extract_value_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::base_t apply (
			 typename sse<v128<uint32_t>>::vector_t p_vec,
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
	struct extract_value_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::base_t apply (
			 typename sse<v128<uint16_t>>::vector_t p_vec,
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
	struct extract_value_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::base_t apply (
			 typename sse<v128<uint8_t>>::vector_t p_vec,
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
}
#endif
