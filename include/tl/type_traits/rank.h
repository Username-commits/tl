#ifndef _TL_RANK_H_INCLUDED_
#define _TL_RANK_H_INCLUDED_ 1

#include "integral_constants.h"

namespace tl{
namespace details{

    template<typename T, std::size_t N>
    struct rank_impl
    {
        static constexpr std::size_t value = N;
    };

    template<typename T, std::size_t R, std::size_t N>
    struct rank_impl<T const [R], N>
    {
        static constexpr std::size_t value = rank_impl<T, N+1>::value;
    };

    template<typename T, std::size_t R, std::size_t N>
    struct rank_impl<T volatile [R], N>
    {
        static constexpr std::size_t value = rank_impl<T, N+1>::value;
    };

    template<typename T, std::size_t R, std::size_t N>
    struct rank_impl<T const volatile [R], N>
    {
        static constexpr std::size_t value = rank_impl<T, N+1>::value;
    };

    template<typename T, std::size_t N>
    struct rank_impl<T const [], N>
    {
        static constexpr std::size_t value = rank_impl<T, N+1>::value;
    };

    template<typename T, std::size_t N>
    struct rank_impl<T volatile [], N>
    {
        static constexpr std::size_t value = rank_impl<T, N+1>::value;
    };

    template<typename T, std::size_t N>
    struct rank_impl<T const volatile [], N>
    {
        static constexpr std::size_t value = rank_impl<T, N+1>::value;
    };

}//namespace details

    template<typename T>
    struct rank : integral_constant<std::size_t, details::rank_impl<T, 0>::value> { };

    template<typename T>
    constexpr std::size_t rank_v = rank<T>::value;
}

#endif//_TL_RANK_H_INCLUDED_
