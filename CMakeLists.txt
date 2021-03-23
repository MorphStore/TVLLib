cmake_minimum_required( VERSION 3.10 )
project( TVL CXX )

set( CMAKE_CXX_STANDARD 14 )

include_directories( ${PROJECT_SOURCE_DIR} )


add_executable( aggregation_benchmark_scalar   examples/aggregation_benchmark.cpp )
add_executable( aggregation_benchmark_sse     examples/aggregation_benchmark.cpp )
add_executable( aggregation_benchmark_avx2     examples/aggregation_benchmark.cpp )
add_executable( aggregation_benchmark_avx512   examples/aggregation_benchmark.cpp )

set(COMPILER_FLAGS -Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -fno-tree-vectorize -save-temps)


target_compile_options( aggregation_benchmark_sse     PRIVATE  -DSSE -msse4.2 ${COMPILER_FLAGS})
target_compile_options( aggregation_benchmark_avx2    PRIVATE  -DAVXTWO -mavx2 ${COMPILER_FLAGS})
target_compile_options( aggregation_benchmark_avx512  PRIVATE  -DAVX512 -mavx2 -mavx512f -march=knl  ${COMPILER_FLAGS})


