#ifndef _TL_CONDITIONAL_H_INCLUDED_
#define _TL_CONDITIONAL_H_INCLUDED_ 1

namespace tl{

    template<bool B, typename T, typename F>
    struct conditional
    {
        using type = F;
    };
    
    template<typename T, typename F>
    struct conditional<true, T, F>
    {
        using type = T;
    };

    template<bool B, typename T, typename F>
    using conditional_t = typename conditional<B, T, F>::type;
}
#endif//_TL_CONDITIONAL_H_INCLUDED_ 
