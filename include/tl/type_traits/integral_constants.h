#ifndef _TL_INTEGRAL_CONSTANTS_H_INCLUDED_
#define _TL_INTEGRAL_CONSTANTS_H_INCLUDED_ 1

namespace tl{
    
    template<typename T, T val>
    struct integral_constant
     {
        static constexpr T value = val;
        using value_type = T;
        using type = integral_constant;
        constexpr operator value_type() const noexcept { return value; }
     };

    template<bool v>
    using bool_constant = integral_constant<bool, v>;
    
    using true_type  = bool_constant<true>;
    using false_type = bool_constant<false>;
}
#endif//_TL_INTEGRAL_CONSTANTS_H_INCLUDED_
