#ifndef _TL_IS_CONST_H_INCLUDED_
#define _TL_IS_CONST_H_INCLUDED_ 1

#include "integral_constants.h"
#include "cstddef"

namespace tl{

    template<typename T>
    struct is_const : false_type { };

    template<typename T>
    struct is_const<T const> : true_type { };

    template<typename T>
    struct is_const<T const []> : true_type { };
    
    template<typename T, std::size_t N>
    struct is_const<T const [N]> : true_type { };
    
    template<typename T>
    static constexpr bool is_const_v = is_const<T>::value;
}
#endif//_TL_IS_CONST_H_INCLUDED_ 
