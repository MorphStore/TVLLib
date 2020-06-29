/* 
 * File:   predicate_build_sve.h
 * Author: André Berthold
 *
 * Created on 22. Mai 2020, 18:47
 */

#ifdef __ARM_FEATURE_SVE
#ifndef MORPHSTORE_VECTOR_SIMD_SVE_PREDICATE_BUILD_SVE_H
#define MORPHSTORE_VECTOR_SIMD_SVE_PREDICATE_BUILD_SVE_H

#include <arm_sve.h>

template<typename T>//select different svbool_t instances for different base_t-sizes
struct svptrue_select{
   template<typename U=T, typename std::enable_if<sizeof(U) == 1, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_b8();
   }
   
   template<typename U=T, typename std::enable_if<sizeof(U) == 2, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_b16();
   }
   
   template<typename U=T, typename std::enable_if<sizeof(U) == 4, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_b32();
   }
  
   template<typename U=T, typename std::enable_if<sizeof(U) == 8, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_b64();
   }
};


template<typename T, svpattern SV_PAT>//select different svbool_t instances for different base_t-sizes
struct svptrue_pat_select{
   template<typename U=T, typename std::enable_if<sizeof(U) == 1, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_pat_b8(SV_PAT);
   }
   
   template<typename U=T, typename std::enable_if<sizeof(U) == 2, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_pat_b16(SV_PAT);
   }
   
   template<typename U=T, typename std::enable_if<sizeof(U) == 4, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_pat_b32(SV_PAT);
   }
  
   template<typename U=T, typename std::enable_if<sizeof(U) == 8, int>::type = 0>
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static svbool_t get(){
      return svptrue_pat_b64(SV_PAT);
   }
};
   
   
   
#endif /*MORPHSTORE_VECTOR_SIMD_SVE_PREDICATE_BUILD_SVE_H*/
#else
static_assert(false, "Error: use of SVE predicate build features is only possible if arm sve features are available");
#endif
