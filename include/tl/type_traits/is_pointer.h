#ifndef _TL_IS_POINTER_INCLUDED_
#define _TL_IS_POINTER_INCLUDED_ 1

#include "integral_constants.h"

namespace tl {

    template<typename T>
    struct is_pointer : false_type { };

    template<typename T>
    struct is_pointer<T*> : true_type { };

    template<typename T>
    struct is_pointer<T* const> : true_type { };

    template<typename T>
    struct is_pointer<T* volatile> : true_type { };
    
    template<typename T>
    struct is_pointer<T* volatile const> : true_type { };

    template<typename T>
    static constexpr bool is_pointer_v = is_pointer<T>::value;
}

#endif//_TL_IS_POINTER_INCLUDED_
