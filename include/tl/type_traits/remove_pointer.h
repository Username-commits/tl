#ifndef _TL_REMOVE_POINTER_INCLUDED_
#define _TL_REMOVE_POINTER_INCLUDED_ 1

#include "integral_constants.h"

namespace tl {

    template<typename T>
    struct remove_pointer
    {
        using type = T;
    };

    template<typename T>
    struct remove_pointer<T*>
    {
        using type = T;
    };

    template<typename T>
    struct remove_pointer<T* const>
    {
        using type = T;
    };

    template<typename T>
    struct remove_pointer<T* volatile>
    {
        using type = T;
    };
    
    template<typename T>
    struct remove_pointer<T* volatile const>
    {
        using type = T;
    };

    template<typename T>
    using remove_pointer_t = typename remove_pointer<T>::type;
}

#endif//_TL_REMOVE_POINTER_INCLUDED_
