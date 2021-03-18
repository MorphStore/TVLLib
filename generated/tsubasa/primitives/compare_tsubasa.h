#ifndef compare_tsubasa_H
#define compare_tsubasa_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_tsubasa.h"
#include "../../primitives/compare.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct equal_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vfmkleq_mvl( _vel_vcmpsl_vvvl( p_vec1, p_vec2, element_count ), element_count );
		}
	}
;
	template<
	>
	struct less_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vfmkllt_mvl( _vel_vcmpsl_vvvl( p_vec1, p_vec2, element_count ), element_count );
		}
	}
;
	template<
	>
	struct greater_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vfmklgt_mvl( _vel_vcmpsl_vvvl( p_vec1, p_vec2, element_count ), element_count );
		}
	}
;
	template<
	>
	struct count_matches_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_pcvm_sml(p_mask, element_count);
		}
	}
;
	template<
	>
	struct is_zero_t < tsubasa<v16384<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t p_mask,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_pcvm_sml(p_mask, element_count );
		}
	}
;
	template<
	>
	struct greaterequal_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			 //tsubasa<v16384<uint64_t>>::vector_t v_compare = _vel_vcmpsl_vvvl( p_vec1, p_vec2, element_count );
//    return _vel_orm_mmm(_vel_vfmklgt_mvl( v_compare, element_count ),_vel_vfmkleq_mvl( v_compare, element_count ));
	return _vel_vfmklge_mvl(_vel_vcmpsl_vvvl( p_vec1, p_vec2, element_count ), element_count);

	
		}
	}
;
	template<
	>
	struct lessequal_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			
	//tsubasa<v16384<uint64_t>>::vector_t v_compare = _vel_vcmpsl_vvvl( p_vec1, p_vec2, element_count );
    //return _vel_orm_mmm(_vel_vfmkllt_mvl( v_compare, element_count ),_vel_vfmkleq_mvl( v_compare, element_count ));
	return _vel_vfmklle_mvl(_vel_vcmpsl_vvvl( p_vec1, p_vec2, element_count ), element_count);
	
		}
	}
;
	template<
	>
	struct ctz_mask_t < tsubasa<v16384<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_tovm_sml(_vel_negm_mm(p_mask), element_count);
		}
	}
;
	template<
	>
	struct equal_mask_t < tsubasa<v16384<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask1,
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (element_count == _vel_pcvm_sml(_vel_eqvm_mmm(p_mask1,p_mask2),element_count));
		}
	}
;
}
#endif
