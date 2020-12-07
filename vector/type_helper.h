/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/
#ifndef MORPHSTORE_VECTOR_TYPE_HELPER_H
#define MORPHSTORE_VECTOR_TYPE_HELPER_H

namespace vectorlib {

    template <class S, class T>
    class TypeHelper
    {
    };


    template <template <typename> class T1,
              template <uint16_t, typename> class T2,
              uint16_t N,
              class T3,
              class T4>
    class TypeHelper<T1<T2<N, T3> >, T4>
    {
    public:
        typedef T1<T2<N, T4> > newbasetype;
    };

}

#endif
