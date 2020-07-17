#ifndef _TL_DETAILS_FUNCTION_PTR_HELPER
#define _TL_DETAILS_FUNCTION_PTR_HELPER 1

#include "integral_constant.h"

namespace tl{
namespace tl_details{

    template<typename R>
    struct is_function_ptr_helper : false_type { };

    //0 arg
    
    template<typename R>
    struct is_function_ptr_helper<R (*)()> : true_type { };

    template<typename R>
    struct is_function_ptr_helper<R (*)(void)> : true_type { };

    template<typename R>
    struct is_function_ptr_helper<R (*)(...)> : true_type { };

    template<typename R>
    struct is_function_ptr_helper<R (*)() noexcept> : true_type { };

    template<typename R>
    struct is_function_ptr_helper<R (*)(void) noexcept> : true_type { };

    template<typename R>
    struct is_function_ptr_helper<R (*)(...) noexcept> : true_type { };
    
    //1 arg

    template<typename R, typename T1>
    struct is_function_ptr_helper<R (*)(T1)> : true_type { };

    template<typename R, typename T1>
    struct is_function_ptr_helper<R (*)(T1 ...)> : true_type { };

    template<typename R, typename T1>
    struct is_function_ptr_helper<R (*)(T1) noexcept> : true_type { };

    template<typename R, typename T1>
    struct is_function_ptr_helper<R (*)(T1 ...) noexcept> : true_type { };

    //2 arg
    
    template<typename R, typename T1, typename T2>
    struct is_function_ptr_helper<R (*)(T1, T2)> : true_type { };

    template<typename R, typename T1, typename T2>
    struct is_function_ptr_helper<R (*)(T1, T2 ...)> : true_type { };

    template<typename R, typename T1, typename T2>
    struct is_function_ptr_helper<R (*)(T1, T2) noexcept> : true_type { };

    template<typename R, typename T1, typename T2>
    struct is_function_ptr_helper<R (*)(T1, T2 ...) noexcept> : true_type { };

    //3 arg
    
    template<typename R, typename T1, typename T2, typename T3>
    struct is_function_ptr_helper<R (*)(T1, T2, T3)> : true_type { };

    template<typename R, typename T1, typename T2, typename T3>
    struct is_function_ptr_helper<R (*)(T1, T2 ...)> : true_type { };

    template<typename R, typename T1, typename T2, typename T3>
    struct is_function_ptr_helper<R (*)(T1, T2, T3) noexcept> : true_type { };

    template<typename R, typename T1, typename T2, typename T3>
    struct is_function_ptr_helper<R (*)(T1, T2, T3 ...) noexcept> : true_type { };

    //4 arg

    template<typename R, typename T1, typename T2, typename T3,
             typename T4>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4)> : true_type { };

    template<typename R, typename T1, typename T2, typename T3,
             typename T4>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4 ...)> : true_type { };

    template<typename R, typename T1, typename T2, typename T3,
             typename T4>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4) noexcept> : true_type { };

    template<typename R, typename T1, typename T2, typename T3,
             typename T4>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4 ...) noexcept> : true_type { };

    //5 arg

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5 ...)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5) noexcept> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5 ...) noexcept> : true_type { };

    //6 arg
    
    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6 ...)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5 typename T6>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6) noexcept> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6 ...) noexcept> : true_type { };

    //7 arg

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7...)> : true_type { };
    
    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6,typename T7>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6) noexcept> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7...) noexcept> : true_type { };

    //8 arg

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8...)> : true_type { };
    
    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6,typename T7
             typename T8>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8) noexcept> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8...) noexcept> : true_type { };

    //9 arg

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8, typename T9>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8, typename T9>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8...)> : true_type { };
    
    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6,typename T7
             typename T8, typename T9>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9) noexcept> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8, typename T9>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9...) noexcept> : true_type { };
    
    //10 arg

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8, typename T9, typename T10>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8, typename T9, typename T10>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10...)> : true_type { };
    
    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6,typename T7
             typename T8, typename T9, typename T10>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) noexcept> : true_type { };

    template<typename R,  typename T1, typename T2, typename T3,
             typename T4, typename T5, typename T6, typename T7
             typename T8, typename T9, typename T10>
    struct is_function_ptr_helper<R (*)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10...) noexcept> : true_type { };
}//namespace tl_details
}
#endif//_TL_DETAILS_FUNCTION_PTR_HELPER
