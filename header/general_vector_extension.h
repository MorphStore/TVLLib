/**
 * @file vector_reg.h
 * @brief Brief description
 * @author Johannes Pietrzyk
 * @todo TODOS?
 */

#ifndef MORPHSTORE_VECTOR_GENERAL_VECTOR_EXTENSION_H
#define MORPHSTORE_VECTOR_GENERAL_VECTOR_EXTENSION_H

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
   template<typename T>
   using v16384 = vector_view<16384, T>;


}

#endif //MORPHSTORE_VECTOR_GENERAL_VECTOR_EXTENSION_H
