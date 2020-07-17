#ifndef _TL_IS_REFERENCE_INCLUDED_
#define _TL_IS_REFERENCE_INCLUDED_ 1

#include "integral_constants.h"
#include "is_rvalue_reference.h"
#include "is_lvalue_reference.h"

namespace tl {

    template<typename T>
    struct is_reference : bool_constant< is_rvalue_reference_v<T> || is_lvalue_reference_v<T> > 
    { 
    };

    template<typename T>
    static constexpr bool is_reference_v = is_reference<T>::value;
}

#endif//_TL_IS_REFERENCE_INCLUDED_
