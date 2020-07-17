#ifndef _TL_REMOVE_REFERENCE_H_INCLUDED_
#define _TL_REMOVE_REFERENCE_H_INCLUDED_ 1

namespace tl{
    
    template<typename T>
    struct remove_cv_ref : remove_cv< remove_reference<T>> { };
    
    template<typename T>
    using remove_cv_ref_t = typename remove_cv_ref<T>::type;
}
#endif//_TL_REMOVE_REFERENCE_H_INCLUDED_
