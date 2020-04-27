//
// Created by jpietrzyk on 26.04.19.
//

#ifndef MORPHSTORE_VECTOR_PREPROCESSOR_H
#define MORPHSTORE_VECTOR_PREPROCESSOR_H

#define VECTORLIB_CXX_ATTRIBUTE_PPUNUSED __attribute__((unused))

#ifndef MSV_CXX_ATTRIBUTE_PPUNUSED
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_PPUNUSED __attribute__((unused))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_MALLOC
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_MALLOC __attribute__((malloc))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_ALLOC_SIZE
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_ALLOC_SIZE(X) __attribute__((alloc_size(X)))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_FORCE_INLINE
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_FORCE_INLINE inline __attribute__((always_inline))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_INLINE
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_INLINE inline
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_COLD
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_COLD __attribute__((cold))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_HOT
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_HOT __attribute__((hot))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_PURE
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_PURE __attribute__((pure))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_CONST
#  if defined(__clang__) || defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_CONST __attribute__((const))
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_LIKELY
#  if defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_LIKELY(x) __builtin_expect(!!(x), 1)
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_UNLIKELY
#  if defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_UNLIKELY(x) __builtin_expect(!!(x), 0)
#  endif
#endif

#ifndef MSV_CXX_ATTRIBUTE_ALIGNED
#  if defined(__GNUC__)
#     define MSV_CXX_ATTRIBUTE_ALIGNED(x) __attribute__((aligned(x)))
#  endif
#endif

#ifndef __THROW
#  define __THROW
#endif

/**
 * @brief This macro can be used to prevent the preprocessor from erroneously
 * interpreting a single argument in a macro call as two or more arguments,
 * which is the case when the argument contains a comma.
 * 
 * For instance, assume we have a macro `#define MY_MACRO(T) T myVar;`. Now
 * assume we call this macro as `MY_MACRO(std::tuple<int, bool>)`. The problem
 * is that the preprocessor sees two arguments: `std::tuple<int` and `bool>`,
 * since it is agnostic of C++ syntax such as the template brackets. To make
 * the preprocessor interpret it as a single argument, we have to write
 * `MY_MACRO(SINGLE_ARG(std::tuple<int, bool>))`.
 * 
 * Note that there are other ways to make the preprocessor see a single
 * argument, e.g. by using parentheses around the macro argument as in
 * `MY_MACRO((std::tuple<int, bool>))`. However, while this approach is fine
 * for values, it does not work with C++ types (at least not without further
 * effort).
 */
#define SINGLE_ARG(...) __VA_ARGS__

/**
 * @brief This macro produces a string literal of its arguments, whereby any
 * macros inside its arguments are already evaluated by the preprocessor.
 * 
 * For instance, assume we have the following macros
 * - `#define PRINT_NAME_1(ident) std::cout << #val << std::endl`
 * - `#define PRINT_NAME_2(ident) std::cout << STR_EVAL_MACROS(val) << std::endl`
 * - `#define MY_VAR myVar`
 * Then, `PRINT_NAME_1(MY_VAR)` will print `MY_VAR`, while
 * `PRINT_NAME_2(MY_VAR)` will print `myVar`.
 */
#define STR_EVAL_MACROS(...) #__VA_ARGS__



#endif //MORPHSTORE_VECTOR_PREPROCESSOR_H
