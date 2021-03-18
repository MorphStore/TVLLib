#ifndef create_scalar_H
#define create_scalar_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_scalar.h"
#include "../../primitives/create.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct set1_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::base_t value,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return value;
		}
	}
;
	template<
	>
	struct set1_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::base_t value,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return value;
		}
	}
;
	template<
	>
	struct set1_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::base_t value,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return value;
		}
	}
;
	template<
	>
	struct set1_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::base_t value,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return value;
		}
	}
;
	template<
	>
	struct set1_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::vector_t apply (
			 typename scalar<v64<float>>::base_t value,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return value;
		}
	}
;
	template<
	>
	struct set1_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::base_t value,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return value;
		}
	}
;
	template<
	>
	struct set_sequence_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::base_t a,
			 typename scalar<v64<uint64_t>>::base_t b,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return a;
		}
	}
;
	template<
	>
	struct set_sequence_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::base_t a,
			 typename scalar<v64<uint32_t>>::base_t b,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return a;
		}
	}
;
	template<
	>
	struct set_sequence_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::base_t a,
			 typename scalar<v64<uint16_t>>::base_t b,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return a;
		}
	}
;
	template<
	>
	struct set_sequence_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::base_t a,
			 typename scalar<v64<uint8_t>>::base_t b,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return a;
		}
	}
;
	template<
	>
	struct set_sequence_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::vector_t apply (
			 typename scalar<v64<float>>::base_t a,
			 typename scalar<v64<float>>::base_t b,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return a;
		}
	}
;
	template<
	>
	struct set_sequence_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::base_t a,
			 typename scalar<v64<double>>::base_t b,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return a;
		}
	}
;
	template<
	>
	struct init_mask_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::mask_t apply (
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::mask_t apply (
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::mask_t apply (
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::mask_t apply (
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::mask_t apply (
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
}
#endif
