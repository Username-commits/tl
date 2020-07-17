#ifndef _TL_IS_CLASS_H_INCLUDED_
#define _TL_IS_CLASS_H_INCLUDED_ 1

#include "details/yes_no_type.h"
#include "integral_constants.h"
#include "make_void.h"

namespace tl{
namespace details{

    template<typename T, typename = void_t<>>
    struct is_class_impl 
    {
        static constexpr bool value = false;
    };

    template<typename T>
    struct is_class_impl<T, void_t< int T::* >> {static constexpr bool value = true; };
}

    template<typename T>
    struct is_class : bool_constant<details::is_class_impl<T>::value> { };
    
    template<typename T>
    struct is_class<T const> : is_class<T> { };
    
    template<typename T>
    struct is_class<T volatile> : is_class<T> { };
    
    template<typename T>
    struct is_class<T const volatile> : is_class<T> { };

    template<typename T>
    static constexpr bool is_class_v = is_class<T>::value;
}

#endif//_TL_IS_CLASS_H_INCLUDED_ 
