#ifndef _TL_MAKE_VOID_H_INCLUDED_
#define _TL_MAKE_VOID_H_INCLUDED_ 1

namespace tl{

    template<typename... Ts>
    struct make_void
    {
        using type = void;
    };

    template<typename... Ts>
    using void_t = typename make_void<Ts ...>::type;
}
#endif//_TL_MAKE_VOID_H_INCLUDED_
