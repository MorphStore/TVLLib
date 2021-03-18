#ifndef create_avx512_H
#define create_avx512_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx512.h"
#include "../../primitives/create.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct set1_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::base_t value,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi64x(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::base_t value,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi32(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::base_t value,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi16(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::base_t value,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_epi8(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::vector_t apply (
			 typename avx512<v128<float>>::base_t value,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_ps(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::vector_t apply (
			 typename avx512<v128<double>>::base_t value,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_set1_pd(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::base_t value,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set1_epi64x(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::base_t value,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set1_epi32(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::base_t value,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set1_epi16(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::base_t value,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set1_epi8(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::vector_t apply (
			 typename avx512<v256<float>>::base_t value,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_set1_ps(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::vector_t apply (
			 typename avx512<v256<double>>::base_t value,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_set1_pd(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::base_t value,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set1_epi64(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::base_t value,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set1_epi32(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::base_t value,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set1_epi16(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::base_t value,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set1_epi8(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::vector_t apply (
			 typename avx512<v512<float>>::base_t value,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_set1_ps(value);
		}
	}
;
	template<
	>
	struct set1_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::vector_t apply (
			 typename avx512<v512<double>>::base_t value,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_set1_pd(value);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::vector_t apply (
			 typename avx512<v128<uint64_t>>::base_t a,
			 typename avx512<v128<uint64_t>>::base_t b,
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi64x(a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::vector_t apply (
			 typename avx512<v128<uint32_t>>::base_t a,
			 typename avx512<v128<uint32_t>>::base_t b,
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi32(a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::vector_t apply (
			 typename avx512<v128<uint16_t>>::base_t a,
			 typename avx512<v128<uint16_t>>::base_t b,
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi16(a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::vector_t apply (
			 typename avx512<v128<uint8_t>>::base_t a,
			 typename avx512<v128<uint8_t>>::base_t b,
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi8(a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::vector_t apply (
			 typename avx512<v128<float>>::base_t a,
			 typename avx512<v128<float>>::base_t b,
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_set_ps(a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::vector_t apply (
			 typename avx512<v128<double>>::base_t a,
			 typename avx512<v128<double>>::base_t b,
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_set_pd(a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::vector_t apply (
			 typename avx512<v256<uint64_t>>::base_t a,
			 typename avx512<v256<uint64_t>>::base_t b,
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set_epi64x(a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::vector_t apply (
			 typename avx512<v256<uint32_t>>::base_t a,
			 typename avx512<v256<uint32_t>>::base_t b,
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set_epi32(a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::vector_t apply (
			 typename avx512<v256<uint16_t>>::base_t a,
			 typename avx512<v256<uint16_t>>::base_t b,
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set_epi16(a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b, a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::vector_t apply (
			 typename avx512<v256<uint8_t>>::base_t a,
			 typename avx512<v256<uint8_t>>::base_t b,
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_set_epi8(a+31*b,a+30*b,a+29*b,a+28*b,a+27*b,a+26*b,a+25*b,a+24*b,a+23*b,a+22*b,a+21*b,a+20*b,a+19*b,a+18*b,a+17*b,a+16*b,a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::vector_t apply (
			 typename avx512<v256<float>>::base_t a,
			 typename avx512<v256<float>>::base_t b,
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_set_ps(a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::vector_t apply (
			 typename avx512<v256<double>>::base_t a,
			 typename avx512<v256<double>>::base_t b,
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_set_pd(a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::vector_t apply (
			 typename avx512<v512<uint64_t>>::base_t a,
			 typename avx512<v512<uint64_t>>::base_t b,
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set_epi64(a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::vector_t apply (
			 typename avx512<v512<uint32_t>>::base_t a,
			 typename avx512<v512<uint32_t>>::base_t b,
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set_epi32(a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::vector_t apply (
			 typename avx512<v512<uint16_t>>::base_t a,
			 typename avx512<v512<uint16_t>>::base_t b,
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set_epi16(a+31*b,a+30*b,a+29*b,a+28*b,a+27*b,a+26*b,a+25*b,a+24*b,a+23*b,a+22*b,a+21*b,a+20*b,a+19*b,a+18*b,a+17*b,a+16*b,a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::vector_t apply (
			 typename avx512<v512<uint8_t>>::base_t a,
			 typename avx512<v512<uint8_t>>::base_t b,
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm512_set_epi8(a+63*b,a+62*b,a+61*b,a+60*b,a+59*b,a+58*b,a+57*b,a+56*b,a+55*b,a+54*b,a+53*b,a+52*b,a+51*b,a+50*b,a+49*b,a+48*b,a+47*b,a+46*b,a+45*b,a+44*b,a+43*b,a+42*b,a+41*b,a+40*b,a+39*b,a+38*b,a+37*b,a+36*b,a+35*b,a+34*b,a+33*b,a+32*b,a+31*b,a+30*b,a+29*b,a+28*b,a+27*b,a+26*b,a+25*b,a+24*b,a+23*b,a+22*b,a+21*b,a+20*b,a+19*b,a+18*b,a+17*b,a+16*b,a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::vector_t apply (
			 typename avx512<v512<float>>::base_t a,
			 typename avx512<v512<float>>::base_t b,
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return _mm512_set_ps(a+15*b,a+14*b,a+13*b,a+12*b,a+11*b,a+10*b,a+9*b,a+8*b,a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct set_sequence_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::vector_t apply (
			 typename avx512<v512<double>>::base_t a,
			 typename avx512<v512<double>>::base_t b,
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return _mm512_set_pd(a+7*b,a+6*b,a+5*b,a+4*b,a+3*b,a+2*b,a+b,a);
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint64_t>>::mask_t apply (
			 int element_count = avx512<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint32_t>>::mask_t apply (
			 int element_count = avx512<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint16_t>>::mask_t apply (
			 int element_count = avx512<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<uint8_t>>::mask_t apply (
			 int element_count = avx512<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<float>>::mask_t apply (
			 int element_count = avx512<v128<float>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v128<double>>::mask_t apply (
			 int element_count = avx512<v128<double>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint64_t>>::mask_t apply (
			 int element_count = avx512<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint32_t>>::mask_t apply (
			 int element_count = avx512<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint16_t>>::mask_t apply (
			 int element_count = avx512<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<uint8_t>>::mask_t apply (
			 int element_count = avx512<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<float>>::mask_t apply (
			 int element_count = avx512<v256<float>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v256<double>>::mask_t apply (
			 int element_count = avx512<v256<double>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v512<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint64_t>>::mask_t apply (
			 int element_count = avx512<v512<uint64_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v512<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint32_t>>::mask_t apply (
			 int element_count = avx512<v512<uint32_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v512<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint16_t>>::mask_t apply (
			 int element_count = avx512<v512<uint16_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v512<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<uint8_t>>::mask_t apply (
			 int element_count = avx512<v512<uint8_t>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v512<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<float>>::mask_t apply (
			 int element_count = avx512<v512<float>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
	template<
	>
	struct init_mask_t <avx512<v512<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx512<v512<double>>::mask_t apply (
			 int element_count = avx512<v512<double>>::vector_helper_t::element_count::value)
		{
			return 0;
		}
	}
;
}
#endif
