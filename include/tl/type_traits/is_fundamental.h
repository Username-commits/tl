#ifndef _TL_IS_FUNDAMENTAL_H_INCLUDED_
#define _TL_IS_FUNDAMENTAL_H_INCLUDED_ 1

#include "integral_constants.h"
#include "is_arifhmetic.h"
#include "is_void.h"

namespace tl{
    
    template<typename T>
    struct is_fundamental : bool_constant<is_arifhmetic_v<T> || is_void_v<T>> { };

    template<typename T>
    static constexpr bool is_fundamental_v = is_fundamental<T>::value;
}
#endif//_TL_IS_FUNDAMENTAL_H_INCLUDED_
