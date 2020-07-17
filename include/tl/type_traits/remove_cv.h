#ifndef _TL_REMOVE_CV_H_INCLUDED_
#define _TL_REMOVE_CV_H_INCLUDED_ 1

namespace tl{
    
    template<typename T>
    struct remove_cv : remove_const< remove_volatile<T>> { };
    
    template<typename T>
    using remove_cv_t = typename remove_cv<T>::type;
}
#endif//_TL_REMOVE_CV_H_INCLUDED_
