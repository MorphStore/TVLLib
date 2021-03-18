#ifndef create_H
#define create_H

#include "../../header/vector_extension_structs.h"

namespace vectorlib{
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct set1_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
		apply (
			 typename ProcessingStyle::base_t value,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::vector_t set1 (
		 typename ProcessingStyle::base_t value,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		set1_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		value, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct set_sequence_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
		apply (
			 typename ProcessingStyle::base_t a,
			 typename ProcessingStyle::base_t b,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::vector_t set_sequence (
		 typename ProcessingStyle::base_t a,
		 typename ProcessingStyle::base_t b,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		set_sequence_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		a, 		b, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct init_mask_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::mask_t init_mask (
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		init_mask_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		element_count);
	}
}
#endif
