#ifndef _TL_ENABLE_IF_H_INCLUDED_
#define _TL_ENABLE_IF_H_INCLUDED_ 1

namespace tl{

    template<bool B, typename T>
    struct enable_if { };

    template<typename T>
    struct enable_if<true, T> 
    {
        using type = T;
    };

    template<bool B, typename T>
    using enable_if_t = typename enable_if<B, T>::type;
}

#endif//_TL_ENABLE_IF_H_INCLUDED_
