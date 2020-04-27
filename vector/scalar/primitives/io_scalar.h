/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   io.h
 * Author: Annett
 *
 * Created on 21. Mai 2019, 12:17
 */

#ifndef IO_SCALAR_H
#define IO_SCALAR_H


#include "../../preprocessor.h"
#include "../extension_scalar.h"
#include "../../primitives/io.h"

#include <functional>

namespace vectorlib {


   template<typename T, int IOGranularity>
   struct io<scalar<v64<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U *& p_DataPtr, typename vectorlib::scalar<v64< U > >::vector_t & p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         *p_DataPtr=p_vec;
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_same< double, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, vectorlib::scalar<v64< double > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         *p_DataPtr=p_vec;
         return;
      }

   };

   template<typename T, int IOGranularity, int Scale>
   struct gather_t<scalar<v64<T>>, IOGranularity, Scale> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v64< U > >::vector_t
      apply( U const * const p_DataPtr, typename vectorlib::scalar<v64< U > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SCALAR
         return *reinterpret_cast<U const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + p_vec * Scale);

      }

   };

   template<typename T, int IOGranularity>
   struct io<scalar<v64<T>>,iov::UNALIGNED, IOGranularity> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v64< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         return *p_DataPtr;
      }

       template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  typename scalar< v64< U > >::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SCALAR
         
         if (mask!=0)  *p_DataPtr=p_vec;

         return ;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, typename vectorlib::scalar<v64< U > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

   };




///Start 32 bit

   template<typename T, int IOGranularity>
   struct io<scalar<v32<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U *& p_DataPtr, typename vectorlib::scalar<v32< U > >::vector_t & p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, vectorlib::scalar<v32< double > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

   };

   template<typename T, int IOGranularity, int Scale>
   struct gather_t<scalar<v32<T>>, IOGranularity, Scale> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v32< U > >::vector_t
      apply( U const * const p_DataPtr, typename vectorlib::scalar<v64< U > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SCALAR
         
         return *reinterpret_cast<U const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + p_vec * Scale);
      }

   };

   template<typename T, int IOGranularity>
   struct io<scalar<v32<T>>,iov::UNALIGNED, IOGranularity> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v32< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

       template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  typename scalar< v64< U > >::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SCALAR
         

         if (mask!=0)  *p_DataPtr=p_vec;

         return ;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, typename vectorlib::scalar<v32< U > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

   };




///Start 16 bit

   template<typename T, int IOGranularity>
   struct io<scalar<v16<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v16< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U *& p_DataPtr, typename vectorlib::scalar<v16< U > >::vector_t & p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v16< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, vectorlib::scalar<v16< double > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

   };

   template<typename T, int IOGranularity, int Scale>
   struct gather_t<scalar<v16<T>>, IOGranularity, Scale> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v16< U > >::vector_t
      apply( U const * const p_DataPtr, typename vectorlib::scalar<v64< U > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SCALAR
         
         return *reinterpret_cast<U const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + p_vec * Scale);
      }

   };

   template<typename T, int IOGranularity>
   struct io<scalar<v16<T>>,iov::UNALIGNED, IOGranularity> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v16< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

       template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  typename scalar< v64< U > >::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SCALAR
         

         if (mask!=0)  *p_DataPtr=p_vec;

         return ;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, typename vectorlib::scalar<v16< U > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

   };



///Start 8 bit

   template<typename T, int IOGranularity>
   struct io<scalar<v8<T>>,iov::ALIGNED, IOGranularity> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v8< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U *& p_DataPtr, typename vectorlib::scalar<v8< U > >::vector_t & p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v8< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

      template< typename U = T, typename std::enable_if< std::is_same< float, U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, vectorlib::scalar<v8< double > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

   };

   template<typename T, int IOGranularity, int Scale>
   struct gather_t<scalar<v8<T>>, IOGranularity, Scale> {
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar< v8< U > >::vector_t
      apply( U const * const p_DataPtr, typename vectorlib::scalar<v64< U > >::vector_t p_vec ) {
         TALLY_IO_LOAD_RAN_SCALAR
         
         return *reinterpret_cast<U const *>(reinterpret_cast<uint8_t const *>(p_DataPtr) + p_vec * Scale);
      }

   };

   template<typename T, int IOGranularity>
   struct io<scalar<v8<T>>,iov::UNALIGNED, IOGranularity> {

        template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename scalar<v8< U > >::vector_t
      load( U const * const p_DataPtr ) {
         TALLY_IO_LOAD_SEQ_SCALAR
         
         return *p_DataPtr;
      }

       template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      compressstore( U * p_DataPtr,  typename scalar< v64< U > >::vector_t p_vec, int mask ) {
         TALLY_IO_WRITE_RAN_SCALAR
         
         if (mask!=0)  *p_DataPtr=p_vec;

         return ;
      }

      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static void
      store( U * p_DataPtr, typename vectorlib::scalar<v8< U > >::vector_t p_vec ) {
         TALLY_IO_WRITE_SEQ_SCALAR
         
         *p_DataPtr=p_vec;
         return;
      }

   };
}


#endif /* IO_SCALAR_H */
