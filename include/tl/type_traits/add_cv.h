#ifndef _TL_ADD_CV_H_INCLUDED_
#define _TL_ADD_CV_H_INCLUDED_ 1

#include "add_const.h"
#include "add_volatile.h"

namespace tl{
    
    template<typename T>
    struct add_cv
    {
        using type = add_const_t<add_volatile_t<T>>;
    };
    
    template<typename T>
    using add_cv_t = typename add_cv<T>::type;
}
#endif//_TL_ADD_CV_H_INCLUDED_ 
