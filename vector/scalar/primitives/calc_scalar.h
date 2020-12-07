/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SCALAR_PRIMITIVE_CALC_SCALAR_H
#define MORPHSTORE_VECTOR_SCALAR_PRIMITIVE_CALC_SCALAR_H

#include "../../preprocessor.h"
#include "../extension_scalar.h"
#include "../../primitives/calc.h"
#include <algorithm>

#include <functional>
#include <limits>

namespace vectorlib{
   template<>
   struct add<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 + p_vec2;
      }
   };

   template<>
   struct min<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return std::min(p_vec1,p_vec2);
      }
   };

   template<>
   struct sub<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 - p_vec2;
      }
   };
   template<>
   struct hadd<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::base_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1;
      }
   };
   template<>
   struct hor<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::base_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1;
      }
   };
   template<>
   struct mul<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 * p_vec2;
      }
   };
   template<>
   struct div<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 / p_vec2;
      }
   };
   template<>
   struct mod<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         typename scalar<v64<uint64_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 % p_vec2;
      }
   };
   template<>
   struct inv<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return ((~p_vec1)+1);
      }
   };
   template<>
   struct shift_left<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 << p_distance;
      }
   };
   template<>
   struct shift_left_individual<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_data,
         typename scalar<v64<uint64_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         if(p_distance == std::numeric_limits<scalar<v64<uint64_t>>::vector_t>::digits)
             return 0;
         else
             return p_data << p_distance;
      }
   };
   template<>
   struct shift_right<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 >> p_distance;
      }
   };
   template<>
   struct shift_right_individual<scalar<v64<uint64_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<uint64_t>>::vector_t
      apply(
         typename scalar<v64<uint64_t>>::vector_t const & p_data,
         typename scalar<v64<uint64_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         if(p_distance == std::numeric_limits<scalar<v64<uint64_t>>::vector_t>::digits)
             return 0;
         else
             return p_data >> p_distance;
      }
   };

   //start 32 bit

   template<>
   struct add<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 + p_vec2;
      }
   };
   template<>
   struct min<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return std::min(p_vec1,p_vec2);
      }
   };
   template<>
   struct sub<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 - p_vec2;
      }
   };
   template<>
   struct hadd<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::base_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1;
      }
   };
   template<>
   struct mul<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 * p_vec2;
      }
   };
   template<>
   struct div<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 / p_vec2;
      }
   };
   template<>
   struct mod<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         typename scalar<v32<uint32_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 % p_vec2;
      }
   };
   template<>
   struct inv<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return ((~p_vec1)+1);
      }
   };
   template<>
   struct shift_left<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 << p_distance;
      }
   };
   template<>
   struct shift_left_individual<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_data,
         typename scalar<v32<uint32_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         // CHANGED std::numeric_limits<scalar<v64<uint64_t>> to std::numeric_limits<scalar<v32<uint32_t>>
         if(p_distance == std::numeric_limits<scalar<v32<uint32_t>>::vector_t>::digits)
             return 0;
         else
             return p_data << p_distance;
      }
   };
   template<>
   struct shift_right<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 >> p_distance;
      }
   };
   template<>
   struct shift_right_individual<scalar<v32<uint32_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<uint32_t>>::vector_t
      apply(
         typename scalar<v32<uint32_t>>::vector_t const & p_data,
         typename scalar<v32<uint32_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         // CHANGED std::numeric_limits<scalar<v64<uint64_t>> to std::numeric_limits<scalar<v32<uint32_t>>
         if(p_distance == std::numeric_limits<scalar<v32<uint32_t>>::vector_t>::digits)
             return 0;
         else
             return p_data >> p_distance;
      }
   };

   //start 16 bit

   template<>
   struct add<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         typename scalar<v16<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 + p_vec2;
      }
   };
   template<>
   struct min<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         typename scalar<v16<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return std::min(p_vec1,p_vec2);
      }
   };
   template<>
   struct sub<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         typename scalar<v16<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 - p_vec2;
      }
   };
   template<>
   struct hadd<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::base_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1;
      }
   };
   template<>
   struct mul<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         typename scalar<v16<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 * p_vec2;
      }
   };
   template<>
   struct div<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         typename scalar<v16<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         

         return p_vec1 / p_vec2;
      }
   };
   template<>
   struct mod<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         typename scalar<v16<uint16_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 % p_vec2;
      }
   };
   template<>
   struct inv<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return ((~p_vec1)+1);
      }
   };
   template<>
   struct shift_left<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 << p_distance;
      }
   };
   template<>
   struct shift_left_individual<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_data,
         typename scalar<v16<uint16_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         // CHANGED std::numeric_limits<scalar<v64<uint64_t>> to std::numeric_limits<scalar<v16<uint16_t>>
         if(p_distance == std::numeric_limits<scalar<v16<uint16_t>>::vector_t>::digits)
             return 0;
         else
             return p_data << p_distance;
      }
   };
   template<>
   struct shift_right<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 >> p_distance;
      }
   };
   template<>
   struct shift_right_individual<scalar<v16<uint16_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<uint16_t>>::vector_t
      apply(
         typename scalar<v16<uint16_t>>::vector_t const & p_data,
         typename scalar<v16<uint16_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         // CHANGED std::numeric_limits<scalar<v64<uint64_t>> to std::numeric_limits<scalar<v32<uint32_t>>
         if(p_distance == std::numeric_limits<scalar<v16<uint16_t>>::vector_t>::digits)
             return 0;
         else
             return p_data >> p_distance;
      }
   };

   //start 8 bit

   template<>
   struct add<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         typename scalar<v8<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 + p_vec2;
      }
   };
   template<>
   struct min<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         typename scalar<v8<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return std::min(p_vec1,p_vec2);
      }
   };
   template<>
   struct sub<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         typename scalar<v8<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 - p_vec2;
      }
   };
   template<>
   struct hadd<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::base_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1;
      }
   };
   template<>
   struct mul<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         typename scalar<v8<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 * p_vec2;
      }
   };
   template<>
   struct div<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         typename scalar<v8<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 / p_vec2;
      }
   };
   template<>
   struct mod<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         typename scalar<v8<uint8_t>>::vector_t const & p_vec2
      ){
         TALLY_CALC_BINARY_SCALAR
         
         return p_vec1 % p_vec2;
      }
   };
   template<>
   struct inv<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return ((~p_vec1)+1);
      }
   };
   template<>
   struct shift_left<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 << p_distance;
      }
   };
   template<>
   struct shift_left_individual<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_data,
         typename scalar<v8<uint8_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         // CHANGED std::numeric_limits<scalar<v64<uint64_t>> to std::numeric_limits<scalar<v8<uint8_t>>
         if(p_distance == std::numeric_limits<scalar<v8<uint8_t>>::vector_t>::digits)
             return 0;
         else
             return p_data << p_distance;
      }
   };
   template<>
   struct shift_right<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_vec1,
         int const & p_distance
      ){
         TALLY_CALC_UNARY_SCALAR
         
         return p_vec1 >> p_distance;
      }
   };
   template<>
   struct shift_right_individual<scalar<v8<uint8_t>>/*, 64*/> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<uint8_t>>::vector_t
      apply(
         typename scalar<v8<uint8_t>>::vector_t const & p_data,
         typename scalar<v8<uint8_t>>::vector_t const & p_distance
      ){
         TALLY_CALC_BINARY_SCALAR
         
         // The scalar shift does not do anything when the distance is the
         // number of digits.
         // @todo Currently, this is a workaround, rethink whether we want it
         // this way and whether shift_left above should do it the same way.
         // CHANGED std::numeric_limits<scalar<v64<uint64_t>> to std::numeric_limits<scalar<v8<uint8_t>>
         if(p_distance == std::numeric_limits<scalar<v8<uint8_t>>::vector_t>::digits)
             return 0;
         else
             return p_data >> p_distance;
      }
   };
}
#endif //MORPHSTORE_VECTOR_SCALAR_PRIMITIVE_CALC_SCALAR_H
