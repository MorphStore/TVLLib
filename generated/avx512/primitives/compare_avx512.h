#ifndef compare_avx512_H
#define compare_avx512_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx512.h"
#include "../../primitives/compare.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct equal_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::mask_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpeq_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::mask_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpeq_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::mask_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpeq_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::mask_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpeq_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::mask_t apply (
			 typename avx512<v128<float>>::vector_t const & p_vec1,
			 typename avx512<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_ps_mask(p_vec1, p_vec2, 0); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::mask_t apply (
			 typename avx512<v128<double>>::vector_t const & p_vec1,
			 typename avx512<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_pd_mask(p_vec1, p_vec2, 0); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::mask_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpeq_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::mask_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpeq_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::mask_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpeq_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::mask_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpeq_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::mask_t apply (
			 typename avx512<v256<float>>::vector_t const & p_vec1,
			 typename avx512<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_ps_mask(p_vec1, p_vec2, 0); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::mask_t apply (
			 typename avx512<v256<double>>::vector_t const & p_vec1,
			 typename avx512<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_pd_mask(p_vec1, p_vec2, 0); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::mask_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpeq_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::mask_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpeq_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::mask_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpeq_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::mask_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpeq_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::mask_t apply (
			 typename avx512<v512<float>>::vector_t const & p_vec1,
			 typename avx512<v512<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_ps_mask(p_vec1, p_vec2, 0); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::mask_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_pd_mask(p_vec1, p_vec2, 0); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::mask_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmplt_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::mask_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmplt_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::mask_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmplt_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::mask_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmplt_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::mask_t apply (
			 typename avx512<v128<float>>::vector_t const & p_vec1,
			 typename avx512<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_ps_mask(p_vec1, p_vec2, 17); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::mask_t apply (
			 typename avx512<v128<double>>::vector_t const & p_vec1,
			 typename avx512<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_pd_mask(p_vec1, p_vec2, 17); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::mask_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmplt_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::mask_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmplt_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::mask_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmplt_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::mask_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmplt_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::mask_t apply (
			 typename avx512<v256<float>>::vector_t const & p_vec1,
			 typename avx512<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_ps_mask(p_vec1, p_vec2, 17); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::mask_t apply (
			 typename avx512<v256<double>>::vector_t const & p_vec1,
			 typename avx512<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_pd_mask(p_vec1, p_vec2, 17); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::mask_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmplt_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::mask_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmplt_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::mask_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmplt_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::mask_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmplt_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct less_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::mask_t apply (
			 typename avx512<v512<float>>::vector_t const & p_vec1,
			 typename avx512<v512<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_ps_mask(p_vec1, p_vec2, 17); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::mask_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_pd_mask(p_vec1, p_vec2, 17); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::mask_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpgt_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::mask_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpgt_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::mask_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpgt_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::mask_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpgt_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::mask_t apply (
			 typename avx512<v128<float>>::vector_t const & p_vec1,
			 typename avx512<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_ps_mask(p_vec1, p_vec2, 30); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::mask_t apply (
			 typename avx512<v128<double>>::vector_t const & p_vec1,
			 typename avx512<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_pd_mask(p_vec1, p_vec2, 30); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::mask_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpgt_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::mask_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpgt_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::mask_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpgt_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::mask_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpgt_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::mask_t apply (
			 typename avx512<v256<float>>::vector_t const & p_vec1,
			 typename avx512<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_ps_mask(p_vec1, p_vec2, 30); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::mask_t apply (
			 typename avx512<v256<double>>::vector_t const & p_vec1,
			 typename avx512<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_pd_mask(p_vec1, p_vec2, 30); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::mask_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpgt_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::mask_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpgt_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::mask_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpgt_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::mask_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpgt_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::mask_t apply (
			 typename avx512<v512<float>>::vector_t const & p_vec1,
			 typename avx512<v512<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_ps_mask(p_vec1, p_vec2, 30); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::mask_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_pd_mask(p_vec1, p_vec2, 30); //non-signalling ordered
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<float>>::mask_t const & p_mask,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<double>>::mask_t const & p_mask,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<float>>::mask_t const & p_mask,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<double>>::mask_t const & p_mask,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<float>>::mask_t const & p_mask,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<double>>::mask_t const & p_mask,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v512<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v512<uint64_t>>::mask_t p_mask,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v512<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v512<uint32_t>>::mask_t p_mask,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v512<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v512<uint16_t>>::mask_t p_mask,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v512<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v512<uint8_t>>::mask_t p_mask,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v256<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v256<uint64_t>>::mask_t p_mask,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v256<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v256<uint32_t>>::mask_t p_mask,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v256<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v256<uint16_t>>::mask_t p_mask,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v256<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v256<uint8_t>>::mask_t p_mask,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v128<uint64_t>>::mask_t p_mask,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v128<uint32_t>>::mask_t p_mask,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v128<uint16_t>>::mask_t p_mask,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx512<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx512<v128<uint8_t>>::mask_t p_mask,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::mask_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpge_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::mask_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpge_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::mask_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpge_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::mask_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmpge_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::mask_t apply (
			 typename avx512<v128<float>>::vector_t const & p_vec1,
			 typename avx512<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_ps_mask(p_vec1, p_vec2, 29); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::mask_t apply (
			 typename avx512<v128<double>>::vector_t const & p_vec1,
			 typename avx512<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_pd_mask(p_vec1, p_vec2, 29); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::mask_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpge_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::mask_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpge_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::mask_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpge_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::mask_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmpge_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::mask_t apply (
			 typename avx512<v256<float>>::vector_t const & p_vec1,
			 typename avx512<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_ps_mask(p_vec1, p_vec2, 29); //non-signalling ordered equal
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::mask_t apply (
			 typename avx512<v256<double>>::vector_t const & p_vec1,
			 typename avx512<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_pd_mask(p_vec1, p_vec2, 29); //non-signalling ordered equal
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::mask_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpge_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::mask_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpge_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::mask_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpge_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::mask_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmpge_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::mask_t apply (
			 typename avx512<v512<float>>::vector_t const & p_vec1,
			 typename avx512<v512<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_ps_mask(p_vec1, p_vec2, 29); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greaterequal_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::mask_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_pd_mask(p_vec1, p_vec2, 29); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::mask_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmple_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::mask_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmple_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::mask_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmple_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::mask_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_cmple_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::mask_t apply (
			 typename avx512<v128<float>>::vector_t const & p_vec1,
			 typename avx512<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_ps_mask(p_vec1, p_vec2, 18); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::mask_t apply (
			 typename avx512<v128<double>>::vector_t const & p_vec1,
			 typename avx512<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_cmp_pd_mask(p_vec1, p_vec2, 18); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::mask_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmple_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::mask_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmple_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::mask_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmple_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::mask_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmple_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::mask_t apply (
			 typename avx512<v256<float>>::vector_t const & p_vec1,
			 typename avx512<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_ps_mask(p_vec1, p_vec2, 18); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::mask_t apply (
			 typename avx512<v256<double>>::vector_t const & p_vec1,
			 typename avx512<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_cmp_pd_mask(p_vec1, p_vec2, 18); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::mask_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmple_epi64_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::mask_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmple_epi32_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::mask_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmple_epi16_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::mask_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmple_epi8_mask(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::mask_t apply (
			 typename avx512<v512<float>>::vector_t const & p_vec1,
			 typename avx512<v512<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_ps_mask(p_vec1, p_vec2, 18); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::mask_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_cmp_pd_mask(p_vec1, p_vec2, 18); //non-signalling ordered
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v128<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<float>>::mask_t const & p_mask,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v128<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<double>>::mask_t const & p_mask,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v256<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v256<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v256<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v256<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v256<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<float>>::mask_t const & p_mask,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v256<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<double>>::mask_t const & p_mask,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v512<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v512<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v512<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v512<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v512<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<float>>::mask_t const & p_mask,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx512<v512<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<double>>::mask_t const & p_mask,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint64_t>>::mask_t const & p_mask1,
			 typename avx512<v128<uint64_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint32_t>>::mask_t const & p_mask1,
			 typename avx512<v128<uint32_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint16_t>>::mask_t const & p_mask1,
			 typename avx512<v128<uint16_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<uint8_t>>::mask_t const & p_mask1,
			 typename avx512<v128<uint8_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v128<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<float>>::mask_t const & p_mask1,
			 typename avx512<v128<float>>::mask_t const & p_mask2,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v128<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v128<double>>::mask_t const & p_mask1,
			 typename avx512<v128<double>>::mask_t const & p_mask2,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v256<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint64_t>>::mask_t const & p_mask1,
			 typename avx512<v256<uint64_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v256<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint32_t>>::mask_t const & p_mask1,
			 typename avx512<v256<uint32_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v256<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint16_t>>::mask_t const & p_mask1,
			 typename avx512<v256<uint16_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v256<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<uint8_t>>::mask_t const & p_mask1,
			 typename avx512<v256<uint8_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v256<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<float>>::mask_t const & p_mask1,
			 typename avx512<v256<float>>::mask_t const & p_mask2,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v256<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v256<double>>::mask_t const & p_mask1,
			 typename avx512<v256<double>>::mask_t const & p_mask2,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v512<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint64_t>>::mask_t const & p_mask1,
			 typename avx512<v512<uint64_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v512<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint32_t>>::mask_t const & p_mask1,
			 typename avx512<v512<uint32_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v512<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint16_t>>::mask_t const & p_mask1,
			 typename avx512<v512<uint16_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v512<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<uint8_t>>::mask_t const & p_mask1,
			 typename avx512<v512<uint8_t>>::mask_t const & p_mask2,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v512<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<float>>::mask_t const & p_mask1,
			 typename avx512<v512<float>>::mask_t const & p_mask2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx512<v512<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx512<v512<double>>::mask_t const & p_mask1,
			 typename avx512<v512<double>>::mask_t const & p_mask2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
}
#endif
