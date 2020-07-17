#ifndef _TL_DECAY_H_INCLUDED_
#define _TL_DECAY_H_INCLUDED_ 1

#include "remove_reference.h"
#include "remove_cv.h"
#include "remove_extent.h"
#include "is_array.h"
#include "is_function.h"

namespace tl { 
namespace details {

    template<typename T, bool Array, bool Function>
    struct decay_impl
    {
        using type = remove_cv_t<T>;
    };

    template<typename T>
    struct decay_impl<T, true, false>
    {
        using type = remove_extent_t<T>*;
    };

    template<typename T>
    struct decay_impl<T, false, true>
    {
        using type = T*;
    };
}// namespace details

    template<typename T>
    class decay
    {
        using no_ref_t = remove_reference_t<T>;

        public:

        using type = details::
            decay_impl<no_ref_t, 
                       is_array_v<no_ref_t>, 
                       is_function_v<no_ref_t>>;
    };

    template<typename T>
    using decay_t = typename decay<T>::type;

}
#endif//_TL_DECAY_H_INCLUDED_
