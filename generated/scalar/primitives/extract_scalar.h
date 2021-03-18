#ifndef extract_scalar_H
#define extract_scalar_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_scalar.h"
#include "../../primitives/extract.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct extract_value_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::base_t apply (
			 typename scalar<v64<uint64_t>>::vector_t p_vec,
			 int idx)
		{
			return (uint64_t)p_vec;
		}
	}
;
	template<
	>
	struct extract_value_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::base_t apply (
			 typename scalar<v64<uint32_t>>::vector_t p_vec,
			 int idx)
		{
			return (uint32_t)p_vec;
		}
	}
;
	template<
	>
	struct extract_value_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::base_t apply (
			 typename scalar<v64<uint16_t>>::vector_t p_vec,
			 int idx)
		{
			return (uint16_t)p_vec;
		}
	}
;
	template<
	>
	struct extract_value_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::base_t apply (
			 typename scalar<v64<uint8_t>>::vector_t p_vec,
			 int idx)
		{
			return (uint8_t)p_vec;
		}
	}
;
	template<
	>
	struct extract_value_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::base_t apply (
			 typename scalar<v64<float>>::vector_t p_vec,
			 int idx)
		{
			return (float)p_vec;
		}
	}
;
	template<
	>
	struct extract_value_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::base_t apply (
			 typename scalar<v64<double>>::vector_t p_vec,
			 int idx)
		{
			return (double)p_vec;
		}
	}
;
}
#endif
