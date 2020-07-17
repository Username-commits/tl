#ifndef _TL_REMOVE_REFERENCE_H_INCLUDED_
#define _TL_REMOVE_REFERENCE_H_INCLUDED_ 1

namespace tl{

    template<typename T>
    struct remove_reference
    {
        using type = T;
    };

    template<typename T>
    struct remove_reference<T&>
    {
        using type = T;
    };
    
    template<typename T>
    struct remove_reference<const T&>
    {
        using type = T;
    };
    
    template<typename T>
    struct remove_reference<volatile T&>
    {
        using type = T;
    };

    template<typename T>
    struct remove_reference<const volatile T&>
    {
        using type = T;
    };

    template<typename T>
    struct remove_reference<T&&>
    {
        using type = T;
    };

    template<>
    struct remove_reference<void>
    {
        using type = void;
    };

    template<typename T>
    using remove_reference_t = typename remove_reference<T>::type;
}
#endif//_TL_REMOVE_REFERENCE_H_INCLUDED_
