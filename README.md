**(24/03/2021) Readme UPDATE! Please read this, especially if you are migrating from the old interface. Any hints to unclear explanations are welcome.**

**Major UPDATE (18/03/2021):** 
- New default branch called *main*
- Old default branch renamed to *old_master*
- New folder structure
- Interfaces finally harmonized
- More base types and mask-primitives supported
- Added support for NEC SX Aurora Tsubasa
- Neon support temporarily not available (we are working on bringing it back)

**If you rely on the old interfaces or on the neon support, do not checkout the main branch. The old sources are available in the old\_master branch**

# Welcome to the Template Vector Library (TVL)!

This is a stand-alone version of the Template Vector Library. 
MorphStore still has an integrated version in the master branch and a TVL branch for testing purposes. This repository may be slightly behind either of these branches.
However, the plan is to use the code from this repository in MorphStore, too, in the not so distant future.

# What is this?
The TVL is a C++ library, which offers hardware-oblivious SIMD-programming. The mapping to a specific hardware is done at compile time depending on a template argument, which we call *processing style*. Currently we support the most popular Intel instruction sets (sse, avx2, and avx512) as well as the SX Aurora Tsubasa accelerator (intrinsic based backend). Experimental support for ARM AVE and an older version of the backend for ARM Neon can be found in the other branches.

We introduce hardware-oblivious types, i.e. vector_t for vector registers, base_t for the type of the base data, and mask_t for bitmasks. All operations, which are executed on vectors are functions, which we call *primitives*. We do not overwrite any standard operators. The *primitives* take the *processing style* as a template parameter. Bitmaks usually map to scalar values, which can be processed by normal c-style arithmetic. However, for the case that bitmasks do not fit into a scalar value anymore, i.e. when there are more than 64 values per vector, there are also a few primitives working on masks.

# Using the TVL

## Example Code
The following shows some example code, which we will use to explain the key components of the TVL.

```c++
1 #include <header/vector_extension_structs.h>
2 #include <header/vector_primitives.h>
3 // Optional includes go here
4 ...
5 ...
6 using processingStyle = avx512<v512<uint64_t>>;
7
8 //This brings some convenient access to constants, e.g. vector_base_t_granularity::value 
9 IMPORT_VECTOR_BOILER_PLATE(processingStyle) 
10
11 // Create two vectors v1 and v2 and broadcast something to initialize them using the set1 primitive.
12 vector_t v1= set1<processingStyle, vector_base_t_granularity::value>(1);
13 vector_t v2= set1<processingStyle, vector_base_t_granularity::value>(2);
14
15 //Call the add primitive
16 vector_t resultVec = add<processingStyle, vector_base_t_granularity::value>(v1, v2);
17 ...
```
## Include Files
Include the files *"header/vector_extension_structs.h"* (line 1) and *"generated/\<isa\>/primitives/\<primitive_class\>_\<isa\>.h"* as well as the according primitive interface, and you are ready to use each included primitive. 
For convenience, there is a header file *header/vector_primitives.h*, which already includes all interfaces and primitive backends (line 2).

## Processing Styles
A *processing style* is a nested template parameter, which defines the instruction set, the vector size, and the type of the data elements. For instance, in the *processing style* avx512<v512<uint64_t>> (line 6), the instruction set is AVX512, the vector registers are 512 bit wide (note that AVX512 can also deal with smaller registers), and the base data is made of unsigned 64-bit integers.

In line 9, a boiler plate is imported to facilitate the access of compile time constants, which depend on the processing style.

You can use different processig styles with different instruction sets, even in the same compilation unit. But be aware that the convenient access of the boiler plate constants only work for one processing style at a time. You can, however (a) access them directly but with ugly syntax, e.g. *processingStyle::vector_helper_t::granularity::value* or (b) use a prefix when importing the boiler plate and using the constants (see header/vector_extension_structs.h l.45-54).

## Primitives
Primitives are the functions, which process vector types or mask types. A processing style is always the first template parameter required by a primitive. Additional template parameters may be defined if necessary. 
In the example, two different primitives are used: *set1* and *add*. *Set1* (line 12 and 13) creates a new vector and broadcasts a scalar value to all vectr elements for initialization. *Add* (line 16) sums up two vectors element-wise and stores the result in a third vector.

### Calling a Primitive

As already explained, the primitives take the processing style as their first template parameter. But most primitives require more template parameters. The *set1* and *add*-primitive require the granularity of the operation, e.g. if an addition is supposed to be done 32-bit-wise or 64-bit-wise. In most cases, this granularity matches the size of the base type and the compile time constant *vector_base_t_granularity::value* can be used. The granularity is the most common additonal template parameter in the TVL. 

There are two ways to call a primitive:

1) Using the convenience function as in the example code.
2) Call the apply function of the primitive struct, e.g. add_t<processingStyle, vector_base_t_granularity::value>::apply(v1, v2);

The first option leads to more readable code while the second option tends to show nicer compiler errors. The call of the convenience function is force inlined. Thus, there is no runtime difference between the two options.

For the exact definition of the interfaces, please refer to the according header (*generated/primitives/\<primitives class\>.h*).

