#ifndef logic_sse_H
#define logic_sse_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_sse.h"
#include "../../primitives/logic.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct bitwise_and_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::vector_t apply (
			 typename sse<v128<uint64_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_and_si128(p_vec1 , p_vec2);
		}
	}
;
	template<
	>
	struct bitwise_or_mask_t < sse<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 typename sse<v128<uint64_t>>::mask_t const & p_mask1,
			 typename sse<v128<uint64_t>>::mask_t const & p_mask2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_mask1 | p_mask2);
		}
	}
;
}
#endif
