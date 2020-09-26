#include<iostream>

// template <typename T>
// void Print(const std::initializer_list<T> &args)
// {
//     for (const auto &v: args)
//         std::cout<<v<<" ";
//     std::cout<<std::endl;
// }

void Print() 
{
    std::cout<<std::endl;
}
template <typename T, typename... Params>
void Print(T a , Params... args)
{
    std::cout<<a<<" ";
    std::cout<<sizeof...(args)<<std::endl; 
    Print(args...);
}
int main () 
{
    // Print<double>({1,2.5,3,4});
    Print(1,3,4.4f,4.5);
}