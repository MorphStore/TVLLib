#ifndef calc_avx512_H
#define calc_avx512_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx512.h"
#include "../../primitives/calc.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct add_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_add_epi64( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_add_epi32( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_add_epi16( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_add_epi8( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::vector_t apply (
			 typename avx512<v128<float>>::vector_t const & p_vec1,
			 typename avx512<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_add_ps( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::vector_t apply (
			 typename avx512<v128<double>>::vector_t const & p_vec1,
			 typename avx512<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_add_pd( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_add_epi64( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_add_epi32( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_add_epi16( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_add_epi8( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::vector_t apply (
			 typename avx512<v256<float>>::vector_t const & p_vec1,
			 typename avx512<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_add_ps( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::vector_t apply (
			 typename avx512<v256<double>>::vector_t const & p_vec1,
			 typename avx512<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_add_pd( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_add_epi64( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_add_epi32( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_add_epi16( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_add_epi8( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::vector_t apply (
			 typename avx512<v512<float>>::vector_t const & p_vec1,
			 typename avx512<v512<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_add_ps( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct add_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::vector_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_add_pd( p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::base_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_reduce_add_epi64(p_vec1);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::base_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_reduce_add_pd(p_vec1);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::base_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_reduce_add_epi32(p_vec1);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::base_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),0)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),1)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),2)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),3)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),4)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),5)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),6)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),7)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),8)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),9)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),10)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),11)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),12)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),13)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),14)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,0),15)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),0)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),1)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),2)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),3)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),4)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),5)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),6)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),7)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),8)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),9)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),10)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),11)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),12)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),13)+
         _mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),14)+_mm256_extract_epi16(_mm512_extracti64x4_epi64(p_vec1,1),15);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::base_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			         return _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),0)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),1)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),2)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),3)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),4)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),5)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),6)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),7)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),8)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),9)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),10)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),11)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),12)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),13)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),14)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),15)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),16)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),17)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),18)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),19)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),20)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),21)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),22)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),23)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),24)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),25)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),26)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),27)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),28)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),29)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),30)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,0),31)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),0)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),1)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),2)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),3)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),4)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),5)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),6)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),7)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),8)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),9)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),10)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),11)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),12)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),13)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),14)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),15)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),16)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),17)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),18)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),19)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),20)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),21)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),22)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),23)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),24)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),25)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),26)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),27)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),28)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),29)+
         _mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),30)+_mm256_extract_epi8(_mm512_extracti64x4_epi64(p_vec1,1),31);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::base_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			 return _mm256_extract_epi64(p_vec1, 0) +                  _mm256_extract_epi64(p_vec1, 1) +                  _mm256_extract_epi64(p_vec1, 2) +                  _mm256_extract_epi64(p_vec1, 3);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::base_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			__m256i tmp =
            _mm256_castps_si256(
               _mm256_hadd_ps(
                  _mm256_castsi256_ps(p_vec1),
                  _mm256_castsi256_ps(p_vec1)
               )
            );
          return _mm256_extract_epi32(tmp,0)+_mm256_extract_epi32(tmp,1)+_mm256_extract_epi32(tmp,4)+_mm256_extract_epi32(tmp,5);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::base_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_extract_epi16(p_vec1,0)+_mm256_extract_epi16(p_vec1,1)+_mm256_extract_epi16(p_vec1,2)+_mm256_extract_epi16(p_vec1,3)
         +_mm256_extract_epi16(p_vec1,4)+_mm256_extract_epi16(p_vec1,5)+_mm256_extract_epi16(p_vec1,6)+_mm256_extract_epi16(p_vec1,7)+
         _mm256_extract_epi16(p_vec1,8)+_mm256_extract_epi16(p_vec1,9)+_mm256_extract_epi16(p_vec1,10)+_mm256_extract_epi16(p_vec1,11)
         +_mm256_extract_epi16(p_vec1,12)+_mm256_extract_epi16(p_vec1,13)+_mm256_extract_epi16(p_vec1,14)+_mm256_extract_epi16(p_vec1,15);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::base_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			 return _mm256_extract_epi8(p_vec1,0)+_mm256_extract_epi8(p_vec1,1)+_mm256_extract_epi8(p_vec1,2)+_mm256_extract_epi8(p_vec1,3)
         +_mm256_extract_epi8(p_vec1,4)+_mm256_extract_epi8(p_vec1,5)+_mm256_extract_epi8(p_vec1,6)+_mm256_extract_epi8(p_vec1,7)+
         _mm256_extract_epi8(p_vec1,8)+_mm256_extract_epi8(p_vec1,9)+_mm256_extract_epi8(p_vec1,10)+_mm256_extract_epi8(p_vec1,11)
         +_mm256_extract_epi8(p_vec1,12)+_mm256_extract_epi8(p_vec1,13)+_mm256_extract_epi8(p_vec1,14)+_mm256_extract_epi8(p_vec1,15)+
         _mm256_extract_epi8(p_vec1,16)+_mm256_extract_epi8(p_vec1,17)+_mm256_extract_epi8(p_vec1,18)+_mm256_extract_epi8(p_vec1,19)
         +_mm256_extract_epi8(p_vec1,20)+_mm256_extract_epi8(p_vec1,21)+_mm256_extract_epi8(p_vec1,22)+_mm256_extract_epi8(p_vec1,23)+
         _mm256_extract_epi8(p_vec1,24)+_mm256_extract_epi8(p_vec1,25)+_mm256_extract_epi8(p_vec1,26)+_mm256_extract_epi8(p_vec1,27)
         +_mm256_extract_epi8(p_vec1,28)+_mm256_extract_epi8(p_vec1,29)+_mm256_extract_epi8(p_vec1,30)+_mm256_extract_epi8(p_vec1,31);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::base_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			 return _mm_extract_epi64(p_vec1, 0) + _mm_extract_epi64(p_vec1, 1);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::base_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			__m128i tmp =
            _mm_castps_si128(
               _mm_hadd_ps(
                  _mm_castsi128_ps(p_vec1),
                  _mm_castsi128_ps(p_vec1)
               )
            );
         return _mm_extract_epi32(tmp,0)+_mm_extract_epi32(tmp,1);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::base_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			 return _mm_extract_epi16(p_vec1,0)+_mm_extract_epi16(p_vec1,1)+_mm_extract_epi16(p_vec1,2)+_mm_extract_epi16(p_vec1,3)
         +_mm_extract_epi16(p_vec1,4)+_mm_extract_epi16(p_vec1,5)+_mm_extract_epi16(p_vec1,6)+_mm_extract_epi16(p_vec1,7);
		}
	}
