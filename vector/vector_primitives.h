#ifndef MORPHSTORE_VECTOR_PRIMITIVES_H
#define MORPHSTORE_VECTOR_PRIMITIVES_H


#include "tally.h"

//Interface Includes
#include "vector_extension_structs.h"
#include "primitives/calc.h"
#include "primitives/compare.h"
#include "primitives/create.h"
#include "primitives/extract.h"
#include "primitives/io.h"
#include "primitives/logic.h"
#include "primitives/manipulate.h"
//#  undef EXTDIR

#ifdef AVX512
#  include "simd/avx512/primitives/calc_avx512.h"
#  include "simd/avx512/primitives/compare_avx512.h"
#  include "simd/avx512/primitives/create_avx512.h"
#  include "simd/avx512/primitives/extract_avx512.h"
#  include "simd/avx512/primitives/io_avx512.h"
#  include "simd/avx512/primitives/logic_avx512.h"
#  include "simd/avx512/primitives/manipulate_avx512.h"
#endif

#ifdef AVXTWO
#  include "simd/avx2/primitives/calc_avx2.h"
#  include "simd/avx2/primitives/compare_avx2.h"
#  include "simd/avx2/primitives/create_avx2.h"
#  include "simd/avx2/primitives/extract_avx2.h"
#  include "simd/avx2/primitives/io_avx2.h"
#  include "simd/avx2/primitives/logic_avx2.h"
#  include "simd/avx2/primitives/manipulate_avx2.h"
#endif

#ifdef SSE
#  include "simd/sse/primitives/calc_sse.h"
#  include "simd/sse/primitives/compare_sse.h"
#  include "simd/sse/primitives/create_sse.h"
#  include "simd/sse/primitives/extract_sse.h"
#  include "simd/sse/primitives/io_sse.h"
#  include "simd/sse/primitives/logic_sse.h"
#  include "simd/sse/primitives/manipulate_sse.h"
#endif

#ifdef NEON
#  include "simd/neon/primitives/calc_neon.h"
#  include "simd/neon/primitives/compare_neon.h"
#  include "simd/neon/primitives/create_neon.h"
#  include "simd/neon/primitives/extract_neon.h"
#  include "simd/neon/primitives/io_neon.h"
#  include "simd/neon/primitives/logic_neon.h"
#  include "simd/neon/primitives/manipulate_neon.h"
#endif

#include "scalar/primitives/calc_scalar.h"
#include "scalar/primitives/compare_scalar.h"
#include "scalar/primitives/create_scalar.h"
#include "scalar/primitives/extract_scalar.h"
#include "scalar/primitives/io_scalar.h"
#include "scalar/primitives/logic_scalar.h"
#include "scalar/primitives/manipulate_scalar.h"
//#undef EXTDIR


#endif //MORPHSTORE_VECTOR_PRIMITIVES_PRIMITIVES_H
