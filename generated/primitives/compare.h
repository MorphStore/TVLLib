#ifndef compare_H
#define compare_H

#include "../../header/vector_extension_structs.h"

namespace vectorlib{
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct equal_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_vec1,
			 typename ProcessingStyle::vector_t const & p_vec2,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::mask_t equal (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		equal_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct less_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_vec1,
			 typename ProcessingStyle::vector_t const & p_vec2,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::mask_t less (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		less_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct greater_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_vec1,
			 typename ProcessingStyle::vector_t const & p_vec2,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::mask_t greater (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		greater_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct count_matches_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t 
		apply (
			 typename ProcessingStyle::mask_t const & p_mask,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	uint16_t count_matches (
		 typename ProcessingStyle::mask_t const & p_mask,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		count_matches_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_mask, 		element_count);
	}
	template<
		class ProcessingStyle
	>
	struct is_zero_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int 
		apply (
			 typename ProcessingStyle::mask_t p_mask,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	int is_zero (
		 typename ProcessingStyle::mask_t p_mask,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		is_zero_t		<
			ProcessingStyle
		>
		::apply(		p_mask, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct greaterequal_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_vec1,
			 typename ProcessingStyle::vector_t const & p_vec2,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::mask_t greaterequal (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		greaterequal_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct lessequal_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_vec1,
			 typename ProcessingStyle::vector_t const & p_vec2,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::mask_t lessequal (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		lessequal_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle
	>
	struct ctz_mask_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t 
		apply (
			 typename ProcessingStyle::mask_t const & p_mask,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	uint16_t ctz_mask (
		 typename ProcessingStyle::mask_t const & p_mask,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		ctz_mask_t		<
			ProcessingStyle
		>
		::apply(		p_mask, 		element_count);
	}
	template<
		class ProcessingStyle
	>
	struct equal_mask_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t 
		apply (
			 typename ProcessingStyle::mask_t const & p_mask1,
			 typename ProcessingStyle::mask_t const & p_mask2,
			 int element_count = ProcessingStyle::vector_helper_t::element_count::value
		) = delete;
	}
;
	template<
		class ProcessingStyle
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	uint16_t equal_mask (
		 typename ProcessingStyle::mask_t const & p_mask1,
		 typename ProcessingStyle::mask_t const & p_mask2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		equal_mask_t		<
			ProcessingStyle
		>
		::apply(		p_mask1, 		p_mask2, 		element_count);
	}
}
#endif
