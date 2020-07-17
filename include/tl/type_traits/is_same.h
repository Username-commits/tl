#ifndef _TL_INTEGRAL_CONSTANTS_H_INCLUDED_
#define _TL_INTEGRAL_CONSTANTS_H_INCLUDED_ 1

#include "integral_constant.h"

namespace tl{
    
    template<typename T, typename U>
    struct is_same : false_type { };

    template<typename T>
    struct is_same<T, T> : true_type { };

    template<typename T>
    struct is_same<T&&, T&&> : true_type { };
    
    template<typename T, typename U>
    static constexpr bool is_same_v = is_same<T, U>::value;
}

#endif//_TL_INTEGRAL_CONSTANTS_H_INCLUDED_
