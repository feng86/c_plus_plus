#include<iostream>
using namespace std;
class B;
class C
{
public:
    int len;
    int x[10];
    int& operator [] (int i){return x[i];}
    B& operator<(C c);
};
class B
{
public:
    int len;
    int x[10];
    B() {}
    int& operator [] (int i){return x[i];}
    C operator * (int a)
    {
        C temp;
        temp.len=len;
        for (int i=0; i<len; i++)
            temp[i]=x[i]*a;
        return temp;
    }
    B& operator = (B b)
    {
        len=b.len;
        for (int i=0; i<b.len; i++)
            x[i]=b[i];
        return *this;
    }
};
B& C::operator<(C c)
{
    B temp;
    temp.len=len;
    for (int i=0; i<len; i++)
        temp[i]=x[i]< c[i];
    return temp;
}
class A
{
public:
    int len;
    B x[10];
    B& operator[] (int i){return x[i];}
};
int main()
{
    A a;
    B b;
    C c;
    a.len=3;
    b.len=3;
    c.len=3;

    b[0]=1;
    b[1]=2;
    b[2]=3;
    c[0]=1;
    c[1]=2;
    c[2]=3;
    a[0]=b;
    a[1]=b;
    a[2]=b;

    a[1]=c<a[1]*b[1]; // this is the question
    for (int i=0; i<3; i++)
        cout << a[1][i] << " ";
    return 0;
}
