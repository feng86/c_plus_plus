#include<iostream>
/*
ob1(2,'a',3.3)
ob2(3,3.3)
ob3(3,'b','c')
ob4(4,3.4,4)
*/
class A
{
public:
    A(int,char,float);
    A(int , char,char);
    A(int,float,int);

};

A::A(int i, char a, float j){}
A::A(int i, float f, int j=5){}
A::A(int i,char c, char d){}

int main()
{
    A a(2, 'a', 3.3f);
    A b(3, 3.3f);
    A c(3, 'b', 'c');
    A d(4, 3.4f, 4);
}
