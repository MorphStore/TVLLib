#ifndef calc_H
#define calc_H

#include "../../header/vector_extension_structs.h"

namespace vectorlib{
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct add_t {
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
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::vector_t add (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		add_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct hadd_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::base_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_vec1,
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
	typename ProcessingStyle::base_t hadd (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		hadd_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct sub_t {
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
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::vector_t sub (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		sub_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct mul_t {
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
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::vector_t mul (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		mul_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct div_t {
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
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::vector_t div (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		div_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct shift_left_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_data,
			 int const & p_distance,
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
	typename ProcessingStyle::vector_t shift_left (
		 typename ProcessingStyle::vector_t const & p_data,
		 int const & p_distance,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		shift_left_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_data, 		p_distance, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct shift_left_individual_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_data,
			 typename ProcessingStyle::vector_t const & p_distance,
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
	typename ProcessingStyle::vector_t shift_left_individual (
		 typename ProcessingStyle::vector_t const & p_data,
		 typename ProcessingStyle::vector_t const & p_distance,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		shift_left_individual_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_data, 		p_distance, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct shift_right_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_data,
			 int const & p_distance,
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
	typename ProcessingStyle::vector_t shift_right (
		 typename ProcessingStyle::vector_t const & p_data,
		 int const & p_distance,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		shift_right_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_data, 		p_distance, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct shift_right_individual_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::vector_t 
		apply (
			 typename ProcessingStyle::vector_t const & p_data,
			 typename ProcessingStyle::vector_t const & p_distance,
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
	typename ProcessingStyle::vector_t shift_right_individual (
		 typename ProcessingStyle::vector_t const & p_data,
		 typename ProcessingStyle::vector_t const & p_distance,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		shift_right_individual_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_data, 		p_distance, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct mod_t {
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
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	MSV_CXX_ATTRIBUTE_FORCE_INLINE
	static
	typename ProcessingStyle::vector_t mod (
		 typename ProcessingStyle::vector_t const & p_vec1,
		 typename ProcessingStyle::vector_t const & p_vec2,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		mod_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_vec1, 		p_vec2, 		element_count);
	}
	template<
		class ProcessingStyle,
		int Granularity = ProcessingStyle::vector_helper_t::granularity::value
	>
	struct shift_left_mask_t {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename ProcessingStyle::mask_t 
		apply (
			 typename ProcessingStyle::mask_t const & p_mask,
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
	typename ProcessingStyle::mask_t shift_left_mask (
		 typename ProcessingStyle::mask_t const & p_mask,
		 int element_count = ProcessingStyle::vector_helper_t::element_count::value)
	{
		return 		shift_left_mask_t		<
			ProcessingStyle,
			Granularity
		>
		::apply(		p_mask, 		element_count);
	}
}
#endif
