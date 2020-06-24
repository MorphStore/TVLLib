#ifndef MORPHSTORE_VECTOR_TYPE_HELPER_H
#define MORPHSTORE_VECTOR_TYPE_HELPER_H

using namespace morphstore;
using namespace vectorlib;

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

#endif
