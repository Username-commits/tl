#ifndef _TL_COMMON_TYPE_H_INCLUDED
#define _TL_COMMON_TYPE_H_INCLUDED

#include "include/tl/utility.h"

namespace tl{

    template<typename... Tp>
    struct common_type;

    template<typename T>
    struct common_type<T>
    {
        using type = T;
    };

    template<typename T, typename U>
    struct common_type<T, U>
    {
        using type = decltype(true ? declval<T>() : declval<U>());
    };
    
    template<typename T, typename U, typename... Vp>
    struct common_type<T, U, Vp...>
    {
        using type = typename 
            common_type<typename common_type<T, U>::type, Vp...>::type;
    };

    template<typename... Tp>
    using common_type_t = typename common_type<Tp...>::type;
}

#endif//_TL_COMMON_TYPE_H_INCLUDED
