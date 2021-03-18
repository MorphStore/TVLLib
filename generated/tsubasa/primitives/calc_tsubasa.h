#ifndef calc_tsubasa_H
#define calc_tsubasa_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_tsubasa.h"
#include "../../primitives/calc.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct add_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vaddul_vvvl(p_vec1, p_vec2, element_count);
		}
	}
;
	template<
	>
	struct hadd_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::base_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_lvsl_svs(_vel_vsuml_vvl(p_vec1, element_count), 0);
		}
	}
;
	template<
	>
	struct sub_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vsubul_vvvl(p_vec1, p_vec2, element_count);
		}
	}
;
	template<
	>
	struct mul_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vmulul_vvvl(p_vec1, p_vec2, element_count);
		}
	}
;
	template<
	>
	struct div_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vdivul_vvvl(p_vec1, p_vec2, element_count);
		}
	}
;
	template<
	>
	struct shift_left_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vsll_vvsl(p_data, p_distance, element_count);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_data,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_distance,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vsll_vvvl(p_data, p_distance, element_count);
		}
	}
;
	template<
	>
	struct shift_right_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vsrl_vvsl(p_data, p_distance, element_count);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_data,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_distance,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vsrl_vvvl(p_data, p_distance, element_count);
		}
	}
;
	template<
	>
	struct mod_t <tsubasa<v16384<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec1,
			 typename tsubasa<v16384<uint64_t>>::vector_t const & p_vec2,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vsubul_vvvl(p_vec1, _vel_vmulul_vvvl(_vel_vdivul_vvvl(p_vec1, p_vec2, element_count),p_vec2,element_count), element_count);
		}
	}
;
	template<
	>
	struct shift_left_mask_t < tsubasa<v16384<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::mask_t apply (
			 typename tsubasa<v16384<uint64_t>>::mask_t const & p_mask,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			
   
       uint64_t masks[4];
       uint64_t masks_carry[4];
       masks[3] = 0;
       for (unsigned i=0; i<3; i++){
        masks_carry[2-i] = _vel_svm_sms(p_mask,i);
         masks_carry[2-i] = masks_carry[2-i] >> 63; 
       }
       for (unsigned i=0; i<4; i++){
        masks[3-i] = _vel_svm_sms(p_mask,i);
        masks[3-i] = masks[3-i] << 1;
        masks[3-i] |= masks_carry[3-i]; 
       }
       tsubasa<v16384<uint64_t>>::mask_t final_mask;
       final_mask =_vel_vfmklaf_ml(256);
       for (unsigned i=0; i<4; i++){ 
        final_mask = _vel_lvm_mmss(final_mask, i, masks[3-i]);
        }
        return final_mask;
		}
	}
;
}
#endif
