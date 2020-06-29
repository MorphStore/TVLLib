/**
 * @file vector_reg.h
 * @brief Brief description
 * @author Johannes Pietrzyk
 * @todo TODOS?
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

#ifdef SVE
#   include <vector/simd/sve/extension_sve.h>
#endif

#include "scalar/extension_scalar.h"

namespace vectorlib{

#ifdef SVE//init element_count, size_bit, size_byte, vector_alignment, vector_size if working on SVE vectors
#define IMPORT_VECTOR_BOILER_PLATE(VectorExtension) \
   /*vectorlib::extv<typename VectorExtension::vector_helper_t::base_t> ext_vector_view_instance();*/\
   \
   using base_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::base_t; \
   using vector_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_t; \
   using vector_mask_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::mask_t; \
   using vector_base_t_granularity MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::granularity; \
   \
   using vector_element_count MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::element_count; \
   using vector_size_bit      MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_bit; \
   using vector_size_byte     MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_byte; \
   using vector_alignment     MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::alignment; \
   using vector_size          MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_byte;

#else
#define IMPORT_VECTOR_BOILER_PLATE(VectorExtension) \
   using base_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::base_t; \
   using vector_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_t; \
   using vector_mask_t MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::mask_t; \
   using vector_base_t_granularity MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::granularity; \
   \
   using vector_element_count MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::element_count; \
   using vector_size_bit      MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_bit; \
   using vector_size_byte     MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_byte; \
   using vector_alignment     MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::alignment; \
   using vector_size          MSV_CXX_ATTRIBUTE_PPUNUSED = typename VectorExtension::vector_helper_t::size_byte;   
   
#endif //SVE


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
