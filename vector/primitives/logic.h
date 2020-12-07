/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/
#ifndef MORPHSTORE_LOGIC_H
#define MORPHSTORE_LOGIC_H

#include "../vector_extension_structs.h"
#include "../preprocessor.h"

#ifdef tally
#	include "../tally.h"
#endif

namespace vectorlib {

   template<class VectorExtension, int Granularity>
   struct logic;


   template<class VectorExtension,  int Granularity = VectorExtension::vector_helper_t::size_bit::value>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   typename VectorExtension::vector_t
   bitwise_and(typename VectorExtension::vector_t const & p_In1, typename VectorExtension::vector_t const & p_In2){
      return logic<VectorExtension, Granularity>::bitwise_and( p_In1, p_In2 );
   }

   template<class VectorExtension,  int Granularity = VectorExtension::vector_helper_t::size_bit::value>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   typename VectorExtension::vector_t
   bitwise_or(typename VectorExtension::vector_t const & p_In1, typename VectorExtension::vector_t const & p_In2){
      return logic<VectorExtension, Granularity>::bitwise_or( p_In1, p_In2 );
   }

   template<class VectorExtension,  int Granularity = VectorExtension::vector_helper_t::size_bit::value>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   typename VectorExtension::vector_t
   bitwise_xor(typename VectorExtension::vector_t const & p_In1, typename VectorExtension::vector_t const & p_In2){
      return logic<VectorExtension, Granularity>::bitwise_xor( p_In1, p_In2 );
   }

   template<class VectorExtension,  int Granularity = VectorExtension::vector_helper_t::size_bit::value>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   typename VectorExtension::vector_t
   bitwise_andnot(typename VectorExtension::vector_t const & p_In1, typename VectorExtension::vector_t const & p_In2){
      return logic<VectorExtension, Granularity>::bitwise_andnot( p_In1, p_In2 );
   }

}
#endif //MORPHSTORE_LOGIC_H
