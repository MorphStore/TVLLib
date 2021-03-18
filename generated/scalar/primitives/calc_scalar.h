#ifndef calc_scalar_H
#define calc_scalar_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_scalar.h"
#include "../../primitives/calc.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct add_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 + p_vec2;
		}
	}
;
	template<
	>
	struct add_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 + p_vec2;
		}
	}
;
	template<
	>
	struct add_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 + p_vec2;
		}
	}
;
	template<
	>
	struct add_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 + p_vec2;
		}
	}
;
	template<
	>
	struct add_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::vector_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return p_vec1 + p_vec2;
		}
	}
;
	template<
	>
	struct add_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return p_vec1 + p_vec2;
		}
	}
;
	template<
	>
	struct hadd_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::base_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1;
		}
	}
;
	template<
	>
	struct hadd_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::base_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1;
		}
	}
;
	template<
	>
	struct hadd_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::base_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1;
		}
	}
;
	template<
	>
	struct hadd_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::base_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1;
		}
	}
;
	template<
	>
	struct hadd_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::base_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return p_vec1;
		}
	}
;
	template<
	>
	struct hadd_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::base_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return p_vec1;
		}
	}
;
	template<
	>
	struct sub_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 - p_vec2;
		}
	}
;
	template<
	>
	struct sub_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 - p_vec2;
		}
	}
;
	template<
	>
	struct sub_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 - p_vec2;
		}
	}
;
	template<
	>
	struct sub_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 - p_vec2;
		}
	}
;
	template<
	>
	struct sub_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::vector_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return p_vec1 - p_vec2;
		}
	}
;
	template<
	>
	struct sub_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return p_vec1 - p_vec2;
		}
	}
;
	template<
	>
	struct mul_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 * p_vec2;
		}
	}
;
	template<
	>
	struct mul_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 * p_vec2;
		}
	}
;
	template<
	>
	struct mul_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 * p_vec2;
		}
	}
;
	template<
	>
	struct mul_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 * p_vec2;
		}
	}
;
	template<
	>
	struct mul_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::vector_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return p_vec1 * p_vec2;
		}
	}
;
	template<
	>
	struct mul_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return p_vec1 * p_vec2;
		}
	}
;
	template<
	>
	struct div_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 / p_vec2;
		}
	}
;
	template<
	>
	struct div_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 / p_vec2;
		}
	}
;
	template<
	>
	struct div_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 / p_vec2;
		}
	}
;
	template<
	>
	struct div_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 / p_vec2;
		}
	}
;
	template<
	>
	struct div_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::vector_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return p_vec1 / p_vec2;
		}
	}
;
	template<
	>
	struct div_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return p_vec1 / p_vec2;
		}
	}
;
	template<
	>
	struct shift_left_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_left_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_left_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_left_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_left_individual_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_data,
			 typename scalar<v64<uint64_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_left_individual_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_data,
			 typename scalar<v64<uint32_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_left_individual_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_data,
			 typename scalar<v64<uint16_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_left_individual_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_data,
			 typename scalar<v64<uint8_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_data << p_distance;
		}
	}
;
	template<
	>
	struct shift_right_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct shift_right_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct shift_right_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct shift_right_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct shift_right_individual_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_data,
			 typename scalar<v64<uint64_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct shift_right_individual_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_data,
			 typename scalar<v64<uint32_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct shift_right_individual_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_data,
			 typename scalar<v64<uint16_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct shift_right_individual_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_data,
			 typename scalar<v64<uint8_t>>::vector_t const & p_distance,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_data >> p_distance;
		}
	}
;
	template<
	>
	struct mod_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 % p_vec2;
		}
	}
;
	template<
	>
	struct mod_t <scalar<v64<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint32_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 % p_vec2;
		}
	}
;
	template<
	>
	struct mod_t <scalar<v64<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint16_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 % p_vec2;
		}
	}
;
	template<
	>
	struct mod_t <scalar<v64<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint8_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_vec1 % p_vec2;
		}
	}
;
	template<
	>
	struct mod_t <scalar<v64<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<float>>::vector_t apply (
			 typename scalar<v64<float>>::vector_t const & p_vec1,
			 typename scalar<v64<float>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			return (float) ((int)p_vec1 % (int)p_vec2);
		}
	}
;
	template<
	>
	struct mod_t <scalar<v64<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::vector_t const & p_vec1,
			 typename scalar<v64<double>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return (double) ((int)p_vec1 % (int)p_vec2);
		}
	}
;
	template<
	>
	struct shift_left_mask_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_mask << 1);
		}
	}
;
}
#endif
