/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef COMPARE_H
#define COMPARE_H

#include "../vector_extension_structs.h"

#ifdef tally
#	include "../tally.h"
#endif

namespace vectorlib{

   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct equal {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::mask_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };

   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct less {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::mask_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };

   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct lessequal {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::mask_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };

   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct greater {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::mask_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };

   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   struct greaterequal {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::mask_t
      apply(
         typename VectorExtension::vector_t const & p_vec1,
         typename VectorExtension::vector_t const & p_vec2
      ) = delete;
   };

   template<class VectorExtension>
   struct count_matches {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      uint8_t
      apply(
         typename VectorExtension::mask_t const & p_mask
      ) = delete;
   };

   template<class VectorExtension, int IOGranularity>
   struct conflict_detection {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename VectorExtension::vector_t
      apply(
         typename VectorExtension::vector_t const & p_vec
      ) = delete;
   };
//   template<class VectorExtension, int IOGranularity>
//   struct compare;
//
//   /*!
//    * Compares two vectors element wise for equality
//    * @return a bitmask with an (un)set bit for every comparison result
//    */
//   template<class VectorExtension, int Granularity>
//   int
//   equality(typename VectorExtension::vector_t a, typename VectorExtension::vector_t b ) {
//       return compare<VectorExtension,  Granularity>::equality( a, b );
//   }
//
//    /*!
//    * Compares two vectors element wise for less-than property
//    * @return a bitmask with an (un)set bit for every comparison result
//    */
//   template<class VectorExtension, int Granularity>
//   int
//   lessthan(typename VectorExtension::vector_t a, typename VectorExtension::vector_t b ) {
//       return compare<VectorExtension,  Granularity>::lessthan( a, b );
//   }
//
//    /*!
//    * Compares two vectors element wise for greater-than property
//    * @return a bitmask with an (un)set bit for every comparison result
//    */
//   template<class VectorExtension, int Granularity>
//   int
//   greaterthan(typename VectorExtension::vector_t a, typename VectorExtension::vector_t b ) {
//       return compare<VectorExtension,  Granularity>::greaterthan( a, b );
//   }
//
//    /*!
//    * Compares two vectors element wise for greater-or-equal property
//    * @return a bitmask with an (un)set bit for every comparison result
//    */
//   template<class VectorExtension, int Granularity>
//   int
//   greaterequal(typename VectorExtension::vector_t a, typename VectorExtension::vector_t b ) {
//       return compare<VectorExtension,  Granularity>::greaterequal( a, b );
//   }
//
//   /*!
//    * Compares two vectors element wise for less-or-equal property
//    * @return a bitmask with an (un)set bit for every comparison result
//    */
//   template<class VectorExtension, int Granularity>
//   int
//   lessequal(typename VectorExtension::vector_t a, typename VectorExtension::vector_t b ) {
//       return compare<VectorExtension,  Granularity>::lessequal( a, b );
//   }

}

#endif /* COMPARE_H */
