
#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    int y;
    A()
    {
        cout<<"AD"<<endl;
    }
        A(int x)
        {
            y=x;
            cout<<"AP"<<endl;
        }
};
class B:virtual public A
{
public:
    int y;
    B()
    {
        cout<<"BD"<<endl;
    }
        B(int x):A(x)
        {
            cout<<"BP"<<endl;
        }
};
class C:virtual public A
{
public:
    C()
    {
        cout<<"CD"<<endl;
    }
        C(int x):A(x)
        {
            cout<<"CP"<<endl;
        }
};
class E:public B,public C
{
public:
    E()
    {
        cout<<"AD"<<endl;
    }
        E(int x):B(x)
        {
            cout<<"EP1"<<endl;
        }
        E(int x,int y,int z):(C(x),A(y),B(z))
        {
            cout<<"EP2"<<endl;
        }
};
int main()
{
    cout<<"_e1_"<<endl;
     E e1;
     cout<<"_e2(1)_"<<endl;
     E e2(1);
     cout<<"_e3(2,3,4)_"<<endl;
     E e3(2,3,4);
     cout<<"_b(5)_"<<endl;
     B b(5);
     cout<<"_c()_"<<endl;
     C c;
     return 0;
}
