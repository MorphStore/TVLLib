#ifndef logic_tsubasa_H
#define logic_tsubasa_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_tsubasa.h"
#include "../../primitives/logic.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct bitwise_and_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vand_vvvl(p_vec1, p_vec2, element_count);
		}
	}
;
	template<
	>
	struct bitwise_or_mask_t < tsubasa<v16384<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask1,
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_orm_mmm(p_mask1, p_mask2);
		}
	}
;
	template<
	>
	struct bitwise_or_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vor_vvvl(p_vec1, p_vec2, element_count);
		}
	}
;
	template<
	>
	struct bitwise_and_mask_t < tsubasa<v16384<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask1,
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_andm_mmm(p_mask1, p_mask2);
		}
	}
;
}
#endif
