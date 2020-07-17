#ifndef _TL_IS_CV_H_INCLUDED_
#define _TL_IS_CV_H_INCLUDED_ 1

#include "integral_constants.h"

namespace tl{

    template<typename T>
    struct is_cv : bool_constant<is_const_v<T> && is_volatile_v<T>> { };
    
    template<typename T>
    static constexpr bool is_cv_v = is_cv<T>::value;
}
#endif//_TL_IS_CV_H_INCLUDED_ 
