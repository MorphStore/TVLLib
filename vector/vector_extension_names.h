/*Copyright 2020 MorphStore Team @ TU Dresden
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
*/

/**
 * @file vector_extension_names.h
 * @brief A template-based mapping from vector extension structs to string
 * names. Useful especially (and perhaps exclusively) in micro benchmarks.
 * 
 * There are situations where we cannot accomplish this mapping using macros.
 */

#ifndef MORPHSTORE_VECTOR_VECTOR_EXTENSION_NAMES_H
#define MORPHSTORE_VECTOR_VECTOR_EXTENSION_NAMES_H

#include "preprocessor.h"
#include "vector_extension_structs.h"

#include <string>

#define MAKE_VECTOR_EXTENSION_NAME(ve) \
        template<> std::string veName<ve> = STR_EVAL_MACROS(ve);

namespace vectorlib {

    template<class t_vector_extension>
    // Ideally, veName should only be usable with vector extensions it has
    // explicitly been specialized for (otherwise compiler errors should be
    // thrown), but:
    // This does not compile.
    // std::string veName = delete;
    // This results in empty string for vector extensions w/o a specialization.
    //std::string veName;
    // This results in this string for vector extensions w/o a specialization.
    std::string veName = "(unknown vector extension)";

    MAKE_VECTOR_EXTENSION_NAME(scalar<v64<uint64_t>>)
#ifdef SSE
    MAKE_VECTOR_EXTENSION_NAME(sse<v128<uint64_t>>)
#endif
#ifdef AVXTWO
    MAKE_VECTOR_EXTENSION_NAME(avx2<v256<uint64_t>>)
#endif
#ifdef AVX512
    MAKE_VECTOR_EXTENSION_NAME(avx512<v512<uint64_t>>)
#endif
            
}

#undef MAKE_VECTOR_EXTENSION_NAME

#endif //MORPHSTORE_VECTOR_VECTOR_EXTENSION_NAMES_H
