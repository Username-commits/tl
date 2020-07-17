#ifndef _TL_IS_VOID_H_INCLUDED_
#define _TL_IS_VOID_H_INCLUDED_ 1

#include "integral_constants.h"

namespace tl{

    template<typename T> 
    struct is_void : false_type { };

    template<> 
    struct is_void<void> : true_type { };
    
    template<> 
    struct is_void<const void> : true_type { };
    
    template<> 
    struct is_void<volatile void> : true_type { };
    
    template<> 
    struct is_void<const volatile void> : true_type { };

    template<typename T>
    static constexpr bool is_void_v = is_void<T>::value;
}

#endif//_TL_IS_VOID_H_INCLUDED_
