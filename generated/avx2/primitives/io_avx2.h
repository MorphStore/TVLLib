#ifndef io_avx2_H
#define io_avx2_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx2.h"
#include "../../primitives/io.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct load_t <avx2<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::vector_t apply (
			 typename avx2<v128<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v128<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::vector_t apply (
			 typename avx2<v128<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v128<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::vector_t apply (
			 typename avx2<v128<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v128<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::vector_t apply (
			 typename avx2<v128<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::vector_t apply (
			 typename avx2<v128<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::vector_t apply (
			 typename avx2<v128<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::vector_t apply (
			 typename avx2<v128<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::vector_t apply (
			 typename avx2<v128<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::vector_t apply (
			 typename avx2<v256<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::vector_t apply (
			 typename avx2<v256<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::vector_t apply (
			 typename avx2<v256<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::vector_t apply (
			 typename avx2<v256<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_load_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::vector_t apply (
			 typename avx2<v256<uint64_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<double>>::vector_t apply (
			 typename avx2<v256<double>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_pd(reinterpret_cast<double const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::vector_t apply (
			 typename avx2<v256<uint32_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::vector_t apply (
			 typename avx2<v256<uint16_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <avx2<v256<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::vector_t apply (
			 typename avx2<v256<uint8_t>>::base_t * p_DataPtr,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct store_t <avx2<v256<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint64_t>>::vector_t p_Vec,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm256_store_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx2<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint64_t>>::vector_t p_Vec,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx2<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint64_t>>::vector_t p_Vec,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm_store_si128(reinterpret_cast<typename avx2< v128< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct store_t <avx2<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint64_t>>::vector_t p_Vec,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm_storeu_si128(reinterpret_cast<typename avx2< v128< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct gather_t <avx2<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::vector_t apply (
			 typename avx2<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint64_t>>::vector_t p_vec,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_i64gather_epi64( reinterpret_cast<const long long int *> (p_DataPtr), p_vec,  sizeof(uint64_t) );
		}
	}
;
	template<
	>
	struct gather_t <avx2<v256<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::vector_t apply (
			 typename avx2<v256<uint32_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint32_t>>::vector_t p_vec,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_i32gather_epi32( reinterpret_cast<const int *> (p_DataPtr), p_vec,  sizeof(uint32_t) );//a bit limited
		}
	}
;
	template<
	>
	struct gather_t <avx2<v256<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::vector_t apply (
			 typename avx2<v256<uint16_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint16_t>>::vector_t p_vec,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m256i p_vec_1 = _mm256_srli_epi32(p_vec, 16);
     __m256i p_vec_2 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 16),16);

     __m256i d_vec_1 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_1, 2);
     __m256i d_vec_2 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_2, 2);
     return _mm256_or_si256(
           _mm256_slli_epi32(d_vec_1, 16),
           _mm256_srli_epi32(_mm256_slli_epi64(d_vec_2, 16), 16)
     );//Possible accessible data range is 65.535/32.767
		}
	}
;
	template<
	>
	struct gather_t <avx2<v256<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::vector_t apply (
			 typename avx2<v256<uint8_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint8_t>>::vector_t p_vec,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m256i p_vec_1 = _mm256_srli_epi32(p_vec, 24);
     __m256i p_vec_2 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 8),24);
     __m256i p_vec_3 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 16),24);
     __m256i p_vec_4 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 24),24);

     __m256i d_vec_1 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_1, 1);
     __m256i d_vec_2 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_2, 1);
     __m256i d_vec_3 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_3, 1);
     __m256i d_vec_4 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_4, 1);

     return
     _mm256_or_si256(
        _mm256_or_si256(
           _mm256_slli_epi32(d_vec_1, 24),
           _mm256_srli_epi32(_mm256_slli_epi32(d_vec_2, 24), 8)
        ),
        _mm256_or_si256(
           _mm256_srli_epi32(_mm256_slli_epi32(d_vec_3, 24), 16),
           _mm256_srli_epi32(_mm256_slli_epi32(d_vec_4, 24), 24)
        )
     );//Possible accessible data range is 255/127
		}
	}
;
	template<
	>
	struct gather_t <avx2<v256<float>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<float>>::vector_t apply (
			 typename avx2<v256<float>>::base_t * p_DataPtr,
			 typename avx2<v256<float>>::vector_t p_vec,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_i32gather_ps( reinterpret_cast<const float *> (p_DataPtr), _mm256_castps_si256( p_vec ),  sizeof(float) );//a bit limited --- Beware about the cast
		}
	}
