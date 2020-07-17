#ifndef _TL_ADD_REFERENCE_H_
#define _TL_ADD_REFERENCE_H_ 1

namespace tl{

namespace details {

    template<typename T>
    struct add_reference_impl
     {
        using type = T&;
     };

    template<typename T>
    struct add_reference_impl<T&&>
     {
        using type = T&&;
     };

} // namespace details

    template<typename T>
    struct add_reference
     {
         using type = typename details::add_reference_impl<T>::type;
     };

    template<typename T>
    struct add_reference<T&>
     {
        using type = T&;
     };


    template<>
    struct add_reference<void> { using type = void; };
    
    template<>
    struct add_reference<const void> { using type = const void; };
    
    template<>
    struct add_reference<volatile void> { using type = volatile void; };
    
    template<>
    struct add_reference<const volatile void> { using type = void; };
    
    template<typename T>
    using add_reference_t = typename add_reference<T>::type;

} // namespace tl
#endif//_TL_ADD_REFERENCE_H_INCLUDED_
