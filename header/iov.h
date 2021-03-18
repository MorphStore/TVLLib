#ifndef IOV_H
#define IOV_H

#include "vector_extension_structs.h"

namespace vectorlib {

   enum class iov {
      ALIGNED,
      UNALIGNED,
      UNALIGNEDX,
      STREAM
   };
   
}

#endif