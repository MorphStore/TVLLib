/**
 * @file vector_reg.h
 * @brief Brief description
 * @author Johannes Pietrzyk
 * @todo TODOS?
 */

#ifndef MORPHSTORE_VECTOR_GENERAL_VECTOR_EXTENSION_H
#define MORPHSTORE_VECTOR_GENERAL_VECTOR_EXTENSION_H

#ifdef __ARM_FEATURE_SVE
#include <arm_sve.h>
#endif /* __ARM_FEATURE_SVE */

#include <cstdint>
#include <type_traits>
#include <cstddef>
#include "preprocessor.h"
namespace vectorlib {

   template<uint16_t BitWidth, typename T>
   struct vector_view {
      vector_view() = delete;

      using base_t          = T;
      using size_bit        = std::integral_constant<uint16_t, BitWidth>;
      using size_byte       = std::integral_constant<uint16_t, (BitWidth >> 3)>;
      using alignment       = std::integral_constant<size_t, size_byte::value>;
      using element_count   = std::integral_constant<size_t, size_byte::value / sizeof(T)>;
      using granularity     = std::integral_constant<size_t, sizeof(T) << 3>;
   };

   template<uint16_t BitWidth, typename T>
   struct scalar_view {
      scalar_view() = delete;

      using base_t          = T;
      using size_bit        = std::integral_constant<uint16_t, BitWidth>;
      using size_byte       = std::integral_constant<uint16_t, (BitWidth >> 3)>;
      using alignment       = std::integral_constant<size_t, size_byte::value>;
      using element_count   = std::integral_constant<size_t, 1>;
      using granularity     = std::integral_constant<size_t, sizeof(T) << 3>;
   };

   template<typename T>
   //using v1 = vector_view<(sizeof(T)<<3), T>;
   using v64 = scalar_view<64, T>;
   template<typename T>
   using v32 = scalar_view<32, T>;
   template<typename T>
   using v16 = vector_view<16, T>;
   template<typename T>
   using v8 = vector_view<8, T>;
   template<typename T>
   using v128 = vector_view<128, T>;
   template<typename T>
   using v256 = vector_view<256, T>;
   template<typename T>
   using v512 = vector_view<512, T>;

    template<typename T, int KEY>
   struct integral_value {
      static_assert(std::is_integral<T>::value);
      using type = T;
      static type value;
   };
   //pre initialisation of the static mebers of struct integral_value
   template<typename T, int KEY>
   T integral_value<T, KEY>::value = 0;

   //bit width of ext_vector/sve_vector is hard coded to 2048 bit 
   //   -> workarount to enable usage of  size_bit ... in constant context
   template<uint16_t BitWidth, typename T>
   struct ext_vector_view {
      using base_t = T;
      using granularity = std::integral_constant<size_t, sizeof(T) << 3>;

      using size_bit      = std::integral_constant<uint16_t, BitWidth>;
      using size_byte     = std::integral_constant<size_t, (BitWidth >> 3)>;
      using alignment     = std::integral_constant<size_t, size_byte::value>;
      using element_count = std::integral_constant<size_t, size_byte::value/sizeof(T)>;
   
      ext_vector_view() {
         #ifdef __ARM_FEATURE_SVE
         //create uninitalized vector
         svuint64_t tmp = svundef_u64();
         //get the number of 64-bit elements per vector
         int vector_element_count = svlen(tmp);
	     //init the static mambers
         /*size_bit::value      = 64 * vector_element_count;
         size_byte::value     = (size_bit::value >> 3);
         alignment::value     = size_byte::value;
         element_count::value = size_byte::value / sizeof(T);*/
         #else
         //@todo do some assert
         #endif /* __ARM_FEATURE_SVE */
         
      }
   };
   
   template<typename T>
   using extv = ext_vector_view<2048, T>;

}

#endif //MORPHSTORE_VECTOR_GENERAL_VECTOR_EXTENSION_H
