#ifndef manipulate_tsubasa_H
#define manipulate_tsubasa_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_tsubasa.h"
#include "../../primitives/manipulate.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct set_to_value_mask_t < tsubasa<v16384<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask,
			 uint64_t p_value)
		{
			return _vel_lvm_mmss(p_mask, 0, p_value);
		}
	}
;
}
#endif
