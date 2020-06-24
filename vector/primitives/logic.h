//
// Created by jpietrzyk on 16.05.19.
//

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
