#ifndef _TL_REMOVE_EXTENT_H_INCLUDED_
#define _TL_REMOVE_EXTENT_H_INCLUDED_ 1

#include "cstddef"

namespace tl{

    template<typename T>
    struct remove_extent 
    { 
        using type = T;
    };

    template<typename T>
    struct remove_extent<T[]> 
    { 
        using type = T;
    };

    template<typename T>
    struct remove_extent<const T[]> 
    { 
        using type = const T;
    };
    
    template<typename T>
    struct remove_extent<volatile T[]> 
    { 
        using type = volatile T;
    };
    
    template<typename T>
    struct remove_extent<volatile const T[]> 
    { 
        using type = volatile const T;
    };
    
    template<typename T, std::size_t N>
    struct remove_extent<T[N]> 
    { 
        using type = T;
    };

    template<typename T, std::size_t N>
    struct remove_extent<const T[N]> 
    { 
        using type = const T;
    };
    
    template<typename T, std::size_t N>
    struct remove_extent<volatile T[N]> 
    { 
        using type = volatile T;
    };
    
    template<typename T, std::size_t N>
    struct remove_extent<volatile const T[N]> 
    { 
        using type = volatile const T;
    };

    template<typename T>
    using remove_extent_t = typename remove_extent<T>::type;
}
#endif//_TL_REMOVE_EXTENT_H_INCLUDED_
