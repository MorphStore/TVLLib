/**
 * @file io.h
 * @brief Brief description
 * @author Johannes Pietrzyk
 * @todo TODOS?
 */

#ifndef MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_IO_AVX2_H
#define MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_IO_AVX2_H

#include "../../../preprocessor.h"
#include "../extension_avx2.h"
#include "../../../primitives/io.h"

#include <functional>

namespace vectorlib {
   template<typename T, int IOGranularity>
   struct io<avx2<v256<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
         
         return _mm256_load_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t const *>(p_DataPtr));
      }
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< uint64_t > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
         
         _mm256_store_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
         
         return _mm256_load_ps(reinterpret_cast< U const * >(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< float > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
         
         _mm256_store_ps(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }
      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
         
         return _mm256_load_pd(reinterpret_cast< U const * >(p_DataPtr));
      }
     template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< double > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
         
         _mm256_store_pd(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }

   };

   template<typename T, int IOGranularity>
   struct io<avx2<v256<T>>,iov::STREAM, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
         
         return _mm256_stream_load_si128(reinterpret_cast<typename avx2< v256< U > >::vector_t const *>(p_DataPtr));
      }
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< int > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
         
         _mm256_stream_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return ;
      }
   };

   template<typename T, int IOGranularity>
   struct io<avx2<v256<T>>,iov::UNALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
         
         return _mm256_loadu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t const *>(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< int > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
         
          _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *> (p_DataPtr),p_vec);
          return;
      }
      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
         
         return _mm256_loadu_ps(reinterpret_cast< U const * >(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< float > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
         
         _mm256_storeu_ps(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }
      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
        
         return _mm256_loadu_pd(reinterpret_cast< U const * >(p_DataPtr));
      }
      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< double > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
        
         _mm256_storeu_pd(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }
      /*! This function compresses the data in a register according to a bitmask (all values with an according set bit will be packed at the beginning of the register), and stores it at a given address.
      * Note: This does not really compress, just shift the values we want to store to the lower bits.
      * If you need a real compress store, copy this code and change the used store-intrinsic to _mm256_maskstore* (and provide the according mask, of course).
      * This function will move to the vector lib someday.
      * @param outPtr The memory address where the vector should be stored
      * @param mask A bitmask with a bit set for every value which is goin to be stored
      * @param vector The 256-bit vector to be comprssed and stored
      */
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx2< v256< int > > ::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SIMD
         
          switch (mask){
            case 0: break;
            //                    case 0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            //                    case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 2: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            //                    case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 4: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
            case 5: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
            case 6: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            //                    case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 8: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
            case 9: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,156)); break;
            case 10: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,141)); break;
            case 11: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,180)); break;
            case 12: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
            case 13: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,120)); break;
            case 14: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
            case 15: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
         }
         return ;
      }
   };

   template<typename T>
   struct io<avx2<v256<T>>,iov::UNALIGNED, 64> {
      /*! This function compresses the data in a register according to a bitmask (all values with an according set bit will be packed at the beginning of the register), and stores it at a given address.
      * Note: This does not really compress, just shift the values we want to store to the lower bits.
      * If you need a real compress store, copy this code and change the used store-intrinsic to _mm256_maskstore* (and provide the according mask, of course).
      * This function will move to the vector lib someday.
      * @param outPtr The memory address where the vector should be stored
      * @param mask A bitmask with a bit set for every value which is goin to be stored
      * @param vector The 256-bit vector to be comprssed and stored
      */
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx2< v256< int > > ::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SIMD
         
          switch (mask){
            case 0: break;
            //                    case 0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            //                    case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            case 1: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 2: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            //                    case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            case 3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 4: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
            case 5: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
            case 6: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            //                    case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,228)); break;
            case 7: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 8: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
            case 9: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,156)); break;
            case 10: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,141)); break;
            case 11: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,180)); break;
            case 12: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
            case 13: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,120)); break;
            case 14: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
            case 15: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
         }
         return ;
      }
   };

   template<typename T>
   struct io<avx2<v256<T>>,iov::UNALIGNED, 32> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx2< v256< int > > ::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SIMD
         
         int matched = 1;

          switch (mask){
            case 0x00: break;
            case 0x01: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 0x03: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 0x07: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 0x0C: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            case 0x0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 0x1F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 0x30: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
            case 0x33: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
            case 0x3C: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            case 0x3F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 0x7F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            case 0xC0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
            case 0xC3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,156)); break;
            case 0xCC: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,141)); break;
            case 0xCF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,180)); break;
            case 0xF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
            case 0xF3: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,120)); break;
            case 0xFC: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            case 0xFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), p_vec); break;
            default: matched = 0; break;
         }
         if(matched == 0){
            while(mask != 0){
               if((mask & 0x1) == 0x1){
                  if(matched == 0){
                     matched = 1;
                     _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
                  }
                  p_DataPtr ++;
               }else{
                  matched = 0;
               }
               mask = (mask >> 1) & 0x7FFFFFFF;    //because of sign extention that might happen.
               __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
               __m256i srl64_m = _mm256_slli_epi64(srl64_q, 32);
               __m256i srl8_z = _mm256_srli_epi64(p_vec, 32);
               __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
               p_vec = _mm256_or_si256(srl64, srl8_z);
            }
         }
         return ;
      }
   };
   template<typename T>
      struct io<avx2<v256<T>>,iov::UNALIGNED, 16> {
         template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
         MSV_CXX_ATTRIBUTE_FORCE_INLINE
         static void
         compressstore( U * p_DataPtr,  avx2< v256< int > > ::vector_t p_vec, int mask ) {
            TALLY_IO_WRITE_RAN_SIMD
            
            int matched = 1;
            //mask error AGAIN?!
             switch (mask){
               case 0x0000: break;
               case 0x0001: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x0003: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x0007: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x000F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x001F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x003F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x007F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x00F0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
               case 0x00FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x01FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x03FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x07FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x0F00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
               case 0x0F0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,216)); break;
               case 0x0FF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
               case 0x0FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x1FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x3FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0x7FFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               case 0xF000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,147)); break;
               case 0xF00F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,156)); break;
               case 0xF0F0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,141)); break;
               case 0xF0FF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,180)); break;
               case 0xFF00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,78)); break;
               case 0xFF0F: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,120)); break;
               case 0xFFF0: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),_mm256_permute4x64_epi64(p_vec,57)); break;
               case 0xFFFF: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
               default: matched = 0; break;
            }
            if(matched == 0){
               while(mask != 0){
                  // std::cout << mask << std::endl;
                  if((mask & 0x1) == 0x1){
                     if(matched == 0){
                        matched = 1;
                        _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
                     }
                     p_DataPtr ++;
                  }else{
                     matched = 0;
                  }
                  mask = (mask >> 1) & 0x7FFFFFFF;    //shift mask
                  //shift p_vec
                  __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
                  __m256i srl64_m = _mm256_slli_epi64(srl64_q, 3*16);
                  __m256i srl8_z = _mm256_srli_epi64(p_vec, 1*16);
                  __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
                  p_vec = _mm256_or_si256(srl64, srl8_z);
               }
            }
            return ;
         }
      };


   template<typename T>
   struct io<avx2<v256<T>>,iov::UNALIGNED, 8> {
		template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
		MSV_CXX_ATTRIBUTE_FORCE_INLINE
		static void
		compressstore( U * p_DataPtr,  avx2< v256< uint8_t > > ::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SIMD
			
         int matched = 1;
         // std::cout <<"WAS ZUR HOELLE?!" << std::endl;
         // std::cout << mask << std::endl;
			switch (mask){
            case 0x0: break;
            case 0x00000001: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x00000003: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x00000007: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0000000f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0000001f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0000003f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0000007f: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x000000ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x000001ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x000003ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x000007ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x00000fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x00001fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x00003fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x00007fff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0000ff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            case 0x0000ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0001ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0003ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0007ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x000fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x001fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x003fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x007fffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x00ff0000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
            case 0x00ff00ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,216)); break;
            case 0x00ffff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            case 0x00ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x01ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x03ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x07ffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x0fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x1fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x3fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0x7fffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            case 0xff000000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,147)); break;
            case 0xff0000ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,159)); break;
            case 0xff00ff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,141)); break;
            case 0xff00ffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,180)); break;
            case 0xffff0000: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,78)); break;
            case 0xffff00ff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,120)); break;
            case 0xffffff00: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr), _mm256_permute4x64_epi64(p_vec,57)); break;
            case 0xffffffff: _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec); break;
            default: matched = 0; break;
         }
         //shifting over SSE Lanes: https://stackoverflow.com/questions/28664642/avx2-shift-16-bit-integers
         if(matched == 0){
            while(mask != 0){
               // std::cout << mask << std::endl;
               if((mask & 0x1) == 0x1){
                  if(matched == 0){
                     matched = 1;
                     _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
                  }
                  p_DataPtr ++;
               }else{
                  matched = 0;
               }
               mask = (mask >> 1) & 0x7FFFFFFF;    //shift mask
               //shift p_vec
               __m256i srl64_q = _mm256_permute4x64_epi64(p_vec, _MM_SHUFFLE(0,3,2,1));
               __m256i srl64_m = _mm256_slli_epi64(srl64_q, 7*8);
               __m256i srl8_z = _mm256_srli_epi64(p_vec, 1*8);
               __m256i srl64 = _mm256_and_si256(srl64_m, _mm256_set_epi64x(0, ~0, ~0, ~0));
               p_vec = _mm256_or_si256(srl64, srl8_z);
            }
         }
      return ;
      }
   };

   // template<typename T, int IOGranularity, int Scale>
   // struct gather_t<avx2<v256<T>>, IOGranularity, Scale> {
   //    //@todo we should actually provide a specialization (depending on the basetype) here!
   //    template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
   //    MSV_CXX_ATTRIBUTE_FORCE_INLINE
   //    static typename avx2< v256< U > >::vector_t
   //    apply( U const * const p_DataPtr,  avx2< v256< uint64_t > >::vector_t p_vec ) {
   //       trace( "[VECTOR] - Gather integer values into 256 Bit vector register." );
   //       return _mm256_i64gather_epi64( reinterpret_cast<const long long int *> (p_DataPtr), p_vec, Scale );
   //    }
   // };

   template<typename T>
   struct gather_t<avx2<v256<T>>, 64, 8> {
      //@todo we should actually provide a specialization (depending on the basetype) here!
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      apply( U const * const p_DataPtr,  avx2< v256< uint64_t > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SIMD
         
         return _mm256_i64gather_epi64( reinterpret_cast<const long long int *> (p_DataPtr), p_vec, 8 );
      }
   };

   template<typename T>
   struct gather_t<avx2<v256<T>>, 32, 4> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      apply( U const * const p_DataPtr,  avx2< v256< uint64_t > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SIMD
         
         return _mm256_i32gather_epi32( reinterpret_cast<const int *> (p_DataPtr), p_vec, 4 );
      }
   };

   template<typename T>
   struct gather_t<avx2<v256<T>>, 16, 2> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      apply( U const * const p_DataPtr,  avx2< v256< uint64_t > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SIMD
         
         __m256i p_vec_1 = _mm256_srli_epi32(p_vec, 16);
         __m256i p_vec_2 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 16),16);

         __m256i d_vec_1 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_1, 2);
         __m256i d_vec_2 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_2, 2);
         return _mm256_or_si256(
               _mm256_slli_epi32(d_vec_1, 16),
               _mm256_srli_epi32(_mm256_slli_epi64(d_vec_2, 16), 16)//ERROR?!
         );
      }
   };

   template<typename T>
   struct gather_t<avx2<v256<T>>, 8, 1> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      apply( U const * const p_DataPtr,  avx2< v256< uint64_t > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SIMD
         
         __m256i p_vec_1 = _mm256_srli_epi32(p_vec, 24);
         __m256i p_vec_2 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 8),24);
         __m256i p_vec_3 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 16),24);
         __m256i p_vec_4 = _mm256_srli_epi32(_mm256_slli_epi32(p_vec, 24),24);

         __m256i d_vec_1 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_1, 1);
         __m256i d_vec_2 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_2, 1);
         __m256i d_vec_3 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_3, 1);
         __m256i d_vec_4 = _mm256_i32gather_epi32(reinterpret_cast<const int *> (p_DataPtr), p_vec_4, 1);

         return
         _mm256_or_si256(
            _mm256_or_si256(
               _mm256_slli_epi32(d_vec_1, 24),
               _mm256_srli_epi32(_mm256_slli_epi32(d_vec_2, 24), 8)
            ),
            _mm256_or_si256(
               _mm256_srli_epi32(_mm256_slli_epi32(d_vec_3, 24), 16),
               _mm256_srli_epi32(_mm256_slli_epi32(d_vec_4, 24), 24)
            )
         );
      }
   };

   template<typename T, int IOGranularity>
   struct io<avx2<v256<T>>,iov::UNALIGNEDX, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx2< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SIMD
         
         return _mm256_lddqu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t const *>(p_DataPtr));
      }
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx2< v256< int > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SIMD
         
         _mm256_storeu_si256(reinterpret_cast<typename avx2< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }

   };

    //@todo we should actually provide a specialization (depending on the basetype) here!
    template<typename T, int IOGranularity, int Scale>
    struct gather_t<avx2<v128<T>>, IOGranularity, Scale> {
        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
        MSV_CXX_ATTRIBUTE_FORCE_INLINE
        static typename avx2< v128< U > >::vector_t
        apply( U const * const p_DataPtr,  avx2< v128< uint64_t > >::vector_t p_vec ) {
           TALLY_IO_LOAD_RAN_SIMD
         
            return _mm_i64gather_epi64( reinterpret_cast<const long long int *> (p_DataPtr), p_vec, Scale );

          }
    };
}

#endif //MORPHSTORE_VECTOR_SIMD_AVX2_PRIMITIVES_IO_AVX2_H