### Primitive Classes

All primitives are categorized according to their usage, i.e. L/S-primitives access the main memory, and calc-primitives do some kind of arithmetics.
In the current version of the TVL, the foolowing primitives are available:

**Load/Store Primitives**
- Load, Store
- Gather
- Compresstore: like mask-store but without leaving spaces between the masked elements

Note that the Load/Store primitives require a hint on the alignment of the data as a second template parameter (the first one being the processing style and the third one being the granularity). For all supported processing styles, you can choose from *vectorlib::iov::UNALIGNED* and *vectorlib::iov::ALIGNED*.

**Calc Primitives**
- Add, Sub, Div
- Hadd: horizontal add, adds all elemnts of a vector
- Mul: known issue for 64-bit base data using sse or avx2: there is no native support for 64 bit input, thus the lowest 32 bit are multiplied and stored in a 64 bit value
- Shift_left, Shift_right (within lane boundaries)
- Shift_left_individual, Shift_right_individual (within lane boundaries but by different distances)
- Mod
- Shift_left_mask: necessary for large masks, i.e. for supporting the SX Aurora Tsubasa
 
**Compare Primitives**
- Equal, less, greater, greaterequal, lessequal
- Count_matches (population count on masks)
- Is_zero: Returns a numeric value describing a mask, i.e. if a mask is 0, a 0 is returned, otherwise a non-zero value is returned. This is necessary for supporting masks larger than a scalar value.
- Ctz_mask: Count trailing zeros of a mask
- Equal_mask: test two masks for equality
 
**Create Primitives**
- Init_mask: Initializes a mask with 0
- Set_sequence: Initializes a vector with a sequence of numbers
- Set1: Broadcasts a value to initialize a vector
 
**Extract Primitives**
- Extract_value: The extract a value from a vector at a given index
 
**Logic Primitives**
- Bitwise_and, bitwise_or
- Bitwise_and_mask, bitwise_or_mask
 
**Manipulate Primitives**
- Set_to_value_mask: Changes the value of a mask

Note that the set of primitives in the old master branch was slightly different. We chose to include the ones we actually use for this first version with the new interface. If you miss any of them, please reach out to us, so we know how to set our priorities.

## Switching to the new interface

To create this new version of the TVL, we used a Code generator (https://github.com/MorphStore/TVLLibGenerator). It harmonized the interfaces, such that each primitive is a struct with a name suffix, e.g. *add_t*, which has an apply function. Additionally, there is a convenience function, e.g. *add(..)*, which calls the apply function. Thus, if you are coming from an older TVL version and decided to use the generated code, you might have to refactor you existing code to the partially new interface, i.e. delete any direct calls of the apply function, or add the *_t*-suffix. 

If you are deperately missing a primitive, please let us know (open an issue or send us a message).

Again: SVE and NEON are not ported, yet. Please use the old TVL if you use these ISAs.

Cuda is still a work in progress but it starts to finally not be dead slow anymore. We are still on this! The type mappings already exist, feel free to experiment on your own.

# Supported Instruction Sets
For supporting an instruction set, not only the implementation of the primitives is necessary, but also a mapping of the instruction specific data types, i.e. masks and vector registers. At the moment, this mapping exists for the following instruction sets:
- All: Scalar
- Intel: SSE, AVX2, AVX512
- ARM: NEON, SVE **We did not update the ARM backends to the new interface, yet, but you can still use the old one. You can find a hard-coded prototype backend for SVE in the branch "simd-arm_sve". The neon backend can be found in the "old_master" branch.)**
- NEC: Tsubasa SX Aurora
- GPU: CUDA **Highly experimental, most primitive backends are still missing.**

All mappings can be found in *header/extension_\<isa\>.h*.
You are, however, welcome to contribute the mappings for other instruction sets.

# Build and Link
There are 3 things necessary for a successful build process:
1. Compile with the according flags required for all instruction sets, you are using.
2. Include a flag for each instruction set the TVL will be using (DSCALAR, DSSE, DAVXTWO, DAVX512, DTSUBASA, DCUDA, or DNEON). This ensures that only the necessary headers are included. This sounds redundant to point 1, but it prevents you from getting compile errors if you are crazy enough to mix native vector code with TVL code that works with another ISA.
3. Link the directory, which contains the *header* and *generated* folders.

A simple way to build with support for avx2, sse, and scalar, with g++ is the following line:

*g++ -DAVXTWO -DSSE -DSCALAR -mavx2 -msse4.2 -I/$TVL -o \<NameOfTheBinary\> \<YourSouceFile\>.cpp*

where *TVLLibGenerator* is the folder containing the *header* and *generated* folders.

Note that that this can produce "unused parameter"-warning depending on the processing style you use. This is not critical and can be switched off uding the *-Wno-unused-parameter*-flag.

## Building the examples
Examples can be found in the *examples* folder. The script *build_examples.sh* builds all of them and requires an environment variable *TVL*, which contains the path to the TVL, i.e. the folder containing the *header* and *generated* folders. Usually, this is simply the TVLLIBGenerator root folder. It also expects that your compiler, usually g++, is given in the environment variable *CXX*. This is often already set as it is also convenient for other workflows, e.g. when using cmake.
Currently, the examples use AVX512 and the NEC Tsubasa vector engine.

