#ifndef _TL_IS_VOLATILE_H_INCLUDED_
#define _TL_IS_VOLATILE_H_INCLUDED_ 1

#include "integral_constants.h"
#include "cstddef"

namespace tl{

    template<typename T>
    struct is_volatile : false_type { };

    template<typename T>
    struct is_volatile<T volatile> : true_type { };

    template<typename T>
    struct is_volatile<T volatile []> : true_type { };
    
    template<typename T, std::size_t N>
    struct is_volatile<T volatile [N]> : true_type { };
    
    template<typename T>
    static constexpr bool is_volatile_v = is_volatile<T>::value;
}
#endif//_TL_IS_VOLATILE_H_INCLUDED_
