#ifndef manipulate_avx2_H
#define manipulate_avx2_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx2.h"
#include "../../primitives/manipulate.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct set_to_value_mask_t < avx2<v256<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::mask_t apply (
			 typename avx2<v256<uint64_t>>::mask_t const & p_mask,
			 uint64_t p_value)
		{
			return p_value;
		}
	}
;
}
#endif
