#ifndef _TL_ADD_VOLATILE_H_INCLUDED_
#define _TL_ADD_VOLATILE_H_INCLUDED_ 1

namespace tl{
    
    template<typename T>
    struct add_volatile
     {
         using type = volatile T;
     };
    
    template<typename T>
    struct add_volatile<T&>
     {
         using type = T&;
     };

    template<typename T>
    using add_volatile_t = typename add_volatile<T>::type;
}
#endif//_TL_ADD_VOLATILE_H_INCLUDED_ 
