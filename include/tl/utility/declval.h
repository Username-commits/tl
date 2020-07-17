#ifndef _TL_UTILITY_DECLVAL_H
#define _TL_UTILITY_DECLVAL_H 1

#include <include/tl/type_traits/add_rvalue_reference.h>

namespace tl{

template<typename T>
add_rvalue_reference_t<T> declval() noexcept;

}

#endif//_TL_UTILITY_DECLVAL_H
