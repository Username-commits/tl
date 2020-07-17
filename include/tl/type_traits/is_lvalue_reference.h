#ifndef _TL_IS_LVALUE_REFERENCE_INCLUDED_
#define _TL_IS_LVALUE_REFERENCE_INCLUDED_ 1

#include "integral_constants.h"

namespace tl {

    template<typename T>
    struct is_lvalue_reference : false_type { };

    template<typename T>
    struct is_lvalue_reference<T&> : true_type { };

    template<typename T>
    struct is_lvalue_reference<const T&> : true_type { };

    template<typename T>
    struct is_lvalue_reference<volatile T&> : true_type { };
    
    template<typename T>
    struct is_lvalue_reference<volatile const T&> : true_type { };

    template<typename T>
    static constexpr bool is_lvalue_reference_v = is_lvalue_reference<T>::value;
}

#endif//_TL_IS_LVALUE_REFERENCE_INCLUDED_
