#ifndef _TL_ADD_RVALUE_REFERENCE_INCLUDED_
#define _TL_ADD_RVALUE_REFERENCE_INCLUDED_ 1

#include "is_reference.h"
#include "is_void.h"

namespace tl{
namespace detail{ 

    template<typename T, bool b>
    struct add_rvalue_reference_helper
     {
         using type = T;
     };

    template<typename T>
    struct add_rvalue_reference_helper<T, true>
     {
         using type = T&&;
     };

    template<typename T>
    struct add_rvalue_reference_impl
     {
         using type = typename
             detail::add_rvalue_reference_helper
                <T, (tl::is_void_v<T> == false && tl::is_reference_v<T> == false)>
                    ::type;
     };

}// namespace detail

    template<typename T>
    struct add_rvalue_reference
     {
         using type = typename detail::add_rvalue_reference_impl<T>::type;
     };

    template<typename T>
    using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;

}//namespace tl

#endif//_TL_ADD_RVALUE_REFERENCE_INCLUDED_
