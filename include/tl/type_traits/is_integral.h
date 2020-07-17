#ifndef _TL_IS_INTEGRAL_H_INCLUDED_
#define _TL_IS_INTEGRAL_H_INCLUDED_

#include "integral_constants.h"

namespace tl{
    template<typename T>
    struct is_integral : false_type { };

    template<typename T>
    struct is_integral<const T> : is_integral<T>{ };
    
    template<typename T>
    struct is_integral<volatile T> : is_integral<T>{ };

    template<typename T>
    struct is_integral<const volatile T> : is_integral<T>{ };

#define DEF_IS_INTEGRAL(T)             \
template<>                             \
struct is_integral<T> : true_type { }; \

    DEF_IS_INTEGRAL(unsigned int);
    DEF_IS_INTEGRAL(unsigned short);
    DEF_IS_INTEGRAL(unsigned char);
    DEF_IS_INTEGRAL(unsigned long);

    DEF_IS_INTEGRAL(int);
    DEF_IS_INTEGRAL(short);
    DEF_IS_INTEGRAL(char);
    DEF_IS_INTEGRAL(long);

    DEF_IS_INTEGRAL(signed char);
    DEF_IS_INTEGRAL(bool);

    DEF_IS_INTEGRAL(wchar_t);

    DEF_IS_INTEGRAL(char16_t);
    DEF_IS_INTEGRAL(char32_t);

#undef DEF_IS_INTEGRAL

    template<typename T>
    static constexpr bool is_integral_v = is_integral<T>::value;
}

#endif//_TL_IS_INTEGRAL_H_INCLUDED_
