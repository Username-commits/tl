#ifndef _TL_IS_FUNCTION_INCLUDED_
#define _TL_IS_FUNCTION_INCLUDED_ 1

#include "is_class.h"
#include "is_void.h"
#include "is_reference.h"

#include "integral_constants.h"

namespace tl{
namespace details{

    template<typename T>
    struct is_function_impl
    {
        template<typename U>
        static tl_details::yes_type test(U (*)[2]);

        template<typename U>
        static tl_details::no_type  test(...);

        static constexpr bool value = (
            test<T>(nullptr) == sizeof(tl_details::no_type) &&
            !tl::is_class_v<T>                              &&
            !tl::is_void_v<T>                               &&
            !tl::is_reference_v<T>                          &&
            !tl::is_array_v<T>
                                      );
    };
}
    template<typename T>
    struct is_function : bool_constant<details::is_function_impl<T>::value> { };

    template<typename T>
    static constexpr bool is_function_v = is_function<T>::value;
}

#endif//_TL_IS_FUNCTION_INCLUDED_