**Some build flags in build_examples.sh are specific to the nvcc compiler. If you use another compiler, e.g. g++, you might get "unknown flag"-compiler errors. This can usually be resolved by deleting the according flags.**

### Example 1: libtest
This example tests if the TVL is working at all, and provides an example for the basic use of TVL primitives. In detail, the following steps are performed:
1. A processing style is set and the according boiler plate is imported for more convenience.
2. The values *1* and *2* are broadcasted into two vector registers. 
3. The two registers are added element-wise.
4. The the elements of the vector resulting from step 3 are added. The result is a scalar value.
5. The vector containg the value *1* is subtracted from the vector result from step 3. Then, the elements of this result are added. The result is a scalar value.
6. Repeat step 5, but do a multiplication instead.
7. Repeat step 5, but do a division instead.
8. The results from steps 4-7 are printed. They depend on the vector size. 

The reslts from step 4,6, and 7 should be the same. The result from step 5 should be reduced by the amount of vector elements of the used backend, e.g. reduced by *1* for a scalar processing style.

For Example, the result for AVX2 with 256 bit vectors and 64 bit elements (avx2<v256<uint64_t>>) should be the following:

```
Test started...
 done.
 Result 1 (add): 12
done.
 Result 2 (sub): 8
done.
 Result 3 (mul): 12
done.
 Result 4 (div): 12
```

Unlike **Example 2**, libtest hardcodes the processing style, i.e. you have to change it during development. However, this is easily done by including the corresponding isa-header file and changing the used processing style. Some examples are already shown as comments in the code.

### Example 2: Aggregation benchmark
This example performs an aggregation on randomly generated integer data (around 200 MB) and measures the elapsed time (excluding data generation). This example shows how to easily implement a solution for different targets without changing the actual operator code, but only the definition of the processing style. Depending on the compiler flag (see *build\_examples.sh*), the benchmark is built either for AVX512, or for the NEC Tsubasa vector engine.
This example can also serve as a quick way to get a first impression of the performance of different backends. It can easily be adapted to different backends, because only 3 primitives are used: load (io class), add (calc class), and hadd (calc class). 
Note that the performance may significantly vary depending on the amount of values and the vector register size, especially for small amounts. One reason is that small amounts fit in the cache (the exact amount depends on your system). The other reason is that any rest, which does not fill a vector register anymore, is processed in a scalar way. 

## Known issues
The following issues can arise when using the generated TVL:  
- Depending on the instruction set you are using, not all parameters are required for each implementation. To disable the according warning when compiling using g++, you may use the flag *-Wno-unused-parameter*.
- Compiler Error *"No such file or directory"*. If this is thrown from *vector\_primitives.h*, a primitive class has either no interface (*generated/primitives/\**), or no backend for the system you are trying to build for (*generated/\<isa\>/primitives/\**).  
  - Quick fix: Comment out the according lines in *vector\_primitives.h*. This will work as long as you are not actually using a non-existent primitive, e.g. when using the provided examples.  
  - Long fix: Implement the according interface and/or backend, e.g. when you introduce a new backend or primitive (class).  
- Compiler error: *reference is ambiguous*. Depending on other libraries you include, some primitive names might already be used for something else. Now, the compiler is confused and doesn't know which one to take. Resovle this by providing the namespace, e.g. *vectorlib::div* instead of *div* .

# Only for users of the old_master branch

There is an example in aggregate.cpp, which demonstrates how to use the TVL.
The example implements a simple aggregation. A few examples for different processing styles are given in the source code:
- scalar<v16<uint16_t>> Scalar with 16 bit base data
- sse<v128<uint64_t>> SSE with 128 bit registers and 64 bit base data
- avx2<v256<uint32_t>> AVX2 with 256 bit registers and 32 bit base data

## How to build

We recommend using g++ as a compiler, since it has proven to work well with partial template specialization. 

### Scalar
g++ aggregate.cpp

### SSE

g++ -DSSE -msse4.2 aggregate.cpp

### AVX2

g++ -DAVXTWO -mavx2 aggregate.cpp  

### AVX2 and AVX512 (tested as cross compilation for Xeon Phi)

g++ -DAVXTWO -DAVX512 -mavx2 -mavx512f -march=knl aggregate.cpp

### ARM with NEON (Here: Cortex A53)

g++ -DNEON -mcpu=cortex-a53 -mfpu=neon -flax-vector-conversions aggregate.cpp

**Note** Compiling for arm (especially for 32 bit cores) sometimes requires a few more flags specifying the architecture more precisely, e.g. -mfloat-abi=hard.

#### Cross compile for ARM with NEON (tested for Cortex-A53, might also work on your mobile)

/usr/bin/aarch64-linux-gnu-g++ -DNEON -mcpu=cortex-a53 -mfpu=neon -flax-vector-conversions aggregate.cpp 

**Note** This is where the compiler was installed in Ubuntu, it might be somewhere else on your system.
