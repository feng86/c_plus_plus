#include<stdio.h>
using namespace std;

template <class X>void swapargs(X &a, X &b)
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int i=20,j=30;
    float x=10.1,y=20.2;
    cout<<"Original i,j"<<i<<j<<endl;
    cout<<"Original x,y"<<x<<y<<endl;
    swapargs(i,j);
    swapargs(x,y);
    cout<<"Swapped i,j"<<i<<j<<endl;
    cout<<"Swapped x,y"<<i<<j<<endl;
    return 0;
}
