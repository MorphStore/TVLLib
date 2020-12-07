/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

#ifndef CREATE_H
#define CREATE_H

#include "../vector_extension_structs.h"

#ifdef tally
#	include "../tally.h"
#endif

namespace vectorlib{


   template<class VectorExtension, int IOGranularity = VectorExtension::vector_helper_t::granularity::value>
   struct create;


    /*! Create a new vector by broadcasting value a to all elements of a vector.
    * This is a wrapper for _mm*_set1_*
    */
   template<class VectorExtension, int IOGranularity>
   typename VectorExtension::vector_t
   set1(typename VectorExtension::base_t a){
      return create<VectorExtension, IOGranularity>::set1( a);
   }

    /*! Creates a vector filled with sequential numbers starting at a with step width b.
     * @todo: should be typename VectorExtension::base_t instead of int
    */
   template<class VectorExtension,  int IOGranularity>
   typename VectorExtension::vector_t
   set_sequence(int a, int b){
      return create<VectorExtension, IOGranularity>::set_sequence( a, b);
   }

    /*! Create a new vector by broadcasting value a to all elements of a vector.
    * This is a wrapper for _mm*_set1_*
    *
    */
   template<class VectorExtension, int IOGranularity>
   typename VectorExtension::vector_t
   set(typename VectorExtension::base_t a15,typename VectorExtension::base_t a14,typename VectorExtension::base_t a13,typename VectorExtension::base_t a12,typename VectorExtension::base_t a11,
           typename VectorExtension::base_t a10,typename VectorExtension::base_t a9,typename VectorExtension::base_t a8,typename VectorExtension::base_t a7,typename VectorExtension::base_t a6,
           typename VectorExtension::base_t a5,typename VectorExtension::base_t a4,typename VectorExtension::base_t a3,typename VectorExtension::base_t a2,typename VectorExtension::base_t a1,
           typename VectorExtension::base_t a0 ){
      return create<VectorExtension,  IOGranularity>::set( a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4, a3, a2, a1, a0);
   }

   template<class VectorExtension, int IOGranularity>
   typename VectorExtension::vector_t
   set(typename VectorExtension::base_t a7,typename VectorExtension::base_t a6,typename VectorExtension::base_t a5,typename VectorExtension::base_t a4,typename VectorExtension::base_t a3,
           typename VectorExtension::base_t a2,typename VectorExtension::base_t a1,typename VectorExtension::base_t a0){
      return create<VectorExtension,  IOGranularity>::set( a7, a6, a5, a4, a3, a2, a1, a0);
   }

   template<class VectorExtension, int IOGranularity>
   typename VectorExtension::vector_t
   set(typename VectorExtension::base_t a3,typename VectorExtension::base_t a2,typename VectorExtension::base_t a1,typename VectorExtension::base_t a0){
      return create<VectorExtension,  IOGranularity>::set( a3, a2, a1, a0);
   }

   template<class VectorExtension, int IOGranularity>
   typename VectorExtension::vector_t
   set(typename VectorExtension::base_t a1,typename VectorExtension::base_t a0){
      return create<VectorExtension,  IOGranularity>::set( a1, a0);
   }
}

#endif /* CREATE_H */
