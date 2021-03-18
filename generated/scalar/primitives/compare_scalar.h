#ifndef compare_scalar_H
#define compare_scalar_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_scalar.h"
#include "../../primitives/compare.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct equal_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<uint64_t>>::mask_t)(p_vec1 == p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::mask_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<uint32_t>>::mask_t)(p_vec1 == p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::mask_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v16<uint16_t>>::mask_t)(p_vec1 == p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::mask_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v8<uint8_t>>::mask_t)(p_vec1 == p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::mask_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<float>>::mask_t)(p_vec1 == p_vec2);
		}
	}
;
	template<
	>
	struct equal_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::mask_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<double>>::mask_t)(p_vec1 == p_vec2);
		}
	}
;
	template<
	>
	struct less_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<uint64_t>>::mask_t)(p_vec1 < p_vec2);
		}
	}
;
	template<
	>
	struct less_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::mask_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<uint32_t>>::mask_t)(p_vec1 < p_vec2);
		}
	}
;
	template<
	>
	struct less_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::mask_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v16<uint16_t>>::mask_t)(p_vec1 < p_vec2);
		}
	}
;
	template<
	>
	struct less_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::mask_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v8<uint8_t>>::mask_t)(p_vec1 < p_vec2);
		}
	}
;
	template<
	>
	struct less_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::mask_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<float>>::mask_t)(p_vec1 < p_vec2);
		}
	}
;
	template<
	>
	struct less_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::mask_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<double>>::mask_t)(p_vec1 < p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<uint64_t>>::mask_t)(p_vec1 > p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::mask_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<uint32_t>>::mask_t)(p_vec1 > p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::mask_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v16<uint16_t>>::mask_t)(p_vec1 > p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::mask_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v8<uint8_t>>::mask_t)(p_vec1 > p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::mask_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<float>>::mask_t)(p_vec1 > p_vec2);
		}
	}
;
	template<
	>
	struct greater_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::mask_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<double>>::mask_t)(p_vec1 > p_vec2);
		}
	}
;
	template<
	>
	struct count_matches_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct count_matches_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint32_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct count_matches_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint16_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct count_matches_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint8_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct count_matches_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<float>>::mask_t const & p_mask,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct count_matches_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<double>>::mask_t const & p_mask,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < scalar<v64<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename scalar<v64<uint64_t>>::mask_t p_mask,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < scalar<v64<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename scalar<v64<uint32_t>>::mask_t p_mask,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < scalar<v64<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename scalar<v64<uint16_t>>::mask_t p_mask,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < scalar<v64<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename scalar<v64<uint8_t>>::mask_t p_mask,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct greaterequal_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<uint64_t>>::mask_t)(p_vec1 >= p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::mask_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<uint32_t>>::mask_t)(p_vec1 >= p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::mask_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v16<uint16_t>>::mask_t)(p_vec1 >= p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::mask_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v8<uint8_t>>::mask_t)(p_vec1 >= p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::mask_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<float>>::mask_t)(p_vec1 >= p_vec2);
		}
	}
;
	template<
	>
	struct greaterequal_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::mask_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<double>>::mask_t)(p_vec1 >= p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<uint64_t>>::mask_t)(p_vec1 <= p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::mask_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<uint32_t>>::mask_t)(p_vec1 <= p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::mask_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v16<uint16_t>>::mask_t)(p_vec1 <= p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::mask_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return (scalar<v8<uint8_t>>::mask_t)(p_vec1 <= p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::mask_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return (scalar<v32<float>>::mask_t)(p_vec1 <= p_vec2);
		}
	}
;
	template<
	>
	struct lessequal_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::mask_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return (scalar<v64<double>>::mask_t)(p_vec1 <= p_vec2);
		}
	}
;
	template<
	>
	struct ctz_mask_t < scalar<v64<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < scalar<v64<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint32_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < scalar<v64<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint16_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < scalar<v64<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint8_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < scalar<v64<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<float>>::mask_t const & p_mask,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < scalar<v64<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<double>>::mask_t const & p_mask,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct equal_mask_t < scalar<v64<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask1,
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < scalar<v64<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint32_t>>::mask_t const & p_mask1,
			 typename scalar<v64<uint32_t>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < scalar<v64<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint16_t>>::mask_t const & p_mask1,
			 typename scalar<v64<uint16_t>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < scalar<v64<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<uint8_t>>::mask_t const & p_mask1,
			 typename scalar<v64<uint8_t>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < scalar<v64<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<float>>::mask_t const & p_mask1,
			 typename scalar<v64<float>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < scalar<v64<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename scalar<v64<double>>::mask_t const & p_mask1,
			 typename scalar<v64<double>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
}
#endif
