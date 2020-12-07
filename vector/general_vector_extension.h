/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
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

}

#endif //MORPHSTORE_VECTOR_GENERAL_VECTOR_EXTENSION_H
