#ifndef _TL_TYPE_IDENTITY_H_INCLUDED
#define _TL_TYPE_IDENTITY_H_INCLUDED 1

namespace tl{

    template<typename T>
    struct type_identity 
    {
        using type = T;
    };

    template<typename T>
    using type_identity_t = typename type_identity<T>::type;
}
#endif//_TL_TYPE_IDENTITY_H_INCLUDED
