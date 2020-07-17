#ifndef _TL_COPY_CV_REF_H_INCLUDED_
#define _TL_COPY_CV_REF_H_INCLUDED_ 1

#include "copy_cv.h"
#include "copy_reference.h"
#include "remove_reference.h"
#include "add_reference.h"
#include "conditional.h"

namespace tl{

    template<typename T, typename U>
    struct copy_cv_ref
    {
        using type = copy_reference_t< copy_cv_t<T, remove_reference_t<U>> , U>;
    };

    template<typename T, typename U>
    using  copy_cv_t = typename copy_cv<T, U>::type;
}
#endif//_TL_COPY_CV_REF_H_INCLUDED_ 
