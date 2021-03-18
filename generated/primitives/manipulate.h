#ifndef manipulate_H
#define manipulate_H

#include "../../header/vector_extension_structs.h"

namespace vectorlib{
	template<
		class ProcessingStyle
	>
	struct set_to_value_mask_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 typename ProcessingStyle::mask_t const & p_mask,
			 uint64_t p_value
		) = delete;
	}
;
	template<
		class ProcessingStyle
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::mask_t set_to_value_mask (
		 typename ProcessingStyle::mask_t const & p_mask,
		 uint64_t p_value)
	{
		return 		set_to_value_mask_t		<
			ProcessingStyle
		>
		::apply(		p_mask, 		p_value);
	}
}
#endif
