#ifndef calc_cuda_H
#define calc_cuda_H

#include "../../../header/preprocessor.h"
#include "../../../header/extension_cuda.h"
#include "../../primitives/calc.h"
#include <functional>

#include <header/cuda_kernel/calc_device.cuh>

namespace vectorlib{
	template<
	>
	struct add_t <cuda<v294912<uint64_t>>,  64> {
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static
		typename cuda<v294912<uint64_t>>::vector_t apply (
			 typename cuda<v294912<uint64_t>>::vector_t const & p_vec1,
			 typename cuda<v294912<uint64_t>>::vector_t const & p_vec2,
			 int element_count = cuda<v294912<uint64_t>>::vector_helper_t::element_count::value)
		{
			add_kernel<uint64_t,4><<<72,16>>>(p_vec1,p_vec2);
     return p_vec2;
		}
	}
;
}
#endif
