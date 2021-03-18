#ifndef compare_avx2_H
#define compare_avx2_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_avx2.h"
#include "../../primitives/compare.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct equal_t <avx2<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::mask_t apply (
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
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
	struct equal_t <avx2<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::mask_t apply (
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
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
	struct equal_t <avx2<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::mask_t apply (
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct equal_t <avx2<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::mask_t apply (
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8( _mm_cmpeq_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct equal_t <avx2<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<float>>::mask_t apply (
			 typename avx2<v128<float>>::vector_t const & p_vec1,
			 typename avx2<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmp_ps(p_vec1, p_vec2, 0) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx2<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<double>>::mask_t apply (
			 typename avx2<v128<double>>::vector_t const & p_vec1,
			 typename avx2<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmp_pd(p_vec1, p_vec2, 0) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx2<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::mask_t apply (
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
      _mm256_movemask_pd(
        _mm256_castsi256_pd(
          _mm256_cmpeq_epi64(p_vec1, p_vec2)
        )
      );
		}
	}
;
	template<
	>
	struct equal_t <avx2<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::mask_t apply (
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm256_movemask_ps(
          _mm256_castsi256_ps(
             _mm256_cmpeq_epi32(p_vec1, p_vec2)
          )
       );
		}
	}
;
	template<
	>
	struct equal_t <avx2<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::mask_t apply (
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m256i res = _mm256_cmpeq_epi16(p_vec1, p_vec2);
    __m256i shift = _mm256_set_epi32(16,16,16,16,0,0,0,0);
    __m256i vec_and = _mm256_set1_epi32(0xffff);
    __m256i res_vec_p1 = _mm256_and_si256(
                            _mm256_srlv_epi32(
                               _mm256_permute4x64_epi64(res, 0b01000100),
                               shift
                            ),
                            vec_and
                         );
    __m256i res_vec_p2 = _mm256_and_si256(
                           _mm256_srlv_epi32(
                              _mm256_permute4x64_epi64(res, 0b11101110),
                              shift
                           ),
                           vec_and
                        );
    uint16_t a = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p1, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    uint16_t b = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p2, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    return (b << 8) | a ;
		}
	}
;
	template<
	>
	struct equal_t <avx2<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::mask_t apply (
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_epi8( _mm256_cmpeq_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct equal_t <avx2<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<float>>::mask_t apply (
			 typename avx2<v256<float>>::vector_t const & p_vec1,
			 typename avx2<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_ps( _mm256_cmp_ps(p_vec1, p_vec2, 0) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct equal_t <avx2<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<double>>::mask_t apply (
			 typename avx2<v256<double>>::vector_t const & p_vec1,
			 typename avx2<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_pd( _mm256_cmp_pd(p_vec1, p_vec2, 0) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx2<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::mask_t apply (
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
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
	struct less_t <avx2<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::mask_t apply (
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
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
	struct less_t <avx2<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::mask_t apply (
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct less_t <avx2<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::mask_t apply (
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8( _mm_cmplt_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct less_t <avx2<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<float>>::mask_t apply (
			 typename avx2<v128<float>>::vector_t const & p_vec1,
			 typename avx2<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmp_ps(p_vec1, p_vec2, 17) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx2<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<double>>::mask_t apply (
			 typename avx2<v128<double>>::vector_t const & p_vec1,
			 typename avx2<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmp_pd(p_vec1, p_vec2, 17) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx2<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::mask_t apply (
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
      _mm256_movemask_pd(
        _mm256_castsi256_pd(
          _mm256_cmpgt_epi64(p_vec2, p_vec1)
        )
      );
		}
	}
;
	template<
	>
	struct less_t <avx2<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::mask_t apply (
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm256_movemask_ps( //mm256
          _mm256_castsi256_ps( //Casts vector of type __m256i to type __m256
             _mm256_cmpgt_epi32(p_vec2, p_vec1) //mm256i
          )
       );
		}
	}
;
	template<
	>
	struct less_t <avx2<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::mask_t apply (
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m256i res = _mm256_cmpgt_epi16(p_vec2, p_vec1);
    __m256i shift = _mm256_set_epi32(16,16,16,16,0,0,0,0);
    __m256i vec_and = _mm256_set1_epi32(0xffff);
    __m256i res_vec_p1 = _mm256_and_si256(
                      _mm256_srlv_epi32(
                         _mm256_permute4x64_epi64(res, 0b01000100)
                         , shift
                      ),
                      vec_and
                   );
    __m256i res_vec_p2 = _mm256_and_si256(
       _mm256_srlv_epi32(
          _mm256_permute4x64_epi64(res, 0b11101110),
          shift
       ),
       vec_and
    );
    uint16_t a = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p1, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    uint16_t b = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p2, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    return (b << 8) | a ;
		}
	}
;
	template<
	>
	struct less_t <avx2<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::mask_t apply (
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_epi8( _mm256_cmpgt_epi8(p_vec2, p_vec1) );
		}
	}
;
	template<
	>
	struct less_t <avx2<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<float>>::mask_t apply (
			 typename avx2<v256<float>>::vector_t const & p_vec1,
			 typename avx2<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_ps( _mm256_cmp_ps(p_vec1, p_vec2, 17) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct less_t <avx2<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<double>>::mask_t apply (
			 typename avx2<v256<double>>::vector_t const & p_vec1,
			 typename avx2<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_pd( _mm256_cmp_pd(p_vec1, p_vec2, 17) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx2<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::mask_t apply (
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
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
	struct greater_t <avx2<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::mask_t apply (
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
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
	struct greater_t <avx2<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::mask_t apply (
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct greater_t <avx2<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::mask_t apply (
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_epi8( _mm_cmpgt_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct greater_t <avx2<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<float>>::mask_t apply (
			 typename avx2<v128<float>>::vector_t const & p_vec1,
			 typename avx2<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmp_ps(p_vec1, p_vec2, 30) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx2<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<double>>::mask_t apply (
			 typename avx2<v128<double>>::vector_t const & p_vec1,
			 typename avx2<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmp_pd(p_vec1, p_vec2, 30) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx2<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::mask_t apply (
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return
      _mm256_movemask_pd(
        _mm256_castsi256_pd(
          _mm256_cmpgt_epi64(p_vec1, p_vec2)
        )
      );
		}
	}
;
	template<
	>
	struct greater_t <avx2<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::mask_t apply (
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm256_movemask_ps(
          _mm256_castsi256_ps(
             _mm256_cmpgt_epi32(p_vec1, p_vec2)
          )
       );
		}
	}
;
	template<
	>
	struct greater_t <avx2<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::mask_t apply (
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m256i res = _mm256_cmpgt_epi16(p_vec1, p_vec2);
    __m256i shift = _mm256_set_epi32(16,16,16,16,0,0,0,0);
    __m256i vec_and = _mm256_set1_epi32(0xffff);
    __m256i res_vec_p1 = _mm256_and_si256(
                            _mm256_srlv_epi32(
                               _mm256_permute4x64_epi64(res, 0b01000100)
                               , shift
                            ),
                            vec_and
                         );
    __m256i res_vec_p2 = _mm256_and_si256(
                           _mm256_srlv_epi32(
                              _mm256_permute4x64_epi64(res, 0b11101110),
                              shift
                           ),
                           vec_and
                        );
    uint16_t a = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p1, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    uint16_t b = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p2, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    return (b << 8) | a ;
		}
	}
;
	template<
	>
	struct greater_t <avx2<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::mask_t apply (
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_epi8( _mm256_cmpgt_epi8(p_vec1, p_vec2) );
		}
	}
;
	template<
	>
	struct greater_t <avx2<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<float>>::mask_t apply (
			 typename avx2<v256<float>>::vector_t const & p_vec1,
			 typename avx2<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_ps( _mm256_cmp_ps(p_vec1, p_vec2, 30) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greater_t <avx2<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<double>>::mask_t apply (
			 typename avx2<v256<double>>::vector_t const & p_vec1,
			 typename avx2<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_pd( _mm256_cmp_pd(p_vec1, p_vec2, 30) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<float>>::mask_t const & p_mask,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<double>>::mask_t const & p_mask,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<float>>::mask_t const & p_mask,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct count_matches_t <avx2<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<double>>::mask_t const & p_mask,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm_popcnt_u64(p_mask);
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v256<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v256<uint64_t>>::mask_t p_mask,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v256<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v256<uint32_t>>::mask_t p_mask,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v256<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v256<uint16_t>>::mask_t p_mask,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v256<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v256<uint8_t>>::mask_t p_mask,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v128<uint64_t>>::mask_t p_mask,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v128<uint32_t>>::mask_t p_mask,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v128<uint16_t>>::mask_t p_mask,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct is_zero_t < avx2<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		int apply (
			 typename avx2<v128<uint8_t>>::mask_t p_mask,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask;
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::mask_t apply (
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
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
	struct greaterequal_t <avx2<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::mask_t apply (
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
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
	struct greaterequal_t <avx2<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::mask_t apply (
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct greaterequal_t <avx2<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::mask_t apply (
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
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
	struct greaterequal_t <avx2<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<float>>::mask_t apply (
			 typename avx2<v128<float>>::vector_t const & p_vec1,
			 typename avx2<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmp_ps(p_vec1, p_vec2, 29) ); //non-signalling ordered equal
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<double>>::mask_t apply (
			 typename avx2<v128<double>>::vector_t const & p_vec1,
			 typename avx2<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmp_pd(p_vec1, p_vec2, 29) ); //non-signalling ordered equal
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::mask_t apply (
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_pd(
       _mm256_castsi256_pd(
          _mm256_or_si256(
             _mm256_cmpeq_epi64(p_vec1, p_vec2),
             _mm256_cmpgt_epi64(p_vec1, p_vec2)
          )
       )
    );
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::mask_t apply (
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm256_movemask_ps(
          _mm256_castsi256_ps(
             _mm256_or_si256(
                _mm256_cmpeq_epi32(p_vec1, p_vec2),
                _mm256_cmpgt_epi32(p_vec1, p_vec2)
             )
          )
       );
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::mask_t apply (
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m256i res = _mm256_or_si256(
       _mm256_cmpeq_epi16(p_vec1, p_vec2),
       _mm256_cmpgt_epi16(p_vec1, p_vec2)
    );
    __m256i shift = _mm256_set_epi32(16,16,16,16,0,0,0,0);
    __m256i vec_and = _mm256_set1_epi32(0xffff);
    __m256i res_vec_p1 = _mm256_and_si256(
                      _mm256_srlv_epi32(
                         _mm256_permute4x64_epi64(res, 0b01000100)
                         , shift
                      ),
                      vec_and
                   );
    __m256i res_vec_p2 = _mm256_and_si256(
       _mm256_srlv_epi32(
          _mm256_permute4x64_epi64(res, 0b11101110),
          shift
       ),
       vec_and
    );
    uint16_t a = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p1, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    uint16_t b = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p2, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    return (b << 8) | a ;
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::mask_t apply (
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_epi8(
             _mm256_or_si256(
                _mm256_cmpeq_epi8(p_vec1, p_vec2),
                _mm256_cmpgt_epi8(p_vec1, p_vec2)
              )
          );
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<float>>::mask_t apply (
			 typename avx2<v256<float>>::vector_t const & p_vec1,
			 typename avx2<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_ps( _mm256_cmp_ps(p_vec1, p_vec2, 29) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct greaterequal_t <avx2<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<double>>::mask_t apply (
			 typename avx2<v256<double>>::vector_t const & p_vec1,
			 typename avx2<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_pd( _mm256_cmp_pd(p_vec1, p_vec2, 29) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v128<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint64_t>>::mask_t apply (
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
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
	struct lessequal_t <avx2<v128<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint32_t>>::mask_t apply (
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
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
	struct lessequal_t <avx2<v128<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint16_t>>::mask_t apply (
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct lessequal_t <avx2<v128<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<uint8_t>>::mask_t apply (
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v128<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
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
	struct lessequal_t <avx2<v128<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<float>>::mask_t apply (
			 typename avx2<v128<float>>::vector_t const & p_vec1,
			 typename avx2<v128<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_ps( _mm_cmp_ps(p_vec1, p_vec2, 18) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v128<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v128<double>>::mask_t apply (
			 typename avx2<v128<double>>::vector_t const & p_vec1,
			 typename avx2<v128<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_movemask_pd( _mm_cmp_pd(p_vec1, p_vec2, 18) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v256<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint64_t>>::mask_t apply (
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint64_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_pd(
       _mm256_castsi256_pd(
          _mm256_or_si256(
             _mm256_cmpeq_epi64(p_vec1, p_vec2),
             _mm256_cmpgt_epi64(p_vec2, p_vec1)
          )
       )
    );
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v256<uint32_t>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint32_t>>::mask_t apply (
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint32_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return
       _mm256_movemask_ps(
          _mm256_castsi256_ps(
             _mm256_or_si256(
                _mm256_cmpeq_epi32(p_vec1, p_vec2),
                _mm256_cmpgt_epi32(p_vec2, p_vec1)
             )
          )
       );
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v256<uint16_t>>,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint16_t>>::mask_t apply (
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint16_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			__m256i res = _mm256_or_si256(
       _mm256_cmpeq_epi16(p_vec1, p_vec2),
       _mm256_cmpgt_epi16(p_vec2, p_vec1)
    );
    __m256i shift = _mm256_set_epi32(16,16,16,16,0,0,0,0);
    __m256i vec_and = _mm256_set1_epi32(0xffff);
    __m256i res_vec_p1 = _mm256_and_si256(
                      _mm256_srlv_epi32(
                         _mm256_permute4x64_epi64(res, 0b01000100)
                         , shift
                      ),
                      vec_and
                   );
    __m256i res_vec_p2 = _mm256_and_si256(
       _mm256_srlv_epi32(
          _mm256_permute4x64_epi64(res, 0b11101110),
          shift
       ),
       vec_and
    );
    uint16_t a = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p1, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    uint16_t b = _mm256_movemask_ps(
                      _mm256_castsi256_ps(
                         _mm256_slli_epi32(
                            _mm256_castps_si256(
                               _mm256_permute_ps(
                                  _mm256_castsi256_ps(
                                     _mm256_permute4x64_epi64(res_vec_p2, 216)
                                  ),
                                  216
                               )
                            ),
                            16
                         )
                      )
                   );
    return (b << 8) | a ;
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v256<uint8_t>>,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<uint8_t>>::mask_t apply (
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec1,
			 typename avx2<v256<uint8_t>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_epi8(
       _mm256_or_si256(
          _mm256_cmpeq_epi8(p_vec1, p_vec2),
          _mm256_cmpgt_epi8(p_vec2, p_vec1)
        )
    );
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v256<float>>,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<float>>::mask_t apply (
			 typename avx2<v256<float>>::vector_t const & p_vec1,
			 typename avx2<v256<float>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_ps( _mm256_cmp_ps(p_vec1, p_vec2, 18) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct lessequal_t <avx2<v256<double>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename avx2<v256<double>>::mask_t apply (
			 typename avx2<v256<double>>::vector_t const & p_vec1,
			 typename avx2<v256<double>>::vector_t const & p_vec2,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return _mm256_movemask_pd( _mm256_cmp_pd(p_vec1, p_vec2, 18) ); //non-signalling ordered
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx2<v256<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint64_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx2<v256<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint32_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx2<v256<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint16_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx2<v256<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint8_t>>::mask_t const & p_mask,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx2<v256<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<float>>::mask_t const & p_mask,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct ctz_mask_t < avx2<v256<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<double>>::mask_t const & p_mask,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return __builtin_ctz(p_mask);
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v256<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint64_t>>::mask_t const & p_mask1,
			 typename avx2<v256<uint64_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v256<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v256<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint32_t>>::mask_t const & p_mask1,
			 typename avx2<v256<uint32_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v256<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v256<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint16_t>>::mask_t const & p_mask1,
			 typename avx2<v256<uint16_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v256<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v256<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<uint8_t>>::mask_t const & p_mask1,
			 typename avx2<v256<uint8_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v256<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v256<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<float>>::mask_t const & p_mask1,
			 typename avx2<v256<float>>::mask_t const & p_mask2,
			 int element_count = avx2<v256<float>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v256<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v256<double>>::mask_t const & p_mask1,
			 typename avx2<v256<double>>::mask_t const & p_mask2,
			 int element_count = avx2<v256<double>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v128<uint64_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint64_t>>::mask_t const & p_mask1,
			 typename avx2<v128<uint64_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v128<uint32_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint32_t>>::mask_t const & p_mask1,
			 typename avx2<v128<uint32_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v128<uint16_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint16_t>>::mask_t const & p_mask1,
			 typename avx2<v128<uint16_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v128<uint8_t>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<uint8_t>>::mask_t const & p_mask1,
			 typename avx2<v128<uint8_t>>::mask_t const & p_mask2,
			 int element_count = avx2<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v128<float>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<float>>::mask_t const & p_mask1,
			 typename avx2<v128<float>>::mask_t const & p_mask2,
			 int element_count = avx2<v128<float>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
	template<
	>
	struct equal_mask_t < avx2<v128<double>>> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		uint16_t apply (
			 typename avx2<v128<double>>::mask_t const & p_mask1,
			 typename avx2<v128<double>>::mask_t const & p_mask2,
			 int element_count = avx2<v128<double>>::vector_helper_t::element_count::value)
		{
			return p_mask1==p_mask2;
		}
	}
;
}
#endif
