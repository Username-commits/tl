#ifndef _TL_IS_ARRAY_H_INCLUDED_
#define _TL_IS_ARRAY_H_INCLUDED_ 1

#include "integral_constants.h"
#include "cstddef"

namespace tl{

    template<typename T>
    struct is_array : false_type { };

    template<typename T>
    struct is_array<T const []> : true_type { };
    
    template<typename T, std::size_t N>
    struct is_array<T const [N]> : true_type { };
    
    template<typename T>
    struct is_array<T volatile []> : true_type { };
    
    template<typename T, std::size_t N>
    struct is_array<T volatile [N]> : true_type { };
    
    template<typename T>
    struct is_array<T volatile const []> : true_type { };
    
    template<typename T, std::size_t N>
    struct is_array<T volatile const [N]> : true_type { };
    
    template<typename T>
    static constexpr bool is_array_v = is_array<T>::value;

}
#endif//_TL_IS_ARRAY_H_INCLUDED_ 
