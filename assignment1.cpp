#include<iostream>

template <typename T>
T Sum(T x, T y)
{
    return x+y;
}

template <typename T> 
T arraySum(T *xArr, int arrSize)
{
    T sum{xArr[0]};
    for (int i = 1; i < arrSize; i++)
        sum += xArr[i];
    return sum;
}

template <typename T> 
T max(T *xArr, int arrSize)
{
    T max{xArr[0]};
    for (int i = 1; i < arrSize; i++)
    {
        if (xArr[i] > max)
            max = xArr[i];
    }
    return max;
}

template <typename T, size_t SIZE> 
T max1(const T (&xArr) [SIZE])
{
    T max{xArr[0]};
    for (int i = 1; i < SIZE; i++)
    {
        if (xArr[i] > max)
            max = xArr[i];
    }
    return max;
}

int main ()
{
    float lArr[5] = {3.4, 4,5,6,9};
    std::cout<<max1(lArr)<<std::endl;
}