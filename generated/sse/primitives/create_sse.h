#ifndef create_sse_H
#define create_sse_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_sse.h"
#include "../../primitives/create.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct set1_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::vector_t apply (
			 typename sse<v128<uint64_t>>::base_t value,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi64x(value);
		}
	}
;
	template<
	>
	struct set1_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::vector_t apply (
			 typename sse<v128<uint32_t>>::base_t value,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi32(value);
		}
	}
;
	template<
	>
	struct set1_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::vector_t apply (
			 typename sse<v128<uint16_t>>::base_t value,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi16(value);
		}
	}
;
	template<
	>
	struct set1_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::vector_t apply (
			 typename sse<v128<uint8_t>>::base_t value,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi8(value);
		}
	}
;
	template<
	>
	struct set1_t <sse<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<float>>::vector_t apply (
			 typename sse<v128<float>>::base_t value,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_ps(value);
		}
	}
;
	template<
	>
	struct set1_t <sse<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<double>>::vector_t apply (
			 typename sse<v128<double>>::base_t value,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_pd(value);
		}
	}
;
	template<
	>
	struct set_sequence_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::vector_t apply (
			 typename sse<v128<uint64_t>>::base_t a,
			 typename sse<v128<uint64_t>>::base_t b,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi64x(a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::vector_t apply (
			 typename sse<v128<uint32_t>>::base_t a,
			 typename sse<v128<uint32_t>>::base_t b,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi32(a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::vector_t apply (
			 typename sse<v128<uint16_t>>::base_t a,
			 typename sse<v128<uint16_t>>::base_t b,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi16(a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::vector_t apply (
			 typename sse<v128<uint8_t>>::base_t a,
			 typename sse<v128<uint8_t>>::base_t b,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi8(a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <sse<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<float>>::vector_t apply (
			 typename sse<v128<float>>::base_t a,
			 typename sse<v128<float>>::base_t b,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_set_ps(a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <sse<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<double>>::vector_t apply (
			 typename sse<v128<double>>::base_t a,
			 typename sse<v128<double>>::base_t b,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_set_pd(a+b,a);
		}
	}
;
	template<
	>
	struct init_mask_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::mask_t apply (
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::mask_t apply (
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::mask_t apply (
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <sse<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<float>>::mask_t apply (
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <sse<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<double>>::mask_t apply (
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
}
#endif
