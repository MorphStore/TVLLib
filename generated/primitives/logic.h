#ifndef logic_H
#define logic_H

#include "../../header/vector_extension_structs.h"

namespace vectorlib{
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct bitwise_and_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
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
	typename ProcessingStyle::vector_t bitwise_and (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		bitwise_and_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle
	>
	struct bitwise_or_mask_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
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
	typename ProcessingStyle::mask_t bitwise_or_mask (
		 typename ProcessingStyle::mask_t const & p_mask1,
		 typename ProcessingStyle::mask_t const & p_mask2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		bitwise_or_mask_t		<
			ProcessingStyle
		>
		::apply(		p_mask1, 		p_mask2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::size_bit::value
	>
	struct bitwise_or_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
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
	typename ProcessingStyle::vector_t bitwise_or (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		bitwise_or_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle
	>
	struct bitwise_and_mask_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
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
	typename ProcessingStyle::mask_t bitwise_and_mask (
		 typename ProcessingStyle::mask_t const & p_mask1,
		 typename ProcessingStyle::mask_t const & p_mask2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		bitwise_and_mask_t		<
			ProcessingStyle
		>
		::apply(		p_mask1, 		p_mask2, 		element_count);
	}
}
#endif
