#ifndef _TL_COPY_CV_H_INCLUDED_
#define _TL_COPY_CV_H_INCLUDED_ 1

#include "add_const.h"
#include "add_volatile.h"
#include "is_volatile.h"
#include "is_const.h"
#include "conditional.h"

namespace tl{

    template<typename T, typename U>
    class copy_cv
    {
        using type_c = conditional_t<is_const_v<U>, add_const_t<T>, T>;

        public:

        using type = conditional_t<is_volatile_v<U>, add_volatile_t<type_c>, type_c>;
    };

    template<typename T, typename U>
    using  copy_cv_t = typename copy_cv<T, U>::type;
}
#endif//_TL_COPY_CV_H_INCLUDED_ 
