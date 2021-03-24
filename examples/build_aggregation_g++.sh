#!/bin/bash

if [[ ! "$(dirname $0)" == "." ]]; then
  echo "Please run this script inside the examples folder. Exiting."
  exit 1
fi

if [ -z "$CXX" ]; then
  CXX="g++"
fi

COMPILER_FLAGS="-Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -fno-tree-vectorize -save-temps -std=c++14 -I../"

mkdir -p ../build
cd ../build/
echo "Build scalar version"
$CXX $COMPILER_FLAGS -o aggregation_benchmark_scalar ../examples/aggregation_benchmark_2.cpp

echo -e "\n\nBuild sse version"
$CXX $COMPILER_FLAGS -o aggregation_benchmark_sse -DSSE -msse4.2 ../examples/aggregation_benchmark_2.cpp

echo -e "\n\nBuild avx2 version"
$CXX $COMPILER_FLAGS -o aggregation_benchmark_sse -DAVXTWO -mavx2 ../examples/aggregation_benchmark_2.cpp

echo -e "\n\nBuild avx512 version"
$CXX $COMPILER_FLAGS -o aggregation_benchmark_sse -DAVX512 -mavx2 -mavx512f -march=native ../examples/aggregation_benchmark_2.cpp


cd ../examples/
