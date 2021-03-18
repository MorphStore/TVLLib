#ifndef io_tsubasa_H
#define io_tsubasa_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_tsubasa.h"
#include "../../primitives/io.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct load_t <tsubasa<v16384<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::base_t * p_DataPtr,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vld_vssl(8, reinterpret_cast< void const * >(p_DataPtr), element_count);
		}
	}
;
	template<
	>
	struct load_t <tsubasa<v16384<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::base_t * p_DataPtr,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _vel_vld_vssl(8, reinterpret_cast< void const * >(p_DataPtr), element_count);
		}
	}
;
	template<
	>
	struct store_t <tsubasa<v16384<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename tsubasa<v16384<uint64_t>>::base_t * p_DataPtr,
			 typename tsubasa<v16384<uint64_t>>::vector_t p_Vec,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return  _vel_vst_vssl(p_Vec, 8, reinterpret_cast<void*> (p_DataPtr), element_count);
		}
	}
;
	template<
	>
	struct store_t <tsubasa<v16384<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename tsubasa<v16384<uint64_t>>::base_t * p_DataPtr,
			 typename tsubasa<v16384<uint64_t>>::vector_t p_Vec,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			return  _vel_vst_vssl(p_Vec, 8, reinterpret_cast<void*> (p_DataPtr), element_count);
		}
	}
;
	template<
	>
	struct gather_t <tsubasa<v16384<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename tsubasa<v16384<uint64_t>>::vector_t apply (
			 typename tsubasa<v16384<uint64_t>>::base_t * p_DataPtr,
			 typename tsubasa<v16384<uint64_t>>::vector_t p_vec,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			typename tsubasa<v16384<uint64_t>>::vector_t vy = _vel_vsfa_vvssl(p_vec, 3, reinterpret_cast<uint64_t>(p_DataPtr), element_count); // shift left by 3 and add a, should depend from scale
         return _vel_vgt_vvssl(vy,
                              0, //lowest address reinterpret_cast<uint64_t> (p_DataPtr)
                              0, //highest address
                              element_count);
		}
	}
;
	template<
	>
	struct compressstore_t <tsubasa<v16384<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename tsubasa<v16384<uint64_t>>::base_t * p_DataPtr,
			 typename tsubasa<v16384<uint64_t>>::vector_t p_vec,
			 typename tsubasa<v16384<uint64_t>>::mask_t mask,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			 typename tsubasa<v16384<uint64_t>>::vector_t help_vec = _vel_pvbrd_vsl(0, element_count); //against undefined behaviour
  tsubasa<v16384<uint64_t>>::base_t mask_pop = _vel_pcvm_sml(mask, element_count);	//how much data should be saved
  tsubasa<v16384<uint64_t>>::vector_t save_vec = _vel_vcp_vvmvl(p_vec, mask, help_vec, element_count); //creating a compressed vector to save
  _vel_vst_vssl(save_vec, 8, reinterpret_cast<void*> (p_DataPtr), mask_pop); //saving only the first <mask_pop> elements
		}
	}
;
	template<
	>
	struct compressstore_t <tsubasa<v16384<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename tsubasa<v16384<uint64_t>>::base_t * p_DataPtr,
			 typename tsubasa<v16384<uint64_t>>::vector_t p_vec,
			 typename tsubasa<v16384<uint64_t>>::mask_t mask,
			 int element_count = tsubasa<v16384<uint64_t>>::vector_helper_t::element_count::value)
		{
			 typename tsubasa<v16384<uint64_t>>::vector_t help_vec = _vel_pvbrd_vsl(0, element_count); //against undefined behaviour
  tsubasa<v16384<uint64_t>>::base_t mask_pop = _vel_pcvm_sml(mask, element_count);	//how much data should be saved
  typename tsubasa<v16384<uint64_t>>::vector_t save_vec = _vel_vcp_vvmvl(p_vec, mask, help_vec, element_count); //creating a compressed vector to save
  return  _vel_vst_vssl(save_vec, 8, reinterpret_cast<void*> (p_DataPtr), mask_pop); //saving only the first <mask_pop> elements
		}
	}
;
}
#endif
