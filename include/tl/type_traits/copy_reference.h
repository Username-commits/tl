#ifndef _TL_COPY_REFERENCE_H_INCLUDED_
#define _TL_COPY_REFERENCE_H_INCLUDED_ 1

#include "add_lvalue_reference.h"
#include "add_rvalue_reference.h"
#include "is_lvalue_reference.h"
#include "is_rvalue_reference.h"
#include "conditional.h"

namespace tl{

    template<typename T, typename U>
    struct copy_reference
    {
        using type = conditional_t<is_rvalue_reference_v<U>, add_rvalue_reference_t<T>,
              conditional_t<is_lvalue_reference_v<U>, add_lvalue_reference_t<T>, T>>;
    };

    template<typename T, typename U>
    using copy_reference_t = typename copy_reference<T, U>::type;
}
#endif//_TL_COPY_REFERENCE_H_INCLUDED_ 
