#ifndef _TL_ADD_CONST_H_INCLUDED_
#define _TL_ADD_CONST_H_INCLUDED_ 1

namespace tl{
    
    template<typename T>
    struct add_const
     {
         using type = const T;
     };
    
    template<typename T>
    struct add_const<T&>
     {
         using type = T&;
     };

    template<typename T>
    using add_const_t = typename add_const<T>::type;
}
#endif//_TL_ADD_CONST_H_INCLUDED_ 
