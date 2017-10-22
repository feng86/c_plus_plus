#include<iostream>
using namespace std;
class sta{
    public:
    static int a;
    int b;
    void fun()
    {
        cout<<++a<<" "<<++b<<endl;
    }
    sta()
    {
        b=0;
    }
};

int sta :: a;
int main()
{
    sta o1,o2;
    o1.fun();
    o1.fun();
    o2.fun();
}
