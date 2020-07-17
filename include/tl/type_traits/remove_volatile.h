#ifndef _TL_REMOVE_VOLATILE_H_INCLUDED_
#define _TL_REMOVE_VOLATILE_H_INCLUDED_ 1

#include <cstddef>

namespace tl{
    
    template<typename T>
    struct remove_volatile
     {
        using type = T; 
     };

    template<typename T>
    struct remove_volatile<T volatile>
     {
        using type = T; 
     };

    template<typename T, std::size_t N>
    struct remove_volatile<T volatile [N]>
     {
        using type = T[N]; 
     };

    template<typename T>
    struct remove_volatile<T volatile []>
     {
        using type = T[]; 
     };

    template<typename T>
    using remove_volatile_t = typename remove_volatile<T>::type;
}
#endif//_TL_REMOVE_VOLATILE_H_INCLUDED_ 
