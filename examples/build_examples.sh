#!/bin/bash

$CXX -DTSUBASA -Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -fno-vectorize -fno-slp-vectorize -save-temps -I/$TVL -target ve-linux -std=c++14 -o libtest libtest.cpp

$CXX -DTSUBASA -Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -fno-vectorize -fno-slp-vectorize -save-temps -I/$TVL -target ve-linux -std=c++14 -o aggregation_tsubasa aggregation_benchmark.cpp

$CXX -DAVX512 -DAVXTWO -DSSE -Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -fno-vectorize -fno-slp-vectorize -save-temps -I/$TVL -march=native -mavx512f -mavx2 -msse4.2 -std=c++14 -o aggregation_avx512 aggregation_benchmark.cpp 