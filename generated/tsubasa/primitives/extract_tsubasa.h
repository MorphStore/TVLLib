#ifndef extract_tsubasa_H
#define extract_tsubasa_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_tsubasa.h"
#include "../../primitives/extract.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct extract_value_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::base_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t p_vec,
			 int idx)
		{
			return _vel_lvsl_svs(p_vec, idx);
		}
	}
;
}
#endif
