/******************************************************************
* Copyright (C) 2024 Gary Gan All Rights Reserverd.
* @File Name: main.cpp
* @Author: Gary Gan <gan.fang.yi@foxmail.com>
* @Create Date: 2024-02-26
* @Description: (I don't know how to describe it or don't wanna do)
*******************************************************************/

#include <iostream>

template<class T>
class CMath
{
public:
    CMath(T const& t1, T const& t2):m_t1(t1), m_t2(t2) {}
    T add();
private:
    T m_t1;
    T m_t2;
};

template<class T> 
T CMath<T>::add()
{
    return m_t1 + m_t2;
}

int main()
{
    return 0;
}
