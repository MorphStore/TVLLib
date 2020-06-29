/* 
 * File:   extract_sve.h
 * Author: André Berthold
 *
 * Created on 30. Mai 2020, 14:38
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVIES_EXTRACT_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVIES_EXTRACT_SVE_H


#include <core/utils/preprocessor.h>
#include <core/memory/mm_glob.h>
#include <vector/simd/sve/extension_sve.h>
#include <vector/primitives/extract.h>

#include <functional>

namespace vectorlib {
    
    
   template<typename T, int IOGranularity>
   struct extract<sve<extv<T>>, IOGranularity> {
       
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< U > >::base_t
      extract_value(typename sve< extv< U > >::vector_t p_vec, int idx) {
         trace( "[VECTOR] - extract value from sve register." );
         //@todo TODO find a way to extract a value without storing the whole vector
         using ele_cnt = typename extv< U >::element_count;
         T* p_vec_cpy = (T*) malloc( ele_cnt::value * sizeof(T) );
         svst1(svptrue_select<U>::get(), p_vec_cpy, p_vec);
         typename sve< extv< U > >::base_t res = p_vec_cpy[idx];
         free(p_vec_cpy);
         return res;
      }
   };
   
    template<int IOGranularity>//this is a second implementation to extract one specific value
   struct extract2<sve<extv<uint64_t>>, IOGranularity> {
       
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename sve< extv< U > >::base_t
      extract_value(typename sve< extv< U > >::vector_t p_vec, int idx) {
         trace( "[VECTOR] - extract value from sve register." );
         
         return svlastb(svcmpeq(svptrue_b64(), svindex_u64(0, 1), idx), p_vec);
      }
   };
}

#endif /* MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVIES_EXTRACT_SVE_H */

