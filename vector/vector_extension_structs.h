/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_EXTENSION_STRUCTS_H
#define MORPHSTORE_VECTOR_EXTENSION_STRUCTS_H

#include "general_vector_extension.h"

#  ifdef AVX512
#    include "simd/avx512/extension_avx512.h"
#  endif

#  ifdef AVXTWO
#    include "simd/avx2/extension_avx2.h"
#  endif

#  ifdef SSE
#    include "simd/sse/extension_sse.h"
#  endif

#ifdef NEON
#   include "simd/neon/extension_neon.h"
#endif

#include "scalar/extension_scalar.h"

namespace vectorlib{

#define IMPORT_VECTOR_BOILER_PLATE(VectorExtension) \
   using vector_element_count MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::element_count; \
   using base_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::base_t; \
   using vector_size_bit MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_bit; \
   using vector_size_byte MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_byte; \
   using vector_alignment MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::alignment; \
   using vector_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_t; \
   using vector_size MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::size; \
   using vector_mask_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::mask_t; \
   using vector_base_t_granularity MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::granularity;


#define IMPORT_VECTOR_BOILER_PLATE_PREFIX(VectorExtension, Prefix) \
   using Prefix##vector_element_count MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::element_count; \
   using Prefix##base_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::base_t; \
   using Prefix##vector_size_bit MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_bit; \
   using Prefix##vector_size_byte MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_byte; \
   using Prefix##vector_alignment MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::alignment; \
   using Prefix##vector_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_t; \
   using Prefix##vector_size MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::size; \
   using Prefix##vector_mask_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::mask_t; \
   using Prefix##vector_base_t_granularity MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::granularity;


}
#endif //MORPHSTORE_VECTOR_VECTOR_EXTENSION_STRUCTS_H
