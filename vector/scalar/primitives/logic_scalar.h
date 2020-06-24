//
// Created by jpietrzyk on 30.05.19.
//

#ifndef MORPHSTORE_LOGIC_SCALAR_H
#define MORPHSTORE_LOGIC_SCALAR_H
#include "../../preprocessor.h"
#include "../extension_scalar.h"
#include "../../primitives/logic.h"


namespace vectorlib {


   //@todo: The commented part does not compile using clang++
   //type of specialized non-type template argument depends on a template parameter of the partial specialization
   template<typename T>
   struct logic<scalar<v64<T>>, 64/*scalar<v64<T>>::vector_helper_t::size_bit::value*/ > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<T>>::vector_t
      bitwise_and( typename scalar<v64<T>>::vector_t const & p_In1, typename scalar<v64<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 & p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<T>>::vector_t
      bitwise_or( typename scalar<v64<T>>::vector_t const & p_In1, typename scalar<v64<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 | p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<T>>::vector_t
      bitwise_xor( typename scalar<v64<T>>::vector_t const & p_In1, typename scalar<v64<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 ^ p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v64<T>>::vector_t
      bitwise_andnot( typename scalar<v64<T>>::vector_t const & p_In1, typename scalar<v64<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return ((~p_In1) & p_In2 );
      }
   };

   template<typename T>
   struct logic<scalar<v32<T>>, 32> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<T>>::vector_t
      bitwise_and( typename scalar<v32<T>>::vector_t const & p_In1, typename scalar<v32<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 & p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<T>>::vector_t
      bitwise_or( typename scalar<v32<T>>::vector_t const & p_In1, typename scalar<v32<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 | p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<T>>::vector_t
      bitwise_xor( typename scalar<v32<T>>::vector_t const & p_In1, typename scalar<v32<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 ^ p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v32<T>>::vector_t
      bitwise_andnot( typename scalar<v32<T>>::vector_t const & p_In1, typename scalar<v32<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return ((~p_In1) & p_In2 );
      }
   };

   template<typename T>
   struct logic<scalar<v16<T>>, 16> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<T>>::vector_t
      bitwise_and( typename scalar<v16<T>>::vector_t const & p_In1, typename scalar<v16<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 & p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<T>>::vector_t
      bitwise_or( typename scalar<v16<T>>::vector_t const & p_In1, typename scalar<v16<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 | p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<T>>::vector_t
      bitwise_xor( typename scalar<v16<T>>::vector_t const & p_In1, typename scalar<v16<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 ^ p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v16<T>>::vector_t
      bitwise_andnot( typename scalar<v16<T>>::vector_t const & p_In1, typename scalar<v16<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return ((~p_In1) & p_In2 );
      }
   };


   template<typename T>
   struct logic<scalar<v8<T>>, 8> {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<T>>::vector_t
      bitwise_and( typename scalar<v8<T>>::vector_t const & p_In1, typename scalar<v8<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 & p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<T>>::vector_t
      bitwise_or( typename scalar<v8<T>>::vector_t const & p_In1, typename scalar<v8<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 | p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<T>>::vector_t
      bitwise_xor( typename scalar<v8<T>>::vector_t const & p_In1, typename scalar<v8<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return (p_In1 ^ p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename scalar<v8<T>>::vector_t
      bitwise_andnot( typename scalar<v8<T>>::vector_t const & p_In1, typename scalar<v8<T>>::vector_t const & p_In2) {
         TALLY_LOGIC_SCALAR
         return ((~p_In1) & p_In2 );
      }
   };


}
#endif //MORPHSTORE_LOGIC_SCALAR_H
