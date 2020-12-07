/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef LOGIC_NEON_H
#define LOGIC_NEON_H

#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/logic.h"


namespace vectorlib {


   template<typename T>
   struct logic<neon<v128<T>>, neon<v128<T>>::vector_helper_t::size_bit::value > {
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<T>>::vector_t
      bitwise_and( typename neon<v128<T>>::vector_t const & p_In1, typename neon<v128<T>>::vector_t const & p_In2) {
         return vandq_u64( p_In1, p_In2 );
      }
      
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static
      typename neon<v128<T>>::vector_t
      bitwise_or( typename neon<v128<T>>::vector_t const & p_In1, typename neon<v128<T>>::vector_t const & p_In2) {
         return vorrq_u64( p_In1, p_In2 );
      }
   };


}

#endif /* LOGIC_NEON_H */

