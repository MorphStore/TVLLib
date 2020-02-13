//
// Created by jpietrzyk on 09.05.19.
//

#ifndef MORPHSTORE_VECTOR_SCALAR_PRIMITIVE_COMPARE_SCALAR_H
#define MORPHSTORE_VECTOR_SCALAR_PRIMITIVE_COMPARE_SCALAR_H

#include "../../preprocessor.h"
#include "../extension_scalar.h"
#include "../../primitives/compare.h"

#include <functional>

namespace vectorlib{
   template<>
   struct equal<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64<uint64_t>>::mask_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v64<uint64_t>>::vector_t)( p_vec1 == p_vec2 );
      }
   };
   template<>
   struct less<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64<uint64_t>>::mask_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v64<uint64_t>>::vector_t)( p_vec1 < p_vec2 );
      }
   };
   template<>
   struct lessequal<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64<uint64_t>>::mask_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v64<uint64_t>>::vector_t)( p_vec1 <= p_vec2 );
      }
   };

   template<>
   struct greater<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64<uint64_t>>::mask_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v64<uint64_t>>::vector_t)( p_vec1 > p_vec2 );
      }
   };
   template<>
   struct greaterequal<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64<uint64_t>>::mask_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v64<uint64_t>>::vector_t)( p_vec1 >= p_vec2 );
      }
   };
   template<>
   struct count_matches<scalar<v64<uint64_t>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename scalar<v64<uint64_t>>::mask_t const & p_mask
      ) {
         TALLY_CALC_UNARY_SCALAR
         
         return p_mask;
      }
   };

    //start 32 bit

  template<typename T>
   struct equal<scalar<v32<T>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32<T>>::mask_t
      apply(
         typename scalar<v32<T>>::vector_t const & p_vec1,
         typename scalar<v32<T>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v32<uint32_t>>::vector_t)( p_vec1 == p_vec2 );
      }
   };
   template<>
   struct less<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32<uint32_t>>::mask_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v32<uint32_t>>::vector_t)( p_vec1 < p_vec2 );
      }
   };
   template<>
   struct lessequal<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32<uint32_t>>::mask_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v32<uint32_t>>::vector_t)( p_vec1 <= p_vec2 );
      }
   };
   template<>
   struct greater<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32<uint32_t>>::mask_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v32<uint32_t>>::vector_t)( p_vec1 > p_vec2 );
      }
   };
   template<>
   struct greaterequal<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32<uint32_t>>::mask_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ) {
         TALLY_COMPARE_SCALAR
         
         return (scalar<v32<uint32_t>>::vector_t)( p_vec1 >= p_vec2 );
      }
   };
   template<typename T>
   struct count_matches<scalar<v32<T>>> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static uint8_t
      apply(
         typename scalar<v32<T>>::mask_t const & p_mask
      ) {
         TALLY_CALC_UNARY_SCALAR
         
         return p_mask;
      }
   };

       //start 16 bit

     template<typename T>
      struct equal<scalar<v16<T>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v16<T>>::mask_t
         apply(
            typename scalar<v16<T>>::vector_t const & p_vec1,
            typename scalar<v16<T>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v16<uint16_t>>::vector_t)( p_vec1 == p_vec2 );
         }
      };
      template<>
      struct less<scalar<v16<uint16_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v16<uint16_t>>::mask_t
         apply(
            typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
            typename scalar<v16<uint16_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v16<uint16_t>>::vector_t)( p_vec1 < p_vec2 );
         }
      };
      template<>
      struct lessequal<scalar<v16<uint16_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v16<uint16_t>>::mask_t
         apply(
            typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
            typename scalar<v16<uint16_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v16<uint16_t>>::vector_t)( p_vec1 <= p_vec2 );
         }
      };
      template<>
      struct greater<scalar<v16<uint16_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v16<uint16_t>>::mask_t
         apply(
            typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
            typename scalar<v16<uint16_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v16<uint16_t>>::vector_t)( p_vec1 > p_vec2 );
         }
      };
      template<>
      struct greaterequal<scalar<v16<uint16_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v16<uint16_t>>::mask_t
         apply(
            typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
            typename scalar<v16<uint16_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v16<uint16_t>>::vector_t)( p_vec1 >= p_vec2 );
         }
      };
      template<typename T>
      struct count_matches<scalar<v16<T>>> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static uint8_t
         apply(
            typename scalar<v16<T>>::mask_t const & p_mask
         ) {
            TALLY_CALC_UNARY_SCALAR
         
            return p_mask;
         }
      };

      //start 8 bit

      template<typename T>
      struct equal<scalar<v8<T>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v8<T>>::mask_t
         apply(
            typename scalar<v8<T>>::vector_t const & p_vec1,
            typename scalar<v8<T>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v8<uint8_t>>::vector_t)( p_vec1 == p_vec2 );
         }
      };
      template<>
      struct less<scalar<v8<uint8_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v8<uint8_t>>::mask_t
         apply(
            typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
            typename scalar<v8<uint8_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v8<uint8_t>>::vector_t)( p_vec1 < p_vec2 );
         }
      };
      template<>
      struct lessequal<scalar<v8<uint8_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v8<uint8_t>>::mask_t
         apply(
            typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
            typename scalar<v8<uint8_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v8<uint8_t>>::vector_t)( p_vec1 <= p_vec2 );
         }
      };
      template<>
      struct greater<scalar<v8<uint8_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v8<uint8_t>>::mask_t
         apply(
            typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
            typename scalar<v8<uint8_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v8<uint8_t>>::vector_t)( p_vec1 > p_vec2 );
         }
      };
      template<>
      struct greaterequal<scalar<v8<uint8_t>>/*, 64*/> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static typename scalar<v8<uint8_t>>::mask_t
         apply(
            typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
            typename scalar<v8<uint8_t>>::vector_t const & p_vec2
         ) {
            TALLY_COMPARE_SCALAR
         
            return (scalar<v8<uint8_t>>::vector_t)( p_vec1 >= p_vec2 );
         }
      };
      template<typename T>
      struct count_matches<scalar<v8<T>>> {
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static uint8_t
         apply(
            typename scalar<v8<T>>::mask_t const & p_mask
         ) {
            TALLY_CALC_UNARY_SCALAR
         
            return p_mask;
         }
      };
}

#endif /* MORPHSTORE_VECTOR_SCALAR_PRIMITIVE_COMPARE_SCALAR_H */