;
	template<
	>
	struct hadd_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::base_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_vec1,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			  return _mm_extract_epi8(p_vec1,0)+_mm_extract_epi8(p_vec1,1)+_mm_extract_epi8(p_vec1,2)+_mm_extract_epi8(p_vec1,3)
         +_mm_extract_epi8(p_vec1,4)+_mm_extract_epi8(p_vec1,5)+_mm_extract_epi8(p_vec1,6)+_mm_extract_epi8(p_vec1,7)+
         _mm_extract_epi8(p_vec1,8)+_mm_extract_epi8(p_vec1,9)+_mm_extract_epi8(p_vec1,10)+_mm_extract_epi8(p_vec1,11)
         +_mm_extract_epi8(p_vec1,12)+_mm_extract_epi8(p_vec1,13)+_mm_extract_epi8(p_vec1,14)+_mm_extract_epi8(p_vec1,15);
		}
	}
;
	template<
	>
	struct mul_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_mullox_epi64(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct mul_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_mul_epu32(p_vec1 , p_vec2);
		}
	}
;
	template<
	>
	struct mul_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_mullo_epi16(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct mul_t <avx512<v512<float>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::vector_t apply (
			 typename avx512<v512<float>>::vector_t const & p_vec1,
			 typename avx512<v512<float>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_mul_ps(p_vec1, p_vec2);
		}
	}
;
	template<
	>
	struct mul_t <avx512<v512<double>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::vector_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_mul_pd(p_vec1 , p_vec2);
		}
	}
