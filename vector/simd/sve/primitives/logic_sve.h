/* 
 * File:   logic_sve.h
 * Author: André Berthold
 *
 * Created on 28. Mai 2020, 21:23
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_LOGIC_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_LOGIC_SVE_H

#include "../../../preprocessor.h"
#include "../extension_sve.h"
#include "../../../primitives/logic.h"

#include "../predicate_build_sve.h"

namespace vectorlib {


   template<typename T>
   struct logic<sve<extv<T>>, 0 > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sve<extv<T>>::vector_t
      bitwise_and( typename sve<extv<T>>::vector_t const & p_In1, typename sve<extv<T>>::vector_t const & p_In2) {
         return svand_m( svptrue_select<T>::get(), p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sve<extv<T>>::mask_t
      bitwise_and( typename sve<extv<T>>::mask_t const & p_In1, typename sve<extv<T>>::mask_t const & p_In2) {
         return svorr_b_z( svptrue_select<T>::get(), p_In1, p_In2 );
      }

      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename sve<extv<T>>::vector_t
      bitwise_or( typename sve<extv<T>>::vector_t const & p_In1, typename sve<extv<T>>::vector_t const & p_In2) {
         return svorr_m( svptrue_select<T>::get(), p_In1, p_In2 );
      }
   };
}
#endif //MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_LOGIC_SVE_H
