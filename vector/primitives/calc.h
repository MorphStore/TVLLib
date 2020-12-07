/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef CALC_H
#define CALC_H

#include "../vector_extension_structs.h"

#ifdef tally
#	include "../tally.h"
#endif

namespace vectorlib{
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct add {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct sub {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };

   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct min {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };

   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct hadd {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::base_t
      apply(
         typename VectorExtension::vector_t const & p_vec1
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct hor {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::base_t
      apply(
         typename VectorExtension::vector_t const & p_vec1
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct mul {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct div {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct mod {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct inv {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct shift_left {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         int const & p_distance
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct shift_left_individual {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_data,
         typename VectorExtension::vector_t const & p_distance
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct shift_right {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         int const & p_distance
      ) = delete;
   };
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct shift_right_individual {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_data,
         typename VectorExtension::vector_t const & p_distance
      ) = delete;
   };



}
#endif /* CALC_H */
