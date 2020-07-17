#ifndef _TL_IS_DEFAULT_CONSTRUCTIBLE_INCLUDED_
#define _TL_IS_DEFAULT_CONSTRUCTIBLE_INCLUDED_ 1

#include "cstddef"
#include "integral_constants.h"
#include "details/yes_no_type.h"
//#include "is_compele.h"

namespace tl{
namespace details{

    template<typename T>
    class is_default_constructible_impl
    {
        private:
            template<typename U, typename = decltype(T())>
            static tl_details::yes_type test(int);

            template<typename U>
            static tl_details::no_type test(...);
        public:
            static constexpr bool value = 
                sizeof(test<T>(0) == 
                    sizeof(tl_details::yes_type));
    };

    template<typename T>
    static constexpr bool is_dc_v = is_default_constructible_impl<T>::value;
}// namespace details

    template<typename T>
    struct is_default_constructible : bool_constant< details::is_dc_v<T> >
    {
//        static_assert(is_compele_v<T>,
//                "argument is_default_constructible must be complete type");
    };

    template<typename T, std::size_t N>
    struct is_default_constructible<T[N]> : is_default_constructible<T>{ }; 
    
    template<typename T>
    struct is_default_constructible<T[]> : is_default_constructible<T>{ }; 
    
    template<typename T>
    struct is_default_constructible<T&> : false_type { }; 
    
    template<typename T>
    struct is_default_constructible<T&&> : false_type { }; 

    template<>
    struct is_default_constructible<void> : false_type { }; 
    
    template<>
    struct is_default_constructible<const void> : false_type { }; 
    
    template<>
    struct is_default_constructible<volatile void> : false_type { }; 
    
    template<>
    struct is_default_constructible<const volatile void> : false_type { }; 

    template<typename T>
    using is_default_constructible_v = typename is_default_constructible<T>::value;
}

#endif//_TL_IS_DEFAULT_CONSTRUCTIBLE_INCLUDED_