;
	template<
	>
	struct gather_t <avx2<v256<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<double>>::vector_t apply (
			 typename avx2<v256<double>>::base_t * p_DataPtr,
			 typename avx2<v256<double>>::vector_t p_vec,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_i64gather_pd( reinterpret_cast<const double *> (p_DataPtr), _mm256_castpd_si256( p_vec ),  sizeof(double) ); // --- Beware about the cast
		}
	}
;
	template<
	>
	struct gather_t <avx2<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::vector_t apply (
			 typename avx2<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint64_t>>::vector_t p_vec,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_i64gather_epi64( reinterpret_cast<const long long int *> (p_DataPtr), p_vec,  sizeof(uint64_t) );
		}
	}
;
	template<
	>
	struct gather_t <avx2<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::vector_t apply (
			 typename avx2<v128<uint32_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint32_t>>::vector_t p_vec,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_i32gather_epi32( reinterpret_cast<const int *> (p_DataPtr), p_vec, 4 );//a bit limited
		}
	}
;
	template<
	>
	struct gather_t <avx2<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::vector_t apply (
			 typename avx2<v128<uint16_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint16_t>>::vector_t p_vec,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi16(
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,7) * 2),
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,6) * 2),
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,5) * 2),
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,4) * 2),
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,3) * 2),
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,2) * 2),
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,1) * 2),
              *reinterpret_cast<uint16_t const *>(reinterpret_cast<uint16_t const *>(p_DataPtr) + _mm_extract_epi16(p_vec,0) * 2)
    );//Possible accessible data range is 65.535/32.767
		}
	}
;
	template<
	>
	struct gather_t <avx2<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::vector_t apply (
			 typename avx2<v128<uint8_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint8_t>>::vector_t p_vec,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi8(
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,15) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,14) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,13) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,12) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,11) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,10) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,9) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,8) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,7) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,6) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,5) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,4) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,3) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,2) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,1) * 1),
              *reinterpret_cast<uint8_t const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + _mm_extract_epi8(p_vec,0) * 1)
    );//Possible accessible data range is 255/127
		}
	}
;
	template<
	>
	struct gather_t <avx2<v128<float>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<float>>::vector_t apply (
			 typename avx2<v128<float>>::base_t * p_DataPtr,
			 typename avx2<v128<float>>::vector_t p_vec,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_i32gather_ps( reinterpret_cast<const float *> (p_DataPtr), _mm_castps_si128( p_vec ),  sizeof(float) );//a bit limited --- Beware about the cast
		}
	}
