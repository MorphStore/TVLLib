SSE
g++ -DSSE -msse4.2 aggregate.cpp

AVX2
g++ -DAVXTWO -mavx2 aggregate.cpp  

AVX2 and AVX512 (cross compile)
g++ -DAVXTWO -DAVX512 -mavx2 -mavx512f -march=knl aggregate.cpp

Cross compile for ARM
/usr/bin/aarch64-linux-gnu-g++ -DNEON -mcpu=cortex-a53 -flax-vector-conversions aggregate.cpp                                                                