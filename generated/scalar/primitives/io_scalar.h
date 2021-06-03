#ifndef io_scalar_H
#define io_scalar_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_scalar.h"
#include "../../primitives/io.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct load_t <scalar<v64<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct load_t <scalar<v64<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct load_t <scalar<v64<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct load_t <scalar<v64<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct load_t <scalar<v64<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
   template<
	>
	struct load_t <scalar<v64<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<double>>::vector_t apply (
			 typename scalar<v64<double>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct load_t <scalar<v64<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint32_t>>::vector_t apply (
			 typename scalar<v64<uint32_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct load_t <scalar<v64<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint16_t>>::vector_t apply (
			 typename scalar<v64<uint16_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct load_t <scalar<v64<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint8_t>>::vector_t apply (
			 typename scalar<v64<uint8_t>>::base_t * p_DataPtr,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			return *p_DataPtr;
		}
	}
;
	template<
	>
	struct store_t <scalar<v64<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint64_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint64_t>>::vector_t p_Vec,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			*p_DataPtr=(uint64_t)p_Vec;
		}
	}
;
	template<
	>
	struct store_t <scalar<v64<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint64_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint64_t>>::vector_t p_Vec,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			*p_DataPtr=(uint64_t)p_Vec;
		}
	}
;
	template<
	>
	struct gather_t <scalar<v64<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename scalar<v64<uint64_t>>::vector_t apply (
			 typename scalar<v64<uint64_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint64_t>>::vector_t p_vec,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			 return *reinterpret_cast<uint64_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + p_vec * sizeof(uint64_t));
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint64_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint64_t>>::vector_t p_vec,
			 typename scalar<v64<uint64_t>>::mask_t mask,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint64_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint64_t>>::vector_t p_vec,
			 typename scalar<v64<uint64_t>>::mask_t mask,
			 int element_count = scalar<v64<uint64_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint32_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint32_t>>::vector_t p_vec,
			 typename scalar<v64<uint32_t>>::mask_t mask,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint32_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint32_t>>::vector_t p_vec,
			 typename scalar<v64<uint32_t>>::mask_t mask,
			 int element_count = scalar<v64<uint32_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint16_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint16_t>>::vector_t p_vec,
			 typename scalar<v64<uint16_t>>::mask_t mask,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint16_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint16_t>>::vector_t p_vec,
			 typename scalar<v64<uint16_t>>::mask_t mask,
			 int element_count = scalar<v64<uint16_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint8_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint8_t>>::vector_t p_vec,
			 typename scalar<v64<uint8_t>>::mask_t mask,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<uint8_t>>::base_t * p_DataPtr,
			 typename scalar<v64<uint8_t>>::vector_t p_vec,
			 typename scalar<v64<uint8_t>>::mask_t mask,
			 int element_count = scalar<v64<uint8_t>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<float>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<float>>::base_t * p_DataPtr,
			 typename scalar<v64<float>>::vector_t p_vec,
			 typename scalar<v64<float>>::mask_t mask,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<float>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<float>>::base_t * p_DataPtr,
			 typename scalar<v64<float>>::vector_t p_vec,
			 typename scalar<v64<float>>::mask_t mask,
			 int element_count = scalar<v64<float>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<double>>::base_t * p_DataPtr,
			 typename scalar<v64<double>>::vector_t p_vec,
			 typename scalar<v64<double>>::mask_t mask,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
	template<
	>
	struct compressstore_t <scalar<v64<double>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename scalar<v64<double>>::base_t * p_DataPtr,
			 typename scalar<v64<double>>::vector_t p_vec,
			 typename scalar<v64<double>>::mask_t mask,
			 int element_count = scalar<v64<double>>::vector_helper_t::element_count::value)
		{
			if (mask!=0)  *p_DataPtr=p_vec;
		}
	}
;
}
#endif
