#ifndef _TL_REMOVE_CONST_H_INCLUDED_
#define _TL_REMOVE_CONST_H_INCLUDED_ 1

#include <cstddef>

namespace tl{
    
    template<typename T>
    struct remove_const
     {
        using type = T; 
     };

    template<typename T>
    struct remove_const<T const>
     {
        using type = T; 
     };

    template<typename T, std::size_t N>
    struct remove_const<T const [N]>
     {
        using type = T[N]; 
     };

    template<typename T>
    struct remove_const<T const []>
     {
        using type = T[]; 
     };

    template<typename T>
    using remove_const_t = typename remove_const<T>::type;
}
#endif//_TL_REMOVE_CONST_H_INCLUDED_ 
