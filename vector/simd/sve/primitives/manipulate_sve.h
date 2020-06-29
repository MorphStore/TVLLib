/** 
 * File:   manipulate_sve.h
 * Author: André Berthold
 *
 * Created on 28. Mai 2020, 21:27
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_MANIPULATE_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_MANIPULATE_SVE_H

#include <core/utils/preprocessor.h>
#include <core/memory/mm_glob.h>
#include <vector/simd/sve/extension_sve.h>
#include <vector/primitives/manipulate.h>
#include "../predicate_build_sve.h"

#include <functional>

namespace vectorlib{
    template<typename T>
    struct manipulate<sve<extv<T>>, 0> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename sve<extv< U > >::vector_t
        rotate( typename sve<extv< U > >::vector_t p_vec ) {
            trace( "[VECTOR] - Rotate vector (SVE)" );
            //@todo TODO find a way to extract the last element from a vector
	    using ele_cnt = typename extv< U >::element_count;
	    T* p_vec_cpy = (T*) malloc( ele_cnt::value * sizeof(T) );
            svst1(svptrue_select<U>::get(), p_vec_cpy, p_vec);
	    typename sve<extv< U > >::vector_t res_vec =
                svinsr(p_vec, p_vec_cpy[ele_cnt::value - 1]);
	    free(p_vec_cpy);
            return res_vec;

        }
    };
}

#endif /* MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_MANIPULATE_SVE_H */