;
	template<
	>
	struct gather_t <avx2<v128<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<double>>::vector_t apply (
			 typename avx2<v128<double>>::base_t * p_DataPtr,
			 typename avx2<v128<double>>::vector_t p_vec,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_i64gather_pd( reinterpret_cast<const double *> (p_DataPtr), _mm_castpd_si128( p_vec ),  sizeof(double) );//a bit limited --- Beware about the cast
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint64_t>>::vector_t p_vec,
			 typename avx2<v128<uint64_t>>::mask_t mask,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			switch (mask){
    case 0:   return; //store nothing
    case 1:   _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t  *>(p_DataPtr),p_vec);
              return; //store everything
    case 2:   p_vec=_mm_shuffle_epi8(p_vec, _mm_set_epi8(7,6,5,4,3,2,1,0,15,14,13,12,11,10,9,8)); //move upper 64 bit to beginning of register and store it to memory
              _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t  *>(p_DataPtr),p_vec);
              return;
    case 3:   _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t  *>(p_DataPtr),p_vec); //store everything
              return;
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint64_t>>::vector_t p_vec,
			 typename avx2<v128<uint64_t>>::mask_t mask,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			switch (mask){
    case 0:   return; //store nothing
    case 1:   _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t  *>(p_DataPtr),p_vec);
              return; //store everything
    case 2:   p_vec=_mm_shuffle_epi8(p_vec, _mm_set_epi8(7,6,5,4,3,2,1,0,15,14,13,12,11,10,9,8)); //move upper 64 bit to beginning of register and store it to memory
              _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t  *>(p_DataPtr),p_vec);
              return;
    case 3:   _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t  *>(p_DataPtr),p_vec); //store everything
              return;
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint32_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint32_t>>::vector_t p_vec,
			 typename avx2<v128<uint32_t>>::mask_t mask,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			switch (mask){
        case 0b0000: return;
        case 0b0001: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
        case 0b0010: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,4)); return;
        case 0b0011: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
        case 0b0100: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,8)); return;
        case 0b0101: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(15, 14, 13, 12, 7, 6, 5, 4, 11, 10, 9, 8, 3, 2, 1, 0))); return;
        case 0b0110: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,4)); return;
        case 0b0111: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
        case 0b1000: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,12)); return;
        case 0b1001: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(11, 10, 9, 8, 7, 6, 5, 4, 15, 14, 13, 12, 3, 2, 1, 0))); return;
        case 0b1010: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(11, 10, 9, 8, 3, 2, 1, 0, 15, 14, 13, 12, 7, 6, 5, 4))); return;
        case 0b1011: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(11, 10, 9, 8, 15, 14, 13, 12, 7, 6, 5, 4, 3, 2, 1, 0))); return;
        case 0b1100: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,8)); return;
        case 0b1101: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(7, 6, 5, 4, 15, 14, 13, 12, 11, 10, 9, 8, 3, 2, 1, 0))); return;
        case 0b1110: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,4)); return;
        case 0b1111: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
     }
     return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint32_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint32_t>>::vector_t p_vec,
			 typename avx2<v128<uint32_t>>::mask_t mask,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			switch (mask){
         case 0b0000: return;
         case 0b0001: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
         case 0b0010: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,4)); return;
         case 0b0011: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
         case 0b0100: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,8)); return;
         case 0b0101: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(15, 14, 13, 12, 7, 6, 5, 4, 11, 10, 9, 8, 3, 2, 1, 0))); return;
         case 0b0110: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,4)); return;
         case 0b0111: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
         case 0b1000: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,12)); return;
         case 0b1001: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(11, 10, 9, 8, 7, 6, 5, 4, 15, 14, 13, 12, 3, 2, 1, 0))); return;
         case 0b1010: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(11, 10, 9, 8, 3, 2, 1, 0, 15, 14, 13, 12, 7, 6, 5, 4))); return;
         case 0b1011: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(11, 10, 9, 8, 15, 14, 13, 12, 7, 6, 5, 4, 3, 2, 1, 0))); return;
         case 0b1100: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,8)); return;
         case 0b1101: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_shuffle_epi8(p_vec,_mm_set_epi8(7, 6, 5, 4, 15, 14, 13, 12, 11, 10, 9, 8, 3, 2, 1, 0))); return;
         case 0b1110: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),_mm_srli_si128(p_vec,4)); return;
         case 0b1111: _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t  *>(p_DataPtr),p_vec); return;
      }
      return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint16_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint16_t>>::vector_t p_vec,
			 typename avx2<v128<uint16_t>>::mask_t mask,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			int8_t matched = 0;
       while(mask != 0){
          if((mask & 0x1) == 0x1){
             if(matched == 0){
                _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t  *>(p_DataPtr),p_vec);
                matched = 1;
             }
             p_DataPtr ++;
          }else{
             matched = 0;
          }
          mask = (mask >> 1) & 0x7FFF;
          p_vec = _mm_srli_si128(p_vec,2);
       }
       return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint16_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint16_t>>::vector_t p_vec,
			 typename avx2<v128<uint16_t>>::mask_t mask,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			int8_t matched = 0;
        while(mask != 0){
           if((mask & 0x1) == 0x1){
              if(matched == 0){
                 _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t  *>(p_DataPtr),p_vec);
                 matched = 1;
              }
              p_DataPtr ++;
           }else{
              matched = 0;
           }
           mask = (mask >> 1) & 0x7FFF;
           p_vec = _mm_srli_si128(p_vec,2);
        }
        return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint8_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint8_t>>::vector_t p_vec,
			 typename avx2<v128<uint8_t>>::mask_t mask,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			int8_t matched = 0;
         while(mask != 0){
            if((mask & 0x1) == 0x1){
               if(matched == 0){
                  _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t  *>(p_DataPtr),p_vec);
                  matched = 1;
               }
               p_DataPtr ++;
            }else{
               matched = 0;
            }

            mask = (mask >> 1) & 0x7FFF;
            p_vec = _mm_srli_si128(p_vec,1);
         }
         return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v128<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v128<uint8_t>>::base_t * p_DataPtr,
			 typename avx2<v128<uint8_t>>::vector_t p_vec,
			 typename avx2<v128<uint8_t>>::mask_t mask,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			int8_t matched = 0;
          while(mask != 0){
             if((mask & 0x1) == 0x1){
                if(matched == 0){
                   _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t  *>(p_DataPtr),p_vec);
                   matched = 1;
                }
                p_DataPtr ++;
             }else{
                matched = 0;
             }

             mask = (mask >> 1) & 0x7FFF;
             p_vec = _mm_srli_si128(p_vec,1);
          }
          return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint64_t>>::vector_t p_vec,
			 typename avx2<v256<uint64_t>>::mask_t mask,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			switch (mask){
      case 0: break;
      //                    case 0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      //                    case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 2: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      //                    case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 4: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 5: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
      case 6: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      //                    case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 8: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
      case 9: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,156)); break;
      case 10: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,141)); break;
      case 11: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,180)); break;
      case 12: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
      case 13: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,120)); break;
      case 14: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 15: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),p_vec); break;
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint64_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint64_t>>::vector_t p_vec,
			 typename avx2<v256<uint64_t>>::mask_t mask,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			switch (mask){
      case 0: break;
      //                    case 0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      //                    case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 2: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      //                    case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 4: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 5: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
      case 6: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      //                    case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
      case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 8: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
      case 9: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,156)); break;
      case 10: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,141)); break;
      case 11: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,180)); break;
      case 12: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
      case 13: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,120)); break;
      case 14: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 15: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint64_t > >::vector_t *>(p_DataPtr),p_vec); break;
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint32_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint32_t>>::vector_t p_vec,
			 typename avx2<v256<uint32_t>>::mask_t mask,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			int matched = 1;
    switch (mask){
      case 0x00: break;
      case 0x01: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x03: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x07: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x0C: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x1F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x30: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0x33: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
      case 0x3C: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x3F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x7F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0xC0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
      case 0xC3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,156)); break;
      case 0xCC: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,141)); break;
      case 0xCF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,180)); break;
      case 0xF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0xF3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,120)); break;
      case 0xFC: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0xFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      default: matched = 0; break;
    }
    if(matched == 0){
      while(mask != 0){
         if((mask & 0x1) == 0x1){
            if(matched == 0){
               matched = 1;
               _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr),p_vec);
            }
            p_DataPtr ++;
         }else{
            matched = 0;
         }
         mask = (mask >> 1) & 0x7FFFFFFF;    //because of sign extention that might happen.
         __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
         __m256i srl64_m = _mm256_slli_epi64(srl64_q, 32);
         __m256i srl8_z = _mm256_srli_epi64(p_vec, 32);
         __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
         p_vec = _mm256_or_si256(srl64, srl8_z);
      }
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint32_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint32_t>>::vector_t p_vec,
			 typename avx2<v256<uint32_t>>::mask_t mask,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			int matched = 1;
    switch (mask){
      case 0x00: break;
      case 0x01: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x03: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x07: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x0C: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x1F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x30: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0x33: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
      case 0x3C: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x3F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0x7F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      case 0xC0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
      case 0xC3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,156)); break;
      case 0xCC: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,141)); break;
      case 0xCF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,180)); break;
      case 0xF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0xF3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,120)); break;
      case 0xFC: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0xFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr), p_vec); break;
      default: matched = 0; break;
    }
    if(matched == 0){
      while(mask != 0){
         if((mask & 0x1) == 0x1){
            if(matched == 0){
               matched = 1;
               _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint32_t > >::vector_t *>(p_DataPtr),p_vec);
            }
            p_DataPtr ++;
         }else{
            matched = 0;
         }
         mask = (mask >> 1) & 0x7FFFFFFF;    //because of sign extention that might happen.
         __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
         __m256i srl64_m = _mm256_slli_epi64(srl64_q, 32);
         __m256i srl8_z = _mm256_srli_epi64(p_vec, 32);
         __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
         p_vec = _mm256_or_si256(srl64, srl8_z);
      }
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint16_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint16_t>>::vector_t p_vec,
			 typename avx2<v256<uint16_t>>::mask_t mask,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			int matched = 1;
    switch (mask){
      case 0x0000: break;
      case 0x0001: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0003: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0007: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x001F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x003F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x007F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00F0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x00FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x01FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x03FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x07FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0F00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
      case 0x0F0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,216)); break;
      case 0x0FF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x0FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x1FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x3FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x7FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0xF000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,147)); break;
      case 0xF00F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t> >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,156)); break;
      case 0xF0F0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,141)); break;
      case 0xF0FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,180)); break;
      case 0xFF00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
      case 0xFF0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,120)); break;
      case 0xFFF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 0xFFFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      default: matched = 0; break;
    }
    if(matched == 0){
      while(mask != 0){
        if((mask & 0x1) == 0x1){
          if(matched == 0){
            matched = 1;
            _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec);
          }
          p_DataPtr ++;
        }else{
          matched = 0;
        }
        mask = (mask >> 1) & 0x7FFFFFFF;
        __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
        __m256i srl64_m = _mm256_slli_epi64(srl64_q, 3*16);
        __m256i srl8_z = _mm256_srli_epi64(p_vec, 1*16);
        __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
        p_vec = _mm256_or_si256(srl64, srl8_z);
      }
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint16_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint16_t>>::vector_t p_vec,
			 typename avx2<v256<uint16_t>>::mask_t mask,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			int matched = 1;
    switch (mask){
      case 0x0000: break;
      case 0x0001: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0003: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0007: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x001F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x003F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x007F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00F0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x00FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x03FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x01FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x07FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0F00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
      case 0x0F0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,216)); break;
      case 0x0FF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x0FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x1FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x3FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x7FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0xF000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,147)); break;
      case 0xF00F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,156)); break;
      case 0xF0F0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,141)); break;
      case 0xF0FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,180)); break;
      case 0xFF00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
      case 0xFF0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,120)); break;
      case 0xFFF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
      case 0xFFFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec); break;
      default: matched = 0; break;
    }
    if(matched == 0){
      while(mask != 0){
        if((mask & 0x1) == 0x1){
          if(matched == 0){
            matched = 1;
            _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint16_t > >::vector_t *>(p_DataPtr),p_vec);
          }
          p_DataPtr ++;
        }else{
          matched = 0;
        }
        mask = (mask >> 1) & 0x7FFFFFFF;
        __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
        __m256i srl64_m = _mm256_slli_epi64(srl64_q, 3*16);
        __m256i srl8_z = _mm256_srli_epi64(p_vec, 1*16);
        __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
        p_vec = _mm256_or_si256(srl64, srl8_z);
      }
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint8_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint8_t>>::vector_t p_vec,
			 typename avx2<v256<uint8_t>>::mask_t mask,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			int matched = 1;
    switch (mask){
      case 0x0: break;
      case 0x00000001: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00000003: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00000007: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000000f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000001f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000003f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000007f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000000ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000001ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000003ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000007ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00000fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00001fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00003fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00007fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000ff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x0000ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0001ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0003ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0007ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x001fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x003fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x007fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00ff0000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0x00ff00ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
      case 0x00ffff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x00ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x01ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x03ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x07ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x1fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x3fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x7fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0xff000000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
      case 0xff0000ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,159)); break;
      case 0xff00ff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,141)); break;
      case 0xff00ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,180)); break;
      case 0xffff0000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0xffff00ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,120)); break;
      case 0xffffff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0xffffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      default: matched = 0; break;
    }
    //shifting over SSE Lanes: https://stackoverflow.com/questions/28664642/avx2-shift-16-bit-integers
    if(matched == 0){
      while(mask != 0){
         if((mask & 0x1) == 0x1){
            if(matched == 0){
               matched = 1;
               _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec);
            }
            p_DataPtr ++;
         }else{
            matched = 0;
         }
         mask = (mask >> 1) & 0x7FFFFFFF;
         __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
         __m256i srl64_m = _mm256_slli_epi64(srl64_q, 7*8);
         __m256i srl8_z = _mm256_srli_epi64(p_vec, 1*8);
         __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
         p_vec = _mm256_or_si256(srl64, srl8_z);
      }
    }
    return ;
		}
	}
