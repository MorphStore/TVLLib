#ifndef compare_sse_H
#define compare_sse_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_sse.h"
#include "../../primitives/compare.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct equal_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 typename sse<v128<uint64_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_pd(
          _mm_castsi128_pd(
             _mm_cmpeq_epi64(p_vec1, p_vec2)
          )
      );
		}
	}
;
	template<
	>
	struct equal_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::mask_t apply (
			 typename sse<v128<uint32_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_ps(
          _mm_castsi128_ps(
             _mm_cmpeq_epi32(p_vec1, p_vec2)
          )
       );
		}
	}
;
	template<
	>
	struct equal_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::mask_t apply (
			 typename sse<v128<uint16_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m128i res = _mm_cmpeq_epi16(p_vec1, p_vec2);
     res = _mm_shuffle_epi32(res, 0b11011000);
     res = _mm_shufflehi_epi16(res, 0b11011000);
     res = _mm_shufflelo_epi16(res, 0b11011000);
     uint16_t a = _mm_movemask_ps(
                    _mm_castsi128_ps(
                       _mm_slli_epi32(res, 16)
                    )
                 );
     uint16_t b = _mm_movemask_ps(
                    _mm_castsi128_ps(res)
                  );
     return (b<<4) | a;
		}
	}
;
	template<
	>
	struct equal_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::mask_t apply (
			 typename sse<v128<uint8_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8( _mm_cmpeq_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct equal_t <sse<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<float>>::mask_t apply (
			 typename sse<v128<float>>::vector_t const & p_vec1,
			 typename sse<v128<float>>::vector_t const & p_vec2,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmpeq_ps(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct equal_t <sse<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<double>>::mask_t apply (
			 typename sse<v128<double>>::vector_t const & p_vec1,
			 typename sse<v128<double>>::vector_t const & p_vec2,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmpeq_pd(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct less_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 typename sse<v128<uint64_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_pd(
          _mm_castsi128_pd(
             _mm_cmpgt_epi64(p_vec2, p_vec1)
          )
      );
		}
	}
;
	template<
	>
	struct less_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::mask_t apply (
			 typename sse<v128<uint32_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_ps(
          _mm_castsi128_ps(
             _mm_cmplt_epi32(p_vec1, p_vec2)
          )
       );
		}
	}
;
	template<
	>
	struct less_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::mask_t apply (
			 typename sse<v128<uint16_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m128i res = _mm_cmplt_epi16(p_vec1, p_vec2);
     res = _mm_shuffle_epi32(res, 0b11011000);
     res = _mm_shufflehi_epi16(res, 0b11011000);
     res = _mm_shufflelo_epi16(res, 0b11011000);
     uint16_t a = _mm_movemask_ps(
                    _mm_castsi128_ps(
                       _mm_slli_epi32(res, 16)
                    )
                 );
     uint16_t b = _mm_movemask_ps(
                    _mm_castsi128_ps(res)
                 );
     return (b<<4) | a;
		}
	}
;
	template<
	>
	struct less_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::mask_t apply (
			 typename sse<v128<uint8_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8( _mm_cmplt_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct less_t <sse<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<float>>::mask_t apply (
			 typename sse<v128<float>>::vector_t const & p_vec1,
			 typename sse<v128<float>>::vector_t const & p_vec2,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmplt_ps(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct less_t <sse<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<double>>::mask_t apply (
			 typename sse<v128<double>>::vector_t const & p_vec1,
			 typename sse<v128<double>>::vector_t const & p_vec2,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmplt_pd(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct greater_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 typename sse<v128<uint64_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_pd(
          _mm_castsi128_pd(
             _mm_cmpgt_epi64(p_vec1, p_vec2)
          )
      );
		}
	}
;
	template<
	>
	struct greater_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::mask_t apply (
			 typename sse<v128<uint32_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_ps(
          _mm_castsi128_ps(
             _mm_cmpgt_epi32(p_vec1, p_vec2)
          )
       );
		}
	}
;
	template<
	>
	struct greater_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::mask_t apply (
			 typename sse<v128<uint16_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m128i res = _mm_cmpgt_epi16(p_vec1, p_vec2);
     res = _mm_shuffle_epi32(res, 0b11011000);
     res = _mm_shufflehi_epi16(res, 0b11011000);
     res = _mm_shufflelo_epi16(res, 0b11011000);
     uint16_t a = _mm_movemask_ps(
                    _mm_castsi128_ps(
                       _mm_slli_epi32(res, 16)
                    )
                 );
     uint16_t b = _mm_movemask_ps(
                    _mm_castsi128_ps(res)
                 );
     return (b<<4) | a;
		}
	}
;
	template<
	>
	struct greater_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::mask_t apply (
			 typename sse<v128<uint8_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8( _mm_cmpgt_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct greater_t <sse<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<float>>::mask_t apply (
			 typename sse<v128<float>>::vector_t const & p_vec1,
			 typename sse<v128<float>>::vector_t const & p_vec2,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmpgt_ps(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct greater_t <sse<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<double>>::mask_t apply (
			 typename sse<v128<double>>::vector_t const & p_vec1,
			 typename sse<v128<double>>::vector_t const & p_vec2,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmpgt_pd(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct count_matches_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint64_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint32_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint16_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint8_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <sse<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<float>>::mask_t const & p_mask,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <sse<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<double>>::mask_t const & p_mask,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct is_zero_t < sse<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename sse<v128<uint64_t>>::mask_t p_mask,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < sse<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename sse<v128<uint32_t>>::mask_t p_mask,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < sse<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename sse<v128<uint16_t>>::mask_t p_mask,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < sse<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename sse<v128<uint8_t>>::mask_t p_mask,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct greaterequal_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 typename sse<v128<uint64_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_pd(
          _mm_castsi128_pd(
              _mm_or_si128(
                 _mm_cmpeq_epi64(p_vec1, p_vec2),
                 _mm_cmpgt_epi64(p_vec1, p_vec2)
              )
          )
      );
		}
	}
;
	template<
	>
	struct greaterequal_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::mask_t apply (
			 typename sse<v128<uint32_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_ps(
          _mm_castsi128_ps(
              _mm_or_si128(
                _mm_cmpeq_epi32(p_vec1, p_vec2),
                _mm_cmpgt_epi32(p_vec1, p_vec2)
             )
          )
       );
		}
	}
;
	template<
	>
	struct greaterequal_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::mask_t apply (
			 typename sse<v128<uint16_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m128i res = _mm_or_si128(
                     _mm_cmpeq_epi16(p_vec1, p_vec2),
                     _mm_cmpgt_epi16(p_vec1, p_vec2)
                  );
     res = _mm_shuffle_epi32(res, 0b11011000);
     res = _mm_shufflehi_epi16(res, 0b11011000);
     res = _mm_shufflelo_epi16(res, 0b11011000);
     uint16_t a = _mm_movemask_ps(
                    _mm_castsi128_ps(
                       _mm_slli_epi32(res, 16)
                    )
                 );
     uint16_t b = _mm_movemask_ps(
                    _mm_castsi128_ps(res)
                 );
     return (b<<4) | a;
		}
	}
;
	template<
	>
	struct greaterequal_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::mask_t apply (
			 typename sse<v128<uint8_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8(
              _mm_or_si128(
                _mm_cmpeq_epi8(p_vec1, p_vec2),
                _mm_cmpgt_epi8(p_vec1, p_vec2)
              )
            );
		}
	}
;
	template<
	>
	struct lessequal_t <sse<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::mask_t apply (
			 typename sse<v128<uint64_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_pd(
          _mm_castsi128_pd(
             _mm_or_si128(
                _mm_cmpeq_epi64(p_vec1, p_vec2),
                _mm_cmpgt_epi64(p_vec2, p_vec1)
             )
          )
      );
		}
	}
;
	template<
	>
	struct lessequal_t <sse<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::mask_t apply (
			 typename sse<v128<uint32_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm_movemask_ps(
          _mm_castsi128_ps(
            _mm_or_si128(
               _mm_cmpeq_epi32(p_vec1, p_vec2),
               _mm_cmpgt_epi32(p_vec2, p_vec1)
            )
          )
       );
		}
	}
;
	template<
	>
	struct lessequal_t <sse<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::mask_t apply (
			 typename sse<v128<uint16_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m128i res = _mm_or_si128(
       _mm_cmpeq_epi16(p_vec1, p_vec2),
       _mm_cmpgt_epi16(p_vec2, p_vec1)
    );
     res = _mm_shuffle_epi32(res, 0b11011000);
     res = _mm_shufflehi_epi16(res, 0b11011000);
     res = _mm_shufflelo_epi16(res, 0b11011000);
     uint16_t a = _mm_movemask_ps(
                    _mm_castsi128_ps(
                       _mm_slli_epi32(res, 16)
                    )
                 );
     uint16_t b = _mm_movemask_ps(
                    _mm_castsi128_ps(res)
                 );
     return (b<<4) | a;
		}
	}
;
	template<
	>
	struct lessequal_t <sse<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::mask_t apply (
			 typename sse<v128<uint8_t>>::vector_t const & p_vec1,
			 typename sse<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8(
          _mm_or_si128(
             _mm_cmpeq_epi8(p_vec1, p_vec2),
             _mm_cmpgt_epi8(p_vec2, p_vec1)
       )
    );
		}
	}
;
	template<
	>
	struct ctz_mask_t < sse<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint64_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < sse<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint32_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < sse<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint16_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < sse<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint8_t>>::mask_t const & p_mask,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < sse<v128<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<float>>::mask_t const & p_mask,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < sse<v128<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<double>>::mask_t const & p_mask,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct equal_mask_t < sse<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint64_t>>::mask_t const & p_mask1,
			 typename sse<v128<uint64_t>>::mask_t const & p_mask2,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < sse<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint32_t>>::mask_t const & p_mask1,
			 typename sse<v128<uint32_t>>::mask_t const & p_mask2,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < sse<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint16_t>>::mask_t const & p_mask1,
			 typename sse<v128<uint16_t>>::mask_t const & p_mask2,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < sse<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<uint8_t>>::mask_t const & p_mask1,
			 typename sse<v128<uint8_t>>::mask_t const & p_mask2,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < sse<v128<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<float>>::mask_t const & p_mask1,
			 typename sse<v128<float>>::mask_t const & p_mask2,
			 int element_count = sse<v128<float>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < sse<v128<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename sse<v128<double>>::mask_t const & p_mask1,
			 typename sse<v128<double>>::mask_t const & p_mask2,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
}
#endif
