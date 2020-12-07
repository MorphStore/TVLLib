/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef MANIPULATE_H
#define MANIPULATE_H

#include "../vector_extension_structs.h"

#ifdef tally
#	include "../tally.h"
#endif

namespace vectorlib{


   template<class VectorExtension, int IOGranularity>
   struct manipulate;

   /*!
    * Rotate vector a by 1 element (e.g. for intersection, join,...)
    */
   template<class VectorExtension, int Granularity = VectorExtension::vector_helper_t::granularity::value>
   typename VectorExtension::vector_t
   rotate(typename VectorExtension::vector_t a) {
       return manipulate<VectorExtension,  Granularity>::rotate( a );
   }

}

#endif /* MANIPULATE_H */
