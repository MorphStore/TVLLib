/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef EXTRACT_NEON_H
#define EXTRACT_NEON_H


#include "../../../preprocessor.h"
#include "../extension_neon.h"
#include "../../../primitives/extract.h"

#include <functional>

namespace vectorlib {
    
    
   template<typename T>
   struct extract<neon<v128<T>>,64> {
       
      template< typename U = T, typename std::enable_if< std::is_integral< U >::value, int >::type = 0 >
      MSV_CXX_ATTRIBUTE_FORCE_INLINE
      static typename neon< v128< U > >::base_t
      extract_value( neon< v128< uint64_t > >::vector_t p_vec, int idx) {
         
        
         if (idx == 0) return vgetq_lane_u64(p_vec, 0);
         return vgetq_lane_u64(p_vec, 1);
      }
   };
   
   
}
      

#endif /* EXTRACT_NEON_H */

