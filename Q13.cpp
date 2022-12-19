#include<iostream>
using namespace std;

template <class T>
    T value(T n1, T n2)
    {
        return (n1 > n2) ? n1 : n2;
    }
int main()
{
    cout<<value(5,2)<<" is large"<<endl;
    cout<<value(5.3,2.3)<<" is large"<<endl;
}