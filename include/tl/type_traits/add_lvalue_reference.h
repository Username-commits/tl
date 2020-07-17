#ifndef _TL_ADD_LVALUE_REFERENCE_INCLUDED_
#define _TL_ADD_LVALUE_REFERENCE_INCLUDED_ 1

#include "add_reference.h"

namespace tl
{
    template<typename T>
    struct add_lvalue_reference
     {
        using type = add_reference_t<T>;
     };
    
    template<typename T>
    struct add_lvalue_reference<T&&>
     {
        using type = T&;
     };

    template<typename T>
    using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;
}//namespace tl

#endif//_TL_ADD_LVALUE_REFERENCE_INCLUDED_
