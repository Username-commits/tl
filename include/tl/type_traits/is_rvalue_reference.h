#ifndef _TL_IS_RVALUE_REFERENCE_INCLUDED_
#define _TL_IS_RVALUE_REFERENCE_INCLUDED_ 1

#include "integral_constants.h"

namespace tl {

    template<typename T>
    struct is_rvalue_reference : false_type { };

    template<typename T>
    struct is_rvalue_reference<T&&> : true_type { };

    template<typename T>
    static constexpr bool is_rvalue_reference_v = is_rvalue_reference<T>::value;
}

#endif//_TL_IS_RVALUE_REFERENCE_INCLUDED_
