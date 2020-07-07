/* 
 * File:   extension_sve.h
 * Author: André Berthold
 *
 * Created on 11. May 2020, 18:22
 */

#ifndef EXTENSION_SVE_H
#define EXTENSION_SVE_H

#include <cstdint>
#include <type_traits>
#include <arm_sve.h>
#include "../../vector_extension_structs.h"

namespace vectorlib {
   template<class VectorReg>
   struct sve;

   template<typename T>
   struct sve< extv< T > > {
      static_assert(std::is_arithmetic<T>::value, "Base type of vector register has to be arithmetic.");
      //init extv<T> to reassign the bitwidth with the right value
      extv<T> vector();
      using vector_helper_t = extv<T>;
      using base_t = typename vector_helper_t::base_t;

      using vector_t =
      //if (T is integer) {
      typename std::conditional<(1==1) == std::is_integral<T>::value,
         //if (T is unsigned) {
         typename std::conditional<(1==1) == std::is_unsigned<T>::value,
            //switch (sizeof(T)) {
            //case 1:
            typename std::conditional<sizeof(T) == 1, svuint8_t,
            //case 2:
            typename std::conditional<sizeof(T) == 2, svuint16_t,
            //case 4:
            typename std::conditional<sizeof(T) == 4, svuint32_t,
            //default:
                                                      svuint64_t>::type>::type>::type,
         //} else {
            //switch (sizeof(T)) {
            //case 1:
            typename std::conditional<sizeof(T) == 1, svint8_t,
            //case 2:
            typename std::conditional<sizeof(T) == 2, svint16_t,
            //case 4:
            typename std::conditional<sizeof(T) == 4, svint32_t,
            //default:
                                                      svint64_t>::type>::type>::type
         //}
         >::type,
      //} else {
         //if (T is float) {
         typename std::conditional<(1==1) == std::is_same<float, T>::value,
            //vector_t = svfloat32_t
            svfloat32_t,
         //} else {
            //vector_t = svfloat64_t
            svfloat64_t
         //}
         >::type
      //}
      >::type;

      size_t size = vector_helper_t::size_byte::value;
      using mask_t = svbool_t;
   };

}

#endif /* EXTENSION_SVE_H */
