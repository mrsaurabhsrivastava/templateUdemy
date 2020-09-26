#include<iostream>

template <typename T, int size>
class stack 
{
    T m_buffer[size];
    int m_top{-1};
    public: 

    void push(T el)
    {
        m_buffer[++m_top] = el;
    }
    void pop();
    // void pop() 
    // {
    //     --m_top;
    // }
    T top ()
    {
        return m_buffer[m_top];
    }

    bool isEmpty() 
    {
        return m_top == -1;
    }

    static stack create();
};

template <typename T, int size> 
void stack<T, size>::pop() 
{
    --m_top;
}

template <typename T, int size> 
stack<T,size> stack<T, size>::create() 
{

}

int main () 
{

}