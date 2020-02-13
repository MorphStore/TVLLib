/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   io_neon.h
 * Author: Annett
 *
 * Created on 1. August 2019, 15:57
 */

#ifndef IO_NEON_H
#define IO_NEON_H

#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/io.h"

#include <functional>


namespace vectorlib {

    //! NOTE: For NEON, there are no dedicated intrinsics for unaligned/aligned/stream load and store 
    
   template<typename T, int IOGranularity>
   struct io<neon<v128<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::vector_t
      load( U const * const p_DataPtr ) {
         
         return vld1q_u64(p_DataPtr);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, neon< v128< int > >::vector_t p_vec ) {
         
         vst1q_u64(p_DataPtr,p_vec);
         return;
      }
     };

   template<typename T, int IOGranularity>
   struct io<neon<v128<T>>,iov::STREAM, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::vector_t
      load( U const * const p_DataPtr ) {
         
         return vld1q_u64(p_DataPtr);
      }
      
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      static void
      store( U * p_DataPtr, neon< v128< int > >::vector_t p_vec ) {
         
         vst1q_u64(p_DataPtr,p_vec);
         return;
      }
      

        
   };

   template<typename T, int IOGranularity>
   struct io<neon<v128<T>>,iov::UNALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::vector_t
      load( U const * const p_DataPtr ) {
         
         return vld1q_u64(p_DataPtr);
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      static void
      store( U * p_DataPtr, neon< v128< int > >::vector_t p_vec ) {
         
         vst1q_u64(p_DataPtr,p_vec);
         return;
      }
            
      
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  typename neon< v128< U > >::vector_t p_vec, int mask ) {
            
         switch (mask){
             case 0:    return; //store nothing
             case 1:    vst1q_lane_u64(p_DataPtr,p_vec,0);//store 1st lane
                        return; 
             case 2:    vst1q_lane_u64(p_DataPtr,p_vec,1);//store 2nd lane
                        return;
             case 3:    vst1q_u64(p_DataPtr,p_vec); //store everything
                        return; 
         }       
         
         return ;
      }
      
   };

   template<typename T, int IOGranularity, int Scale>
   struct gather_t<neon<v128<T>>, IOGranularity, Scale> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::vector_t
      apply( U const * const p_DataPtr,  neon< v128< uint64_t > >::vector_t p_vec ) {
         
         neon< v128< uint64_t > >::vector_t vec = vmovq_n_u64(0);
         vec = vsetq_lane_u64(*reinterpret_cast<U const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + vgetq_lane_u64(p_vec,0) * Scale),vec,0);
         vec = vsetq_lane_u64(*reinterpret_cast<U const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + vgetq_lane_u64(p_vec,1) * Scale),vec,1);
         return vec;
        // return _mm256_i64gather_epi64( reinterpret_cast<typename avx2< v256< int > >::vector_t const *> (p_DataPtr), p_vec, sizeof(uint64_t));
         
      }

   };
  
}


#endif /* IO_NEON_H */

