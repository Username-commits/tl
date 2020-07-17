#ifndef _TL_IS_COMPLETE_H_INCLUDED_
#define _TL_IS_COMPLETE_H_INCLUDED_ 1

#include "include/tl/utility/declval.h"
#include "include/tl/type_traits/details/yes_no_type.h"

namespace tl{
namespace details{

    template<typename T>
    class is_complete_impl
    {
        private:
            template<typename U, typename = decltype(sizeof(declval<U>()))>
            tl_details::yes_type test(int);

            template<typename U>
            tl_details::no_type test(...);
        public:
            static constexpr bool value =
                sizeof(test<T>(1)) == sizeof(tl_details::yes_type);
    };
}// end namespace details

    template<typename T>
    struct is_complete : bool_constant<is_function_v<remove_reference_t<T>> || details::is_complete_impl<T>::value> { };

    template<typename T>
    static constexpr bool is_complete_v = is_complete<T>::value;
}

#endif//_TL_IS_COMPLETE_H_INCLUDED_
