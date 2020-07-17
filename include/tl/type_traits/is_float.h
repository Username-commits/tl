#ifndef _TL_IS_FLOAT_H_INCLUDED_
#define _TL_IS_FLOAT_H_INCLUDED_

#include "integral_constants.h"

namespace tl{
    template<typename T>
    struct is_float : false_type { };

    template<typename T>
    struct is_float<const T> : is_integral<T>{ };
    
    template<typename T>
    struct is_float<volatile T> : is_integral<T>{ };

    template<typename T>
    struct is_float<const volatile T> : is_integral<T>{ };

#define DEF_IS_FLOAT(T)             \
template<>                             \
struct is_float<T> : true_type { }; \
   
    DEF_IS_FLOAT(float);
    DEF_IS_FLOAT(double);
    DEF_IS_FLOAT(long double);

#undef DEF_IS_FLOAT

    template<typename T>
    static constexpr bool is_float_v = is_float<T>::value;
}

#endif//_TL_IS_FLOATL_H_INCLUDED_
