/**
 * @file io.h
 * @brief Brief description
 * @author Johannes Pietrzyk
 * @todo TODOS?
 */

#ifndef MORPHSTORE_VECTOR_PRIMITIVES_IO_H
#define MORPHSTORE_VECTOR_PRIMITIVES_IO_H

#include "../vector_extension_structs.h"

#ifdef tally
#	include "../tally.h"
#endif
/**
 * @todo: typename VectorExtension::vector_t should be a const reference!!!
 */

namespace vectorlib {

   enum class iov {
      ALIGNED,
      UNALIGNED,
      UNALIGNEDX,
      STREAM
   };

   template<class VectorExtension, iov IOVariant, int IOGranularity>
   struct io;

   template<class VectorExtension, iov IOVariant, int IOGranularity>
   typename VectorExtension::vector_t
   load(typename VectorExtension::base_t const * const a ) {
       return io<VectorExtension, IOVariant, IOGranularity>::load( a );
   }


   template<class VectorExtension, iov IOVariant, int IOGranularity>
   void
   store(typename VectorExtension::base_t * a,  typename VectorExtension::vector_t b ) {
       io<VectorExtension, IOVariant, IOGranularity>::store( a, b );
       return;
   }

   /*! Selectively store 64-bit integer vales from a vector register to memory using a bitmask
    * @param a A pointer to a memory adress
    * @param b A vector register
    * @param c A mask that indicates the of b are store at a
    */
   template<class VectorExtension, iov IOVariant, int IOGranularity>
   void
   compressstore(
      typename VectorExtension::base_t * a,
      typename VectorExtension::vector_t b,
      typename VectorExtension::mask_t c
   ) {
       io<VectorExtension, IOVariant, IOGranularity>::compressstore( a, b, c );
       return;
   }

   template<class VectorExtension, int IOGranularity, int Scale>
   struct gather_t {
      static typename VectorExtension::vector_t
      apply(typename VectorExtension::base_t const * const a, typename VectorExtension::vector_t b);
   };

    /*! Gather 64-bit integers from memory
    * @param a A pointer to a memory adress
    * @param b A vector register with the indices (starting at a)
    */
   template<class VectorExtension, int IOGranularity, int Scale>
   typename VectorExtension::vector_t
   gather(typename VectorExtension::base_t const * const a,  typename VectorExtension::vector_t b) {
      return gather_t<VectorExtension, IOGranularity, Scale>::apply( a, b );
   }



}
#endif //MORPHSTORE_VECTOR_PRIMITIVES_IO_H
