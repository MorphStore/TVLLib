#ifndef MORPHSTORE_VECTOR_PRIMITIVES_PRIMITIVES_H
#define MORPHSTORE_VECTOR_PRIMITIVES_PRIMITIVES_H


//Interface Includes
#include <header/vector_extension_structs.h>
#include <generated/primitives/calc.h>
#include <generated/primitives/compare.h>
#include <generated/primitives/create.h>
#include <generated/primitives/extract.h>
#include <generated/primitives/io.h>
#include <generated/primitives/logic.h>
#include <generated/primitives/manipulate.h>
#  undef EXTDIR

#ifdef AVX512
#  include <generated/avx512/primitives/calc_avx512.h>
#  include <generated/avx512/primitives/compare_avx512.h>
#  include <generated/avx512/primitives/create_avx512.h>
#  include <generated/avx512/primitives/extract_avx512.h>
#  include <generated/avx512/primitives/io_avx512.h>
 #  include <generated/avx512/primitives/logic_avx512.h>
 #  include <generated/avx512/primitives/manipulate_avx512.h>
#endif

#ifdef AVXTWO
#  include <generated/avx2/primitives/calc_avx2.h>
#  include <generated/avx2/primitives/compare_avx2.h>
#  include <generated/avx2/primitives/create_avx2.h>
 #  include <generated/avx2/primitives/extract_avx2.h>
#  include <generated/avx2/primitives/io_avx2.h>
#  include <generated/avx2/primitives/logic_avx2.h>
#  include <generated/avx2/primitives/manipulate_avx2.h>
#endif

#ifdef SSE
#  include <generated/sse/primitives/calc_sse.h>
#  include <generated/sse/primitives/compare_sse.h>
#  include <generated/sse/primitives/create_sse.h>
#  include <generated/sse/primitives/extract_sse.h>
#  include <generated/sse/primitives/io_sse.h>
#  include <generated/sse/primitives/logic_sse.h>
#  include <generated/sse/primitives/manipulate_sse.h>
#endif
#ifdef NEON
#  include <generated/neon/primitives/calc_neon.h>
#  include <generated/neon/primitives/compare_neon.h>
#  include <generated/neon/primitives/create_neon.h>
#  include <generated/neon/primitives/extract_neon.h>
#  include <generated/neon/primitives/io_neon.h>
#  include <generated/neon/primitives/logic_neon.h>
#  include <generated/neon/primitives/manipulate_neon.h>
#endif

#ifdef TSUBASA
#  include <generated/tsubasa/primitives/calc_tsubasa.h>
#  include <generated/tsubasa/primitives/compare_tsubasa.h>
#  include <generated/tsubasa/primitives/create_tsubasa.h>
#  include <generated/tsubasa/primitives/extract_tsubasa.h>
#  include <generated/tsubasa/primitives/io_tsubasa.h>
#  include <generated/tsubasa/primitives/logic_tsubasa.h>
#  include <generated/tsubasa/primitives/manipulate_tsubasa.h>
#endif

#ifdef SCALAR
#include <generated/scalar/primitives/calc_scalar.h>
#include <generated/scalar/primitives/compare_scalar.h>
#include <generated/scalar/primitives/create_scalar.h>
#include <generated/scalar/primitives/extract_scalar.h>
#include <generated/scalar/primitives/io_scalar.h>
#include <generated/scalar/primitives/logic_scalar.h>
#include <generated/scalar/primitives/manipulate_scalar.h>
#endif

#ifdef CUDA
#include <generated/cuda/primitives/calc_scalar.h>
#include <generated/cuda/primitives/compare_scalar.h>
#include <generated/cuda/primitives/create_scalar.h>
#include <generated/cuda/primitives/extract_scalar.h>
#include <generated/cuda/primitives/io_scalar.h>
#include <generated/cuda/primitives/logic_scalar.h>
#include <generated/cuda/primitives/manipulate_scalar.h>
#endif

//#undef EXTDIR


#endif //MORPHSTORE_VECTOR_PRIMITIVES_PRIMITIVES_H
