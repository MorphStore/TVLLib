#ifndef logic_scalar_H
#define logic_scalar_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_scalar.h"
#include "../../primitives/logic.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct bitwise_and_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_vec1 & p_vec2);
		}
	}
;
	template<
	>
	struct bitwise_or_mask_t < scalar<v64<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask1,
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_mask1 | p_mask2);
		}
	}
;
	template<
	>
	struct bitwise_or_t <scalar<v64<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
			 typename scalar<v64<uint64_t>>::vector_t const & p_vec2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_vec1 | p_vec2);
		}
	}
;
	template<
	>
	struct bitwise_and_mask_t < scalar<v64<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::mask_t apply (
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask1,
			 typename scalar<v64<uint64_t>>::mask_t const & p_mask2,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_mask1 & p_mask2);
		}
	}
;
}
#endif
