# Welcome to the Template vector Library (TVL)!

This is a stand-alone version of the Template Vector Library. 
MorphStore still has an integrated version in the master branch and a TVL branch for testing purposes. This repository may be slightly behind either of these branches.
However, the plan is to use the code from this repository in MorphStore, too, in the not so distant future.

## Example usage

There is an example in aggregate.cpp, which demonstrates how to use the TVL.
The example simplements a simple aggregation. A few examples for different processing styles are given in the source code:
- scalar<v16<uint16_t>> Scalar with 16 bit base data
- sse<v128<uint64_t>> SSE with 128 bit registers and 64 bit base data
- avx2<v256<uint32_t>> AVX2 with 256 bit registers and 32 bit base data

## How to build

We recommend using g++ as a compiler, since it has proven to work well with partial template specialization. 

Scalar
g++ aggregate.cpp

SSE
g++ -DSSE -msse4.2 aggregate.cpp

AVX2
g++ -DAVXTWO -mavx2 aggregate.cpp  

AVX2 and AVX512 (tested as cross compilation for Xeon Phi)
g++ -DAVXTWO -DAVX512 -mavx2 -mavx512f -march=knl aggregate.cpp

ARM with NEON
g++ -DNEON -mcpu=cortex-a53 -flax-vector-conversions aggregate.cpp
*Note* Compiling for arm (especially for 32 bit cores) sometimes requires a few more flags specifying the architecture more precisely, e.g. -mfloat-abi=hard

Cross compile for ARM with NEON (tested for Cortex-A53, might work on your mobile)
/usr/bin/aarch64-linux-gnu-g++ -DNEON -mcpu=cortex-a53 -flax-vector-conversions aggregate.cpp 
*Note* This is where the compiler was installed in Ubuntu, it might be somewhere else on your system.
