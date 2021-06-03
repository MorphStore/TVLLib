#ifndef io_sse_H
#define io_sse_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_sse.h"
#include "../../primitives/io.h"
#include <functional>

namespace vectorlib{
	template<
	>
	struct load_t <sse<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::vector_t apply (
			 typename sse<v128<uint64_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::vector_t apply (
			 typename sse<v128<uint32_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::vector_t apply (
			 typename sse<v128<uint16_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::vector_t apply (
			 typename sse<v128<uint8_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_load_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::vector_t apply (
			 typename sse<v128<uint64_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<double>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<double>>::vector_t apply (
			 typename sse<v128<double>>::base_t * p_DataPtr,
			 int element_count = sse<v128<double>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_pd(reinterpret_cast<double const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::vector_t apply (
			 typename sse<v128<uint32_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint32_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::vector_t apply (
			 typename sse<v128<uint16_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint16_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct load_t <sse<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::vector_t apply (
			 typename sse<v128<uint8_t>>::base_t * p_DataPtr,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
		{
			return _mm_loadu_si128(reinterpret_cast<typename sse< v128< uint8_t > >::vector_t const *>(p_DataPtr));
		}
	}
;
	template<
	>
	struct store_t <sse<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint64_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint64_t>>::vector_t p_Vec,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm_store_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct store_t <sse<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint64_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint64_t>>::vector_t p_Vec,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			 _mm_storeu_si128(reinterpret_cast<typename sse< v128< uint64_t > >::vector_t *>(p_DataPtr),p_Vec);
		}
	}
;
	template<
	>
	struct gather_t <sse<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint64_t>>::vector_t apply (
			 typename sse<v128<uint64_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint64_t>>::vector_t p_vec,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi64x(
      *reinterpret_cast<uint64_t const *>(reinterpret_cast<uint64_t const *>(p_DataPtr) + _mm_extract_epi64(p_vec,1) * 8),
      *reinterpret_cast<uint64_t const *>(reinterpret_cast<uint64_t const *>(p_DataPtr) + _mm_extract_epi64(p_vec,0) * 8)
    );
		}
	}
;
	template<
	>
	struct gather_t <sse<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint32_t>>::vector_t apply (
			 typename sse<v128<uint32_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint32_t>>::vector_t p_vec,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
		{
			return _mm_set_epi32(
               *reinterpret_cast<uint32_t const *>(reinterpret_cast<uint32_t const *>(p_DataPtr) + _mm_extract_epi32(p_vec,3) * 4),
               *reinterpret_cast<uint32_t const *>(reinterpret_cast<uint32_t const *>(p_DataPtr) + _mm_extract_epi32(p_vec,2) * 4),
               *reinterpret_cast<uint32_t const *>(reinterpret_cast<uint32_t const *>(p_DataPtr) + _mm_extract_epi32(p_vec,1) * 4),
               *reinterpret_cast<uint32_t const *>(reinterpret_cast<uint32_t const *>(p_DataPtr) + _mm_extract_epi32(p_vec,0) * 4)
     );//a bit limited
		}
	}
;
	template<
	>
	struct gather_t <sse<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint16_t>>::vector_t apply (
			 typename sse<v128<uint16_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint16_t>>::vector_t p_vec,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct gather_t <sse<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename sse<v128<uint8_t>>::vector_t apply (
			 typename sse<v128<uint8_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint8_t>>::vector_t p_vec,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint64_t>>, iov::UNALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint64_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint64_t>>::vector_t p_vec,
			 typename sse<v128<uint64_t>>::mask_t mask,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint64_t>>, iov::ALIGNED,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint64_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint64_t>>::vector_t p_vec,
			 typename sse<v128<uint64_t>>::mask_t mask,
			 int element_count = sse<v128<uint64_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint32_t>>, iov::UNALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint32_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint32_t>>::vector_t p_vec,
			 typename sse<v128<uint32_t>>::mask_t mask,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint32_t>>, iov::ALIGNED,  32> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint32_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint32_t>>::vector_t p_vec,
			 typename sse<v128<uint32_t>>::mask_t mask,
			 int element_count = sse<v128<uint32_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint16_t>>, iov::UNALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint16_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint16_t>>::vector_t p_vec,
			 typename sse<v128<uint16_t>>::mask_t mask,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint16_t>>, iov::ALIGNED,  16> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint16_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint16_t>>::vector_t p_vec,
			 typename sse<v128<uint16_t>>::mask_t mask,
			 int element_count = sse<v128<uint16_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint8_t>>, iov::UNALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint8_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint8_t>>::vector_t p_vec,
			 typename sse<v128<uint8_t>>::mask_t mask,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
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
	struct compressstore_t <sse<v128<uint8_t>>, iov::ALIGNED,  8> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		void apply (
			 typename sse<v128<uint8_t>>::base_t * p_DataPtr,
			 typename sse<v128<uint8_t>>::vector_t p_vec,
			 typename sse<v128<uint8_t>>::mask_t mask,
			 int element_count = sse<v128<uint8_t>>::vector_helper_t::element_count::value)
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
}
#endif
