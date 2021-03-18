#ifndef create_tsubasa_H
#define create_tsubasa_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_tsubasa.h"
#include "../../primitives/create.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct set1_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::base_t value,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_pvbrd_vsl(value, element_count);
		}
	}
;
	template<
	>
	struct set_sequence_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::base_t a,
			 typename tsubasa<v16384<uint64_t>>::base_t b,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			tsubasa<v16384<uint64_t>>::base_t help [element_count];for(uint64_t i = 0; i < element_count; i++){help[element_count-i-1] = a+(element_count - i - 1) * b;}return _vel_vld_vssl(8, help, element_count);
		}
	}
;
	template<
	>
	struct init_mask_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vfmklaf_ml(element_count);
		}
	}
;
}
#endif