;
	template<
	>
	struct compressstore_t <avx2<v256<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename avx2<v256<uint8_t>>::base_t * p_DataPtr,
			 typename avx2<v256<uint8_t>>::vector_t p_vec,
			 typename avx2<v256<uint8_t>>::mask_t mask,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			int matched = 1;
    switch (mask){
      case 0x0: break;
      case 0x00000001: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00000003: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00000007: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000000f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000001f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000003f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000007f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000000ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000001ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000003ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000007ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00000fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00001fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00003fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00007fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0000ff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x0000ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0001ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0003ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0007ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x000fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x001fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x003fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x007fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x00ff0000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0x00ff00ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
      case 0x00ffff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0x00ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x01ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x03ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x07ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x0fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x1fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x3fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0x7fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      case 0xff000000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
      case 0xff0000ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,159)); break;
      case 0xff00ff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,141)); break;
      case 0xff00ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,180)); break;
      case 0xffff0000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
      case 0xffff00ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,120)); break;
      case 0xffffff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
      case 0xffffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec); break;
      default: matched = 0; break;
    }
    //shifting over SSE Lanes: https://stackoverflow.com/questions/28664642/avx2-shift-16-bit-integers
    if(matched == 0){
      while(mask != 0){
         if((mask & 0x1) == 0x1){
            if(matched == 0){
               matched = 1;
               _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< uint8_t > >::vector_t *>(p_DataPtr),p_vec);
            }
            p_DataPtr ++;
         }else{
            matched = 0;
         }
         mask = (mask >> 1) & 0x7FFFFFFF;
         __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
         __m256i srl64_m = _mm256_slli_epi64(srl64_q, 7*8);
         __m256i srl8_z = _mm256_srli_epi64(p_vec, 1*8);
         __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
         p_vec = _mm256_or_si256(srl64, srl8_z);
      }
    }
    return ;
		}
	}
;
}
#endif
