/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_IO_AVX512_H
#define MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_IO_AVX512_H

#include "../../../preprocessor.h"
#include "../extension_avx512.h"
#include "../../../primitives/io.h"

#include <functional>

namespace vectorlib {

   template<typename T, int IOGranularity>
   struct io<avx512<v512<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm512_load_si512(/*reinterpret_cast<typename avx512< v512< U > >::vector_t const *>*/( void * )(p_DataPtr));
      }
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx512< v512< int > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_store_si512(/*reinterpret_cast<typename avx512< v512< U > >::vector_t const *>*/( void * )(p_DataPtr),p_vec);
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm512_load_ps(reinterpret_cast< U const * >(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr , avx512< v512< float > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_store_ps(( void * )(p_DataPtr),p_vec);
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm512_load_pd(reinterpret_cast< U const * >(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr,  avx512< v512< double > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_store_pd(( void * )(p_DataPtr), p_vec);
         return;
      }



   };

   template<typename T, int IOGranularity>
   struct io<avx512<v512<T>>,iov::STREAM, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm512_stream_load_si512(reinterpret_cast<typename avx512< v512< U > >::vector_t const *>(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U const * const p_DataPtr,  avx512< v512< int > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_stream_si512((void *)p_DataPtr, p_vec);
         return ;
      }


   };

   template<typename T, int IOGranularity>
   struct io<avx512<v512<T>>,iov::UNALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm512_loadu_si512(reinterpret_cast<typename avx512< v512< U > >::vector_t const *>(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr,  avx512< v512< int > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_storeu_si512((void *)p_DataPtr, p_vec);
         return ;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx512< v512< int > >::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
         
         _mm512_mask_compressstoreu_epi64((void *)p_DataPtr, mask,p_vec);
         return ;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm_loadu_ps(reinterpret_cast< U const * >(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr,  avx512< v512< float > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_storeu_ps((void *)p_DataPtr, p_vec);
         return ;
      }

      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm_loadu_pd(reinterpret_cast< U const * >(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx512< v512< double > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_storeu_pd((void *)p_DataPtr, p_vec);
         return ;
      }

   };

   template<typename T>
   struct io<avx512<v512<T>>,iov::UNALIGNED, 64> {
   template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static void
   compressstore( U * p_DataPtr,  avx512< v512< int > >::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
      
      _mm512_mask_compressstoreu_epi64((void *)p_DataPtr, mask,p_vec);
      return ;
   }};
   template<typename T>
   struct io<avx512<v512<T>>,iov::UNALIGNED, 32> {
   template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static void
   compressstore( U * p_DataPtr,  avx512< v512< int > >::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
      
      _mm512_mask_compressstoreu_epi32((void *)p_DataPtr, mask,p_vec);
      return ;
   }};
   template<typename T>
   struct io<avx512<v512<T>>,iov::UNALIGNED, 16> {
   template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static void
   compressstore( U * p_DataPtr,  avx512< v512< int > >::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
      
      _mm512_mask_compressstoreu_epi16((void *)p_DataPtr, mask,p_vec);
      return ;
   }};
   template<typename T>
   struct io<avx512<v512<T>>,iov::UNALIGNED, 8> {
   template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
   MSV_CXX_ATTRIBUTE_FORCE_INLINE
   static void
   compressstore( U * p_DataPtr,  avx512< v512< int > >::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
      
      _mm512_mask_compressstoreu_epi8((void *)p_DataPtr, mask,p_vec);
      return ;
   }};

   template<typename T>
   struct gather_t<avx512<v512<T>>, 64, 8> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      apply( U const * const p_DataPtr,  avx512< v512< uint64_t > >::vector_t p_vec ) {
#if tally
io_load_ran_simd += 1;
#endif
      
         return _mm512_i64gather_epi64( p_vec,reinterpret_cast<typename avx512< v512< int > >::vector_t const *> (p_DataPtr), 8);
      }
   };

   template<typename T>
   struct gather_t<avx512<v512<T>>, 32, 4> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      apply( U const * const p_DataPtr,  avx512< v512< uint64_t > >::vector_t p_vec ) {
#if tally
io_load_ran_simd += 1;
#endif
         
         return _mm512_i32gather_epi32( p_vec,reinterpret_cast<typename avx512< v512< int > >::vector_t const *> (p_DataPtr), 4);
      }
   };

   template<typename T>
   struct gather_t<avx512<v512<T>>, 16, 2> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      apply( U const * const p_DataPtr,  avx512< v512< uint64_t > >::vector_t p_vec ) {
#if tally
io_load_ran_simd += 1;
#endif
         
         __m512i p_vec_1 = _mm512_srli_epi32(p_vec, 16);
         __m512i p_vec_2 = _mm512_srli_epi32(_mm512_slli_epi32(p_vec, 16), 16);

         __m512i d_vec_1 = _mm512_i32gather_epi32( p_vec_1, reinterpret_cast<typename avx512< v512< int > >::vector_t const *> (p_DataPtr), 2);
         __m512i d_vec_2 = _mm512_i32gather_epi32( p_vec_2, reinterpret_cast<typename avx512< v512< int > >::vector_t const *> (p_DataPtr), 2);

         return _mm512_or_si512(
            _mm512_slli_epi32(d_vec_1, 16),
            _mm512_srli_epi32(_mm512_slli_epi32(d_vec_2, 16), 16)
         );
      }
   };

   template<typename T>
   struct gather_t<avx512<v512<T>>, 8, 1> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      apply( U const * const p_DataPtr,  avx512< v512< uint64_t > >::vector_t p_vec ) {
#if tally
io_load_ran_simd += 1;
#endif
         
         __m512i p_vec_1 = _mm512_srli_epi32(p_vec, 24);
         __m512i p_vec_2 = _mm512_srli_epi32(_mm512_slli_epi32(p_vec, 8),24);
         __m512i p_vec_3 = _mm512_srli_epi32(_mm512_slli_epi32(p_vec, 16),24);
         __m512i p_vec_4 = _mm512_srli_epi32(_mm512_slli_epi32(p_vec, 24),24);

         __m512i d_vec_1 = _mm512_i32gather_epi32(p_vec_1, reinterpret_cast<const int *> (p_DataPtr), 1);
         __m512i d_vec_2 = _mm512_i32gather_epi32(p_vec_2, reinterpret_cast<const int *> (p_DataPtr), 1);
         __m512i d_vec_3 = _mm512_i32gather_epi32(p_vec_3, reinterpret_cast<const int *> (p_DataPtr), 1);
         __m512i d_vec_4 = _mm512_i32gather_epi32(p_vec_4, reinterpret_cast<const int *> (p_DataPtr), 1);

         return
         _mm512_or_si512(
            _mm512_or_si512(
               _mm512_slli_epi32(d_vec_1, 24),
               _mm512_srli_epi32(_mm512_slli_epi32(d_vec_2, 24), 8)
            ),
            _mm512_or_si512(
               _mm512_srli_epi32(_mm512_slli_epi32(d_vec_3, 24), 16),
               _mm512_srli_epi32(_mm512_slli_epi32(d_vec_4, 24), 24)
            )
         );

      }
   };


   template<typename T, int IOGranularity>
   struct io<avx512<v512<T>>,iov::UNALIGNEDX, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v512< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm512_loadu_si512(reinterpret_cast<typename avx512< v512< U > >::vector_t const *>(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr,  avx512< v512< int > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm512_storeu_si512((void *)p_DataPtr, p_vec);
         return ;
      }


   };

    template<typename T>
    struct io<avx512<v256<T>>,iov::UNALIGNED, 64> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx512< v256< int > > ::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
         
         _mm256_mask_compressstoreu_epi64((void *)p_DataPtr,mask, p_vec);
         return ;
      }
    };
    template<typename T>
    struct io<avx512<v256<T>>,iov::UNALIGNED, 32> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx512< v256< int > > ::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
         
         _mm256_mask_compressstoreu_epi32((void *)p_DataPtr,mask, p_vec);
         return ;
      }
    };
    template<typename T>
    struct io<avx512<v256<T>>,iov::UNALIGNED, 16> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx512< v256< int > > ::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
         
         _mm256_mask_compressstoreu_epi16((void *)p_DataPtr,mask, p_vec);
         return ;
      }
    };
    template<typename T>
    struct io<avx512<v256<T>>,iov::UNALIGNED, 8> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  avx512< v256< int > > ::vector_t p_vec, int mask ) {
#if tally
io_write_ran_simd += 1;
#endif
         
         _mm256_mask_compressstoreu_epi8((void *)p_DataPtr,mask, p_vec);
         return ;
      }
    };


    template<typename T, int IOGranularity>
    struct io<avx512<v256<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v256< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm256_load_si256(reinterpret_cast<typename avx512< v256< U > >::vector_t const *>(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx512< v256< int > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm256_store_si256(reinterpret_cast<typename avx512< v256< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }
    };


    template<typename T, int IOGranularity>
    struct io<avx512<v128<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename avx512< v128< U > >::vector_t
      load( U const * const p_DataPtr ) {
#if tally
io_load_seq_simd += 1;
#endif
         
         return _mm_load_si128(reinterpret_cast<typename avx512< v128< U > >::vector_t const *>(p_DataPtr));
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, avx512< v128< int > >::vector_t p_vec ) {
#if tally
io_write_seq_simd += 1;
#endif
         
         _mm_store_si128(reinterpret_cast<typename avx512< v128< U > >::vector_t *>(p_DataPtr),p_vec);
         return;
      }
    };


}

#endif /* MORPHSTORE_VECTOR_SIMD_AVX512_PRIMITIVES_IO_AVX512_H */
