/** 
 * File:   manipulate_sve.h
 * Author: André Berthold
 *
 * Created on 28. Mai 2020, 21:27
 */

#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_MANIPULATE_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_MANIPULATE_SVE_H

#include "../../../preprocessor.h"
#include "../extension_sve.h"
#include "../../../primitives/manipulate.h"

#include "../predicate_build_sve.h"

#include <functional>

namespace vectorlib{
    template<typename T>
    struct manipulate<sve<extv<T>>, 0> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename sve<extv< U > >::vector_t
        rotate( typename sve<extv< U > >::vector_t p_vec ) {
            //@todo find a way to extract the last element from a vector (see below)
	    using ele_cnt = typename extv< U >::element_count;
	    T* p_vec_cpy = (T*) malloc( ele_cnt::value * sizeof(T) );
            svst1(svptrue_select<U>::get(), p_vec_cpy, p_vec);
	    typename sve<extv< U > >::vector_t res_vec =
                svinsr(p_vec, p_vec_cpy[ele_cnt::value - 1]);
	    free(p_vec_cpy);
            return res_vec;

        }
    };

    template<>
    struct manipulate<sve<extv<uint64_t>>, 0> {
        template< typename U = uint64_t, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename sve<extv< U > >::vector_t
        rotate( typename sve<extv< U > >::vector_t p_vec ) {
            auto last_ele = svlastb(svptrue_b64(), p_vec);
	    typename sve<extv< U > >::vector_t res_vec =
                svinsr(p_vec, last_ele);
            return res_vec;

        }
    };
}

#endif /* MORPHSTORE_VECTOR_SIMD_SVE_PRIMITIVES_MANIPULATE_SVE_H */

