/**********************************************************************************************
 * Copyright (C) 2019 by MorphStore-Team                                                      *
 *                                                                                            *
 * This file is part of MorphStore - a compression aware vectorized column store.             *
 *                                                                                            *
 * This program is free software: you can redistribute it and/or modify it under the          *
 * terms of the GNU General Public License as published by the Free Software Foundation,      *
 * either version 3 of the License, or (at your option) any later version.                    *
 *                                                                                            *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;  *
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  *
 * See the GNU General Public License for more details.                                       *
 *                                                                                            *
 * You should have received a copy of the GNU General Public License along with this program. *
 * If not, see <http://www.gnu.org/licenses/>.                                                *
 **********************************************************************************************/

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
#ifdef SVE
    MAKE_VECTOR_EXTENSION_NAME(sve<extv<uint64_t>>)
#endif
            
}

#undef MAKE_VECTOR_EXTENSION_NAME

#endif //MORPHSTORE_VECTOR_VECTOR_EXTENSION_NAMES_H
