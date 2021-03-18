#ifndef manipulate_sse_H
#define manipulate_sse_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_sse.h"
#include "../../primitives/manipulate.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct set_to_value_mask_t < sse<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 typename sse<v128<uint64_t>>::mask_t const & p_mask,
			 uint64_t p_value)
		{
			return p_value;
		}
	}
;
}
#endif
