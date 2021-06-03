#ifndef io_avx512_H
#define io_avx512_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx512.h"
#include "../../primitives/io.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct load_t <avx512<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v128<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v128<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v128<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v256<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_load_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_load_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_load_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_load_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_loadu_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::vector_t apply (
			 typename avx512<v512<double>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_loadu_pd(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<double>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::vector_t apply (
			 typename avx512<v512<double>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_load_pd(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_loadu_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_loadu_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx512<v512<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_loadu_si512(( void * )(p_DataPtr));
		}
	}
;
	template<
	>
	struct store_t <avx512<v512<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint64_t>>::vector_t p_Vec,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm512_store_si512((void *)p_DataPtr, p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx512<v512<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint64_t>>::vector_t p_Vec,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm512_storeu_si512((void *)p_DataPtr, p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx512<v256<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint64_t>>::vector_t p_Vec,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm256_store_si256(reinterpret_cast<typename avx512< v256< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx512<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint64_t>>::vector_t p_Vec,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm256_storeu_si256(reinterpret_cast<typename avx512< v256< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx512<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint64_t>>::vector_t p_Vec,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm_store_si128(reinterpret_cast<typename avx512< v128< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx512<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint64_t>>::vector_t p_Vec,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm_storeu_si128(reinterpret_cast<typename avx512< v128< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct gather_t <avx512<v512<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint64_t>>::vector_t p_vec,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_i64gather_epi64( p_vec,reinterpret_cast<typename avx512< v512< uint64_t > >::vector_t const *> (p_DataPtr), sizeof(uint64_t) );
		}
	}
;
	template<
	>
	struct gather_t <avx512<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint64_t>>::vector_t p_vec,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			 return _mm256_i64gather_epi64( reinterpret_cast<const long long int *> (p_DataPtr), p_vec,  sizeof(uint64_t) );
		}
	}
;
	template<
	>
	struct gather_t <avx512<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint64_t>>::vector_t p_vec,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_i64gather_epi64( reinterpret_cast<const long long int *> (p_DataPtr), p_vec,  sizeof(uint64_t) );
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint64_t>>::vector_t p_vec,
			 typename avx512<v128<uint64_t>>::mask_t mask,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi64((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint64_t>>::vector_t p_vec,
			 typename avx512<v128<uint64_t>>::mask_t mask,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi64((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint32_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint32_t>>::vector_t p_vec,
			 typename avx512<v128<uint32_t>>::mask_t mask,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi32((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint32_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint32_t>>::vector_t p_vec,
			 typename avx512<v128<uint32_t>>::mask_t mask,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi32((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint16_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint16_t>>::vector_t p_vec,
			 typename avx512<v128<uint16_t>>::mask_t mask,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi16((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint16_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint16_t>>::vector_t p_vec,
			 typename avx512<v128<uint16_t>>::mask_t mask,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi16((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint8_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint8_t>>::vector_t p_vec,
			 typename avx512<v128<uint8_t>>::mask_t mask,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi8((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<uint8_t>>::base_t * p_DataPtr,
			 typename avx512<v128<uint8_t>>::vector_t p_vec,
			 typename avx512<v128<uint8_t>>::mask_t mask,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_epi8((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<float>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<float>>::base_t * p_DataPtr,
			 typename avx512<v128<float>>::vector_t p_vec,
			 typename avx512<v128<float>>::mask_t mask,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_ps((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<float>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<float>>::base_t * p_DataPtr,
			 typename avx512<v128<float>>::vector_t p_vec,
			 typename avx512<v128<float>>::mask_t mask,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_ps((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<double>>::base_t * p_DataPtr,
			 typename avx512<v128<double>>::vector_t p_vec,
			 typename avx512<v128<double>>::mask_t mask,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_pd((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v128<double>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v128<double>>::base_t * p_DataPtr,
			 typename avx512<v128<double>>::vector_t p_vec,
			 typename avx512<v128<double>>::mask_t mask,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			_mm_mask_compressstoreu_pd((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint64_t>>::vector_t p_vec,
			 typename avx512<v256<uint64_t>>::mask_t mask,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi64((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint64_t>>::vector_t p_vec,
			 typename avx512<v256<uint64_t>>::mask_t mask,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi64((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint32_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint32_t>>::vector_t p_vec,
			 typename avx512<v256<uint32_t>>::mask_t mask,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi32((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint32_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint32_t>>::vector_t p_vec,
			 typename avx512<v256<uint32_t>>::mask_t mask,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi32((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint16_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint16_t>>::vector_t p_vec,
			 typename avx512<v256<uint16_t>>::mask_t mask,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi16((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint16_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint16_t>>::vector_t p_vec,
			 typename avx512<v256<uint16_t>>::mask_t mask,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi16((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint8_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint8_t>>::vector_t p_vec,
			 typename avx512<v256<uint8_t>>::mask_t mask,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi8((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<uint8_t>>::base_t * p_DataPtr,
			 typename avx512<v256<uint8_t>>::vector_t p_vec,
			 typename avx512<v256<uint8_t>>::mask_t mask,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_epi8((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<float>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<float>>::base_t * p_DataPtr,
			 typename avx512<v256<float>>::vector_t p_vec,
			 typename avx512<v256<float>>::mask_t mask,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_ps((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<float>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<float>>::base_t * p_DataPtr,
			 typename avx512<v256<float>>::vector_t p_vec,
			 typename avx512<v256<float>>::mask_t mask,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_ps((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<double>>::base_t * p_DataPtr,
			 typename avx512<v256<double>>::vector_t p_vec,
			 typename avx512<v256<double>>::mask_t mask,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_pd((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v256<double>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v256<double>>::base_t * p_DataPtr,
			 typename avx512<v256<double>>::vector_t p_vec,
			 typename avx512<v256<double>>::mask_t mask,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			_mm256_mask_compressstoreu_pd((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint64_t>>::vector_t p_vec,
			 typename avx512<v512<uint64_t>>::mask_t mask,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi64((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint64_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint64_t>>::vector_t p_vec,
			 typename avx512<v512<uint64_t>>::mask_t mask,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi64((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint32_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint32_t>>::vector_t p_vec,
			 typename avx512<v512<uint32_t>>::mask_t mask,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi32((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint32_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint32_t>>::vector_t p_vec,
			 typename avx512<v512<uint32_t>>::mask_t mask,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi32((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint16_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint16_t>>::vector_t p_vec,
			 typename avx512<v512<uint16_t>>::mask_t mask,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi16((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint16_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint16_t>>::vector_t p_vec,
			 typename avx512<v512<uint16_t>>::mask_t mask,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi16((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint8_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint8_t>>::vector_t p_vec,
			 typename avx512<v512<uint8_t>>::mask_t mask,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi8((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<uint8_t>>::base_t * p_DataPtr,
			 typename avx512<v512<uint8_t>>::vector_t p_vec,
			 typename avx512<v512<uint8_t>>::mask_t mask,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_epi8((void *)p_DataPtr,mask, p_vec);//CPUID Flags: AVX512_VBMI2
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<float>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<float>>::base_t * p_DataPtr,
			 typename avx512<v512<float>>::vector_t p_vec,
			 typename avx512<v512<float>>::mask_t mask,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_ps((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<float>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<float>>::base_t * p_DataPtr,
			 typename avx512<v512<float>>::vector_t p_vec,
			 typename avx512<v512<float>>::mask_t mask,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_ps((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<double>>::base_t * p_DataPtr,
			 typename avx512<v512<double>>::vector_t p_vec,
			 typename avx512<v512<double>>::mask_t mask,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_pd((void *)p_DataPtr,mask, p_vec);
		}
	}
;
	template<
	>
	struct compressstore_t <avx512<v512<double>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx512<v512<double>>::base_t * p_DataPtr,
			 typename avx512<v512<double>>::vector_t p_vec,
			 typename avx512<v512<double>>::mask_t mask,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			_mm512_mask_compressstoreu_pd((void *)p_DataPtr,mask, p_vec);
		}
	}
;
}
#endif
