#include<iostream>
#include<type_traits>

template <typename T> 
T Max(T x, T y)
{
    std::cout<<__PRETTY_FUNCTION__<<std::endl;
    if constexpr (std::is_floating_point_v<T>)
    {
        std::cout<<"Function max called on floating point"<<std::endl;
    }
    return x > y ? x : y;
}

int main () 
{
    auto max = Max(5,6);
    auto maxint = Max(4.5f,5.6f);
}