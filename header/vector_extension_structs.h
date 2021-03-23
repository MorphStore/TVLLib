
#ifndef MORPHSTORE_VECTOR_EXTENSION_STRUCTS_H
#define MORPHSTORE_VECTOR_EXTENSION_STRUCTS_H

#include "general_vector_extension.h"

/// === 64 Bit ==================== ///
# ifdef SCALAR
# include "extension_scalar.h"
# endif

/// === 128 Bit =================== ///
#  ifdef SSE
#    include "extension_sse.h"
#  endif
# ifdef NEON
#   include "extension_neon.h"
# endif

/// === 256 Bit =================== ///
#  ifdef AVXTWO
#    include "extension_sse.h"
#    include "extension_avx2.h"
#  endif

/// === 512 Bit =================== ///
#  ifdef AVX512
#    include "extension_sse.h"
#    include "extension_avx2.h"
#    include "extension_avx512.h"
#  endif

/// === 16384 Bit // 16 kBit ====== ///
#  ifdef TSUBASA
#    include "extension_tsubasa.h"
#  endif

/// === 294,912 Bit // 288 kBit === ///
#  ifdef CUDA
#    include "extension_cuda.h"
#  endif



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
