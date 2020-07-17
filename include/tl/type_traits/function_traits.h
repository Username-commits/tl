#ifndef _TL_FUNCTION_TRAITS_INCLUDED_
#define _TL_FUNCTION_TRAITS_INCLUDED_ 1

#include "add_pointer.h"
#include "is_function.h"

namespace tl{
namespace details{

    template<typename Function> 
    struct function_traits_helper 
    { 
    };

    template<typename R> 
    struct function_traits_helper<R (*)()> 
    {
        static constexpr unsigned arity = 0;
        using result_type = R;
    };

    template<typename R, typename T1> 
    struct function_traits_helper<R (*)(T1)> 
    {
        static constexpr unsigned arity = 1;
        using result_type = R;
        using arg1_type = T1;
    };

    template<typename R, typename T1, typename T2> 
    struct function_traits_helper<R (*)(T1, T2)> 
    {
        static constexpr unsigned arity = 2;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
    };

    template<typename R, typename T1, typename T2, typename T3> 
    struct function_traits_helper<R (*)(T1, T2, T3)> 
    {
        static constexpr unsigned arity = 3;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
    };

    template<typename R, typename T1, typename T2, typename T3,
             typename T4> 
    struct function_traits_helper<R (*)(T1, T2, T3, T4)> 
    {
        static constexpr unsigned arity = 4;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
        using arg4_type = T4;
    };

    template<typename R, typename T1, typename T2, typename T3,
             typename T4, typename T5> 
    struct function_traits_helper<R (*)(T1, T2, T3, T4, T5)> 
    {
        static constexpr unsigned arity = 5;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
        using arg4_type = T4;
        using arg5_type = T5;
    };

    template<typename R, typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6> 
    struct function_traits_helper<R (*)(T1, T2, T3, T4, T5, T6)> 
    {
        static constexpr unsigned arity = 6;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
        using arg4_type = T4;
        using arg5_type = T5;
        using arg6_type = T6;
    };
    
    template<typename R, typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7> 
    struct function_traits_helper<R (*)(T1, T2, T3, T4, T5, T6, T7)> 
    {
        static constexpr unsigned arity = 7;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
        using arg4_type = T4;
        using arg5_type = T5;
        using arg6_type = T6;
        using arg7_type = T7;
    };
    
    template<typename R, typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7,
             typename T8> 
    struct function_traits_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8)> 
    {
        static constexpr unsigned arity = 8;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
        using arg4_type = T4;
        using arg5_type = T5;
        using arg6_type = T6;
        using arg7_type = T7;
        using arg8_type = T8;
    };
    
    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7,
             typename T8, typename T9> 
    struct function_traits_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9)> 
    {
        static constexpr unsigned arity = 9;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
        using arg4_type = T4;
        using arg5_type = T5;
        using arg6_type = T6;
        using arg7_type = T7;
        using arg8_type = T8;
        using arg9_type = T9;
    };
    
    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7,
             typename T8, typename T9, typename T10> 
    struct function_traits_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> 
    {
        static constexpr unsigned arity = 10;
        using result_type = R;
        using arg1_type = T1;
        using arg2_type = T2;
        using arg3_type = T3;
        using arg4_type = T4;
        using arg5_type = T5;
        using arg6_type = T6;
        using arg7_type = T7;
        using arg8_type = T8;
        using arg9_type = T9;
        using arg10_type = T10;
    };
}// namespace details

    template<typename F>
    struct function_traits : details::function_traits_helper<add_pointer_t<F>>
    {
    };
}

#endif//_TL_FUNCTION_TRAITS_INCLUDED_
