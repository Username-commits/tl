#ifndef _TL_IS_ARIFHMETIC_H_INCLUDED_
#define _TL_IS_ARIFHMETIC_H_INCLUDED_ 1

#include "integral_constants.h"
#include "is_integral.h"
#include "is_float.h"

namespace tl{
    
    template<typename T>
    struct is_arifhmetic : bool_constant<is_integral_v<T> || is_float_v<T>> { };

    template<typename T>
    static constexpr bool is_arifhmetic_v = is_arifhmetic<T>::value;
}
#endif//_TL_IS_ARIFHMETIC_H_INCLUDED_
