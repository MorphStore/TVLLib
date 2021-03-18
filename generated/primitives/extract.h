#ifndef extract_H
#define extract_H

#include "../../header/vector_extension_structs.h"

namespace vectorlib{
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct extract_value_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::base_t 
		apply (
			 typename ProcessingStyle::vector_t p_vec,
			 int idx
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::base_t extract_value (
		 typename ProcessingStyle::vector_t p_vec,
		 int idx)
	{
		return 		extract_value_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec, 		idx);
	}
}
#endif
