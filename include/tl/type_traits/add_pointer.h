#ifndef _TL_ADD_POINTER_H_INCLUDED_
#define _TL_ADD_POINTER_H_INCLUDED_ 1

#include "remove_reference.h"

namespace tl{

    template<typename T>
    struct add_pointer
     {
         using no_ref_t = remove_reference_t<T>;
         using type = no_ref_t*; 
     };
    
    template<typename T>
    using add_pointer_t = typename add_pointer<T>::type;
}
#endif//_TL_ADD_POINTER_H_INCLUDED_ 