;
template<
	>
	struct mul_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::vector_t apply (
			 typename avx512<v512<double>>::vector_t const & p_vec1,
			 typename avx512<v512<double>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_mul_pd(p_vec1 , p_vec2);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_slli_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_slli_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_slli_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m128i ff = _mm_set1_epi16(0xFF00);
    __m128i v1 = _mm_and_si128(p_data, ff);
    __m128i v2 = _mm_and_si128(ff, _mm_slli_epi16(p_data, 8 + p_distance));

    v1 = _mm_slli_epi16(v1, p_distance);
    v2 = _mm_srli_epi16(v2, 8);

    return (_mm_or_si128(v1,v2)); // could be that this op must be an and.
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_slli_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_slli_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_slli_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m256i ff = _mm256_set1_epi16(0xFF00);
    __m256i v1 = _mm256_and_si256(p_data, ff);
    __m256i v2 = _mm256_and_si256(ff, _mm256_slli_epi16(p_data, 8 + p_distance));

    v1 = _mm256_slli_epi16(v1, p_distance);
    v2 = _mm256_srli_epi16(v2, 8);

    return (_mm256_or_si256(v1,v2)); // could be that this op must be an and.
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_slli_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_slli_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_slli_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m512i ff = _mm512_set1_epi16(0xFF00);
    __m512i v1 = _mm512_and_si512(p_data, ff);
    __m512i v2 = _mm512_and_si512(ff, _mm512_slli_epi16(p_data, 8 + p_distance));

    v1 = _mm512_slli_epi16(v1, p_distance);
    v2 = _mm512_srli_epi16(v2, 8);

    return (_mm512_or_si512(v1,v2)); // could be that this op must be an and.
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_data,
			 typename avx512<v128<uint64_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_sllv_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_data,
			 typename avx512<v128<uint32_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_sllv_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_data,
			 typename avx512<v128<uint16_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_sllv_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_data,
			 typename avx512<v128<uint8_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			uint8_t distance0 = _mm_extract_epi8(p_distance, 0);
    uint8_t distance1 = _mm_extract_epi8(p_distance, 1);
    uint8_t distance2 = _mm_extract_epi8(p_distance, 2);
    uint8_t distance3 = _mm_extract_epi8(p_distance, 3);
    uint8_t distance4 = _mm_extract_epi8(p_distance, 4);
    uint8_t distance5 = _mm_extract_epi8(p_distance, 5);
    uint8_t distance6 = _mm_extract_epi8(p_distance, 6);
    uint8_t distance7 = _mm_extract_epi8(p_distance, 7);
    uint8_t distance8 = _mm_extract_epi8(p_distance, 8);
    uint8_t distance9 = _mm_extract_epi8(p_distance, 9);
    uint8_t distance10 = _mm_extract_epi8(p_distance, 10);
    uint8_t distance11 = _mm_extract_epi8(p_distance, 11);
    uint8_t distance12 = _mm_extract_epi8(p_distance, 12);
    uint8_t distance13 = _mm_extract_epi8(p_distance, 13);
    uint8_t distance14 = _mm_extract_epi8(p_distance, 14);
    uint8_t distance15 = _mm_extract_epi8(p_distance, 15);
    return _mm_set_epi8(
            (distance15 == 8) ? 0 : (_mm_extract_epi8(p_data, 15) << distance15),
            (distance14 == 8) ? 0 : (_mm_extract_epi8(p_data, 14) << distance14),
            (distance13 == 8) ? 0 : (_mm_extract_epi8(p_data, 13) << distance13),
            (distance12 == 8) ? 0 : (_mm_extract_epi8(p_data, 12) << distance12),
            (distance11 == 8) ? 0 : (_mm_extract_epi8(p_data, 11) << distance11),
            (distance10 == 8) ? 0 : (_mm_extract_epi8(p_data, 10) << distance10),
            (distance9 == 8) ? 0 : (_mm_extract_epi8(p_data, 9) << distance9),
            (distance8 == 8) ? 0 : (_mm_extract_epi8(p_data, 8) << distance8),
            (distance7 == 8) ? 0 : (_mm_extract_epi8(p_data, 7) << distance7),
            (distance6 == 8) ? 0 : (_mm_extract_epi8(p_data, 6) << distance6),
            (distance5 == 8) ? 0 : (_mm_extract_epi8(p_data, 5) << distance5),
            (distance4 == 8) ? 0 : (_mm_extract_epi8(p_data, 4) << distance4),
            (distance3 == 8) ? 0 : (_mm_extract_epi8(p_data, 3) << distance3),
            (distance2 == 8) ? 0 : (_mm_extract_epi8(p_data, 2) << distance2),
            (distance1 == 8) ? 0 : (_mm_extract_epi8(p_data, 1) << distance1),
            (distance0 == 8) ? 0 : (_mm_extract_epi8(p_data, 0) << distance0)

    );
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_data,
			 typename avx512<v256<uint64_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_sllv_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_data,
			 typename avx512<v256<uint32_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_sllv_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_data,
			 typename avx512<v256<uint16_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_sllv_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_data,
			 typename avx512<v256<uint8_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			uint8_t distance0 = _mm256_extract_epi8(p_distance, 0);
    uint8_t distance1 = _mm256_extract_epi8(p_distance, 1);
    uint8_t distance2 = _mm256_extract_epi8(p_distance, 2);
    uint8_t distance3 = _mm256_extract_epi8(p_distance, 3);
    uint8_t distance4 = _mm256_extract_epi8(p_distance, 4);
    uint8_t distance5 = _mm256_extract_epi8(p_distance, 5);
    uint8_t distance6 = _mm256_extract_epi8(p_distance, 6);
    uint8_t distance7 = _mm256_extract_epi8(p_distance, 7);
    uint8_t distance8 = _mm256_extract_epi8(p_distance, 8);
    uint8_t distance9 = _mm256_extract_epi8(p_distance, 9);
    uint8_t distance10 = _mm256_extract_epi8(p_distance, 10);
    uint8_t distance11 = _mm256_extract_epi8(p_distance, 11);
    uint8_t distance12 = _mm256_extract_epi8(p_distance, 12);
    uint8_t distance13 = _mm256_extract_epi8(p_distance, 13);
    uint8_t distance14 = _mm256_extract_epi8(p_distance, 14);
    uint8_t distance15 = _mm256_extract_epi8(p_distance, 15);
    uint8_t distance16 = _mm256_extract_epi8(p_distance, 16);
    uint8_t distance17 = _mm256_extract_epi8(p_distance, 17);
    uint8_t distance18 = _mm256_extract_epi8(p_distance, 18);
    uint8_t distance19 = _mm256_extract_epi8(p_distance, 19);
    uint8_t distance20 = _mm256_extract_epi8(p_distance, 20);
    uint8_t distance21 = _mm256_extract_epi8(p_distance, 21);
    uint8_t distance22 = _mm256_extract_epi8(p_distance, 22);
    uint8_t distance23 = _mm256_extract_epi8(p_distance, 23);
    uint8_t distance24 = _mm256_extract_epi8(p_distance, 24);
    uint8_t distance25 = _mm256_extract_epi8(p_distance, 25);
    uint8_t distance26 = _mm256_extract_epi8(p_distance, 26);
    uint8_t distance27 = _mm256_extract_epi8(p_distance, 27);
    uint8_t distance28 = _mm256_extract_epi8(p_distance, 28);
    uint8_t distance29 = _mm256_extract_epi8(p_distance, 29);
    uint8_t distance30 = _mm256_extract_epi8(p_distance, 30);
    uint8_t distance31 = _mm256_extract_epi8(p_distance, 31);
    return _mm256_set_epi8(
            (distance31 == 8) ? 0 : (_mm256_extract_epi8(p_data, 31) << distance31),
            (distance30 == 8) ? 0 : (_mm256_extract_epi8(p_data, 30) << distance30),
            (distance29 == 8) ? 0 : (_mm256_extract_epi8(p_data, 29) << distance29),
            (distance28 == 8) ? 0 : (_mm256_extract_epi8(p_data, 28) << distance28),
            (distance27 == 8) ? 0 : (_mm256_extract_epi8(p_data, 27) << distance27),
            (distance26 == 8) ? 0 : (_mm256_extract_epi8(p_data, 26) << distance26),
            (distance25 == 8) ? 0 : (_mm256_extract_epi8(p_data, 25) << distance25),
            (distance24 == 8) ? 0 : (_mm256_extract_epi8(p_data, 24) << distance24),
            (distance23 == 8) ? 0 : (_mm256_extract_epi8(p_data, 23) << distance23),
            (distance22 == 8) ? 0 : (_mm256_extract_epi8(p_data, 22) << distance22),
            (distance21 == 8) ? 0 : (_mm256_extract_epi8(p_data, 21) << distance21),
            (distance20 == 8) ? 0 : (_mm256_extract_epi8(p_data, 20) << distance20),
            (distance19 == 8) ? 0 : (_mm256_extract_epi8(p_data, 19) << distance19),
            (distance18 == 8) ? 0 : (_mm256_extract_epi8(p_data, 18) << distance18),
            (distance17 == 8) ? 0 : (_mm256_extract_epi8(p_data, 17) << distance17),
            (distance16 == 8) ? 0 : (_mm256_extract_epi8(p_data, 16) << distance16),
            (distance15 == 8) ? 0 : (_mm256_extract_epi8(p_data, 15) << distance15),
            (distance14 == 8) ? 0 : (_mm256_extract_epi8(p_data, 14) << distance14),
            (distance13 == 8) ? 0 : (_mm256_extract_epi8(p_data, 13) << distance13),
            (distance12 == 8) ? 0 : (_mm256_extract_epi8(p_data, 12) << distance12),
            (distance11 == 8) ? 0 : (_mm256_extract_epi8(p_data, 11) << distance11),
            (distance10 == 8) ? 0 : (_mm256_extract_epi8(p_data, 10) << distance10),
            (distance9 == 8) ? 0 : (_mm256_extract_epi8(p_data, 9) << distance9),
            (distance8 == 8) ? 0 : (_mm256_extract_epi8(p_data, 8) << distance8),
            (distance7 == 8) ? 0 : (_mm256_extract_epi8(p_data, 7) << distance7),
            (distance6 == 8) ? 0 : (_mm256_extract_epi8(p_data, 6) << distance6),
            (distance5 == 8) ? 0 : (_mm256_extract_epi8(p_data, 5) << distance5),
            (distance4 == 8) ? 0 : (_mm256_extract_epi8(p_data, 4) << distance4),
            (distance3 == 8) ? 0 : (_mm256_extract_epi8(p_data, 3) << distance3),
            (distance2 == 8) ? 0 : (_mm256_extract_epi8(p_data, 2) << distance2),
            (distance1 == 8) ? 0 : (_mm256_extract_epi8(p_data, 1) << distance1),
            (distance0 == 8) ? 0 : (_mm256_extract_epi8(p_data, 0) << distance0)
    );
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_data,
			 typename avx512<v512<uint64_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_sllv_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_data,
			 typename avx512<v512<uint32_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_sllv_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_data,
			 typename avx512<v512<uint16_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_sllv_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_left_individual_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_data,
			 typename avx512<v512<uint8_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m512i ff = _mm512_set1_epi16(0xFF);
    __m512i v1 = _mm512_and_si512(p_data, ff);
    __m512i v2 = _mm512_and_si512(_mm512_srli_epi16(p_data, 8), ff);
    __m512i p1 = _mm512_and_si512(p_distance, ff);
    __m512i p2 = _mm512_and_si512(_mm512_srli_epi16(p_distance, 8), ff);

    v1 = _mm512_and_si512(_mm512_sllv_epi16(v1, p1), ff);
    v2 = _mm512_slli_epi16(_mm512_and_si512(_mm512_sllv_epi16(v2, p2), ff), 8);
    return _mm512_or_si512(v1, v2);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_srli_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_srli_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_srli_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m128i ff = _mm_set1_epi16(0xFF);
    __m128i v1 = _mm_and_si128(p_data, ff);
    __m128i v2 = _mm_and_si128(_mm_srli_epi16(p_data, 8 + p_distance),ff);
    v1 = _mm_srli_epi16(v1, p_distance);
    v2 = _mm_slli_epi16(v2, 8);
    return (_mm_or_si128(v1,v2)); // could be that this op must be an and.
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_srli_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_slli_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_slli_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m256i ff = _mm256_set1_epi16(0xFF);
    __m256i v1 = _mm256_and_si256(p_data, ff);
    __m256i v2 = _mm256_and_si256(_mm256_srli_epi16(p_data, 8 + p_distance),ff);
    v1 = _mm256_srli_epi16(v1, p_distance);
    v2 = _mm256_slli_epi16(v2, 8);
    return (_mm256_or_si256(v1,v2)); // could be that this op must be an and.
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_srli_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_srli_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_srli_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_data,
			 int const & p_distance,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m512i ff = _mm512_set1_epi16(0xFF);
    __m512i v1 = _mm512_and_si512(p_data, ff);
    __m512i v2 = _mm512_and_si512(_mm512_srli_epi16(p_data, 8 + p_distance),ff);

    v1 = _mm512_srli_epi16(v1, p_distance);
    v2 = _mm512_slli_epi16(v2, 8);

    return (_mm512_and_si512(v1,v2));
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::vector_t const & p_data,
			 typename avx512<v128<uint64_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_srlv_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::vector_t const & p_data,
			 typename avx512<v128<uint32_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_srlv_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::vector_t const & p_data,
			 typename avx512<v128<uint16_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_srlv_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::vector_t const & p_data,
			 typename avx512<v128<uint8_t>>::vector_t const & p_distance,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			uint8_t distance0 = _mm_extract_epi8(p_distance, 0);
    uint8_t distance1 = _mm_extract_epi8(p_distance, 1);
    uint8_t distance2 = _mm_extract_epi8(p_distance, 2);
    uint8_t distance3 = _mm_extract_epi8(p_distance, 3);
    uint8_t distance4 = _mm_extract_epi8(p_distance, 4);
    uint8_t distance5 = _mm_extract_epi8(p_distance, 5);
    uint8_t distance6 = _mm_extract_epi8(p_distance, 6);
    uint8_t distance7 = _mm_extract_epi8(p_distance, 7);
    uint8_t distance8 = _mm_extract_epi8(p_distance, 8);
    uint8_t distance9 = _mm_extract_epi8(p_distance, 9);
    uint8_t distance10 = _mm_extract_epi8(p_distance, 10);
    uint8_t distance11 = _mm_extract_epi8(p_distance, 11);
    uint8_t distance12 = _mm_extract_epi8(p_distance, 12);
    uint8_t distance13 = _mm_extract_epi8(p_distance, 13);
    uint8_t distance14 = _mm_extract_epi8(p_distance, 14);
    uint8_t distance15 = _mm_extract_epi8(p_distance, 15);
    return _mm_set_epi8(
            (distance15 == 8) ? 0 : (_mm_extract_epi8(p_data, 15) >> distance15),
            (distance14 == 8) ? 0 : (_mm_extract_epi8(p_data, 14) >> distance14),
            (distance13 == 8) ? 0 : (_mm_extract_epi8(p_data, 13) >> distance13),
            (distance12 == 8) ? 0 : (_mm_extract_epi8(p_data, 12) >> distance12),
            (distance11 == 8) ? 0 : (_mm_extract_epi8(p_data, 11) >> distance11),
            (distance10 == 8) ? 0 : (_mm_extract_epi8(p_data, 10) >> distance10),
            (distance9 == 8) ? 0 : (_mm_extract_epi8(p_data, 9) >> distance9),
            (distance8 == 8) ? 0 : (_mm_extract_epi8(p_data, 8) >> distance8),
            (distance7 == 8) ? 0 : (_mm_extract_epi8(p_data, 7) >> distance7),
            (distance6 == 8) ? 0 : (_mm_extract_epi8(p_data, 6) >> distance6),
            (distance5 == 8) ? 0 : (_mm_extract_epi8(p_data, 5) >> distance5),
            (distance4 == 8) ? 0 : (_mm_extract_epi8(p_data, 4) >> distance4),
            (distance3 == 8) ? 0 : (_mm_extract_epi8(p_data, 3) >> distance3),
            (distance2 == 8) ? 0 : (_mm_extract_epi8(p_data, 2) >> distance2),
            (distance1 == 8) ? 0 : (_mm_extract_epi8(p_data, 1) >> distance1),
            (distance0 == 8) ? 0 : (_mm_extract_epi8(p_data, 0) >> distance0)

    );
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::vector_t const & p_data,
			 typename avx512<v256<uint64_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_srlv_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::vector_t const & p_data,
			 typename avx512<v256<uint32_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_srlv_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::vector_t const & p_data,
			 typename avx512<v256<uint16_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_srlv_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::vector_t const & p_data,
			 typename avx512<v256<uint8_t>>::vector_t const & p_distance,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			uint8_t distance0 = _mm256_extract_epi8(p_distance, 0);
    uint8_t distance1 = _mm256_extract_epi8(p_distance, 1);
    uint8_t distance2 = _mm256_extract_epi8(p_distance, 2);
    uint8_t distance3 = _mm256_extract_epi8(p_distance, 3);
    uint8_t distance4 = _mm256_extract_epi8(p_distance, 4);
    uint8_t distance5 = _mm256_extract_epi8(p_distance, 5);
    uint8_t distance6 = _mm256_extract_epi8(p_distance, 6);
    uint8_t distance7 = _mm256_extract_epi8(p_distance, 7);
    uint8_t distance8 = _mm256_extract_epi8(p_distance, 8);
    uint8_t distance9 = _mm256_extract_epi8(p_distance, 9);
    uint8_t distance10 = _mm256_extract_epi8(p_distance, 10);
    uint8_t distance11 = _mm256_extract_epi8(p_distance, 11);
    uint8_t distance12 = _mm256_extract_epi8(p_distance, 12);
    uint8_t distance13 = _mm256_extract_epi8(p_distance, 13);
    uint8_t distance14 = _mm256_extract_epi8(p_distance, 14);
    uint8_t distance15 = _mm256_extract_epi8(p_distance, 15);
    uint8_t distance16 = _mm256_extract_epi8(p_distance, 16);
    uint8_t distance17 = _mm256_extract_epi8(p_distance, 17);
    uint8_t distance18 = _mm256_extract_epi8(p_distance, 18);
    uint8_t distance19 = _mm256_extract_epi8(p_distance, 19);
    uint8_t distance20 = _mm256_extract_epi8(p_distance, 20);
    uint8_t distance21 = _mm256_extract_epi8(p_distance, 21);
    uint8_t distance22 = _mm256_extract_epi8(p_distance, 22);
    uint8_t distance23 = _mm256_extract_epi8(p_distance, 23);
    uint8_t distance24 = _mm256_extract_epi8(p_distance, 24);
    uint8_t distance25 = _mm256_extract_epi8(p_distance, 25);
    uint8_t distance26 = _mm256_extract_epi8(p_distance, 26);
    uint8_t distance27 = _mm256_extract_epi8(p_distance, 27);
    uint8_t distance28 = _mm256_extract_epi8(p_distance, 28);
    uint8_t distance29 = _mm256_extract_epi8(p_distance, 29);
    uint8_t distance30 = _mm256_extract_epi8(p_distance, 30);
    uint8_t distance31 = _mm256_extract_epi8(p_distance, 31);
    return _mm256_set_epi8(
            (distance31 == 8) ? 0 : (_mm256_extract_epi8(p_data, 31) >> distance31),
            (distance30 == 8) ? 0 : (_mm256_extract_epi8(p_data, 30) >> distance30),
            (distance29 == 8) ? 0 : (_mm256_extract_epi8(p_data, 29) >> distance29),
            (distance28 == 8) ? 0 : (_mm256_extract_epi8(p_data, 28) >> distance28),
            (distance27 == 8) ? 0 : (_mm256_extract_epi8(p_data, 27) >> distance27),
            (distance26 == 8) ? 0 : (_mm256_extract_epi8(p_data, 26) >> distance26),
            (distance25 == 8) ? 0 : (_mm256_extract_epi8(p_data, 25) >> distance25),
            (distance24 == 8) ? 0 : (_mm256_extract_epi8(p_data, 24) >> distance24),
            (distance23 == 8) ? 0 : (_mm256_extract_epi8(p_data, 23) >> distance23),
            (distance22 == 8) ? 0 : (_mm256_extract_epi8(p_data, 22) >> distance22),
            (distance21 == 8) ? 0 : (_mm256_extract_epi8(p_data, 21) >> distance21),
            (distance20 == 8) ? 0 : (_mm256_extract_epi8(p_data, 20) >> distance20),
            (distance19 == 8) ? 0 : (_mm256_extract_epi8(p_data, 19) >> distance19),
            (distance18 == 8) ? 0 : (_mm256_extract_epi8(p_data, 18) >> distance18),
            (distance17 == 8) ? 0 : (_mm256_extract_epi8(p_data, 17) >> distance17),
            (distance16 == 8) ? 0 : (_mm256_extract_epi8(p_data, 16) >> distance16),
            (distance15 == 8) ? 0 : (_mm256_extract_epi8(p_data, 15) >> distance15),
            (distance14 == 8) ? 0 : (_mm256_extract_epi8(p_data, 14) >> distance14),
            (distance13 == 8) ? 0 : (_mm256_extract_epi8(p_data, 13) >> distance13),
            (distance12 == 8) ? 0 : (_mm256_extract_epi8(p_data, 12) >> distance12),
            (distance11 == 8) ? 0 : (_mm256_extract_epi8(p_data, 11) >> distance11),
            (distance10 == 8) ? 0 : (_mm256_extract_epi8(p_data, 10) >> distance10),
            (distance9 == 8) ? 0 : (_mm256_extract_epi8(p_data, 9) >> distance9),
            (distance8 == 8) ? 0 : (_mm256_extract_epi8(p_data, 8) >> distance8),
            (distance7 == 8) ? 0 : (_mm256_extract_epi8(p_data, 7) >> distance7),
            (distance6 == 8) ? 0 : (_mm256_extract_epi8(p_data, 6) >> distance6),
            (distance5 == 8) ? 0 : (_mm256_extract_epi8(p_data, 5) >> distance5),
            (distance4 == 8) ? 0 : (_mm256_extract_epi8(p_data, 4) >> distance4),
            (distance3 == 8) ? 0 : (_mm256_extract_epi8(p_data, 3) >> distance3),
            (distance2 == 8) ? 0 : (_mm256_extract_epi8(p_data, 2) >> distance2),
            (distance1 == 8) ? 0 : (_mm256_extract_epi8(p_data, 1) >> distance1),
            (distance0 == 8) ? 0 : (_mm256_extract_epi8(p_data, 0) >> distance0)
    );
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_data,
			 typename avx512<v512<uint64_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_srlv_epi64(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::vector_t const & p_data,
			 typename avx512<v512<uint32_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_srlv_epi32(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::vector_t const & p_data,
			 typename avx512<v512<uint16_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_srlv_epi16(p_data, p_distance);
		}
	}
;
	template<
	>
	struct shift_right_individual_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::vector_t const & p_data,
			 typename avx512<v512<uint8_t>>::vector_t const & p_distance,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			__m512i ff = _mm512_set1_epi16(0xFF);
    __m512i v1 = _mm512_and_si512(p_data, ff);
    __m512i v2 = _mm512_srli_epi16(p_data, 8);
    __m512i p1 = _mm512_and_si512(p_distance, ff);
    __m512i p2 = _mm512_srli_epi16(p_distance, 8);
    v1 = _mm512_srlv_epi16(v1, p1);
    v2 = _mm512_slli_epi16(_mm512_srlv_epi16(v2, p2), 8);
    return _mm512_or_si512(v1, v2);
		}
	}
;
	template<
	>
	struct mod_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec1,
			 typename avx512<v512<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			 __m512d divhelper = _mm512_set1_pd(0x0010000000000000);
         __m512d intermediate =
            _mm512_add_pd(
               _mm512_floor_pd(
                  _mm512_div_pd(
                     _mm512_castsi512_pd(p_vec1),
                     _mm512_castsi512_pd(p_vec2)
                  )
               ),
               divhelper
            );
         return
            _mm512_sub_epi64(
               p_vec1,
               _mm512_mul_epi32(
                  _mm512_xor_si512(
                     _mm512_castpd_si512(intermediate),
                     _mm512_castpd_si512(divhelper)
                  ),
                  p_vec2
               )
            );
		}
	}
;
	template<
	>
	struct shift_left_mask_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::mask_t apply (
			 typename avx512<v128<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_mask << 1);
		}
	}
;
	template<
	>
	struct shift_left_mask_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::mask_t apply (
			 typename avx512<v256<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_mask << 1);
		}
	}
;
	template<
	>
	struct shift_left_mask_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::mask_t apply (
			 typename avx512<v512<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return (p_mask << 1);
		}
	}
;
}
#endif
