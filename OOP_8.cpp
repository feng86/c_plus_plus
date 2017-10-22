#include<iostream>
using namespace std;
class A
{
public:
    int x[100];
    int& operator [] (int i)
    {
        return x[i];
    }
};
class B
{
public:
    int x[100];
    int sum=0;
    B& operator [] (int i)
    {
        sum+=x[i];
        return *this;
    }
    int operator () (int a,int b)
    {
        return sum*a*b;
    }
    B& operator + (B& b)
    {
        for (int i=0;i<100;i++)
            this->x[i]+=b.x[i];
        return *this;
    }
    friend B& operator * (int l,B& b);
    friend B& operator + (int l, B& b);
};
B& operator * (int l, B& b)
{
    for (int i=0;i<100;i++)
        b.x[i]*=l;
    return b;
}
B& operator + (int l, B& b)
{
    for (int i=0;i<100;i++)
        b.x[i]+=l;
    b.sum=0;
    return b;
}
int main()
{
    A a;
    cout << "Input 5 element of a: ";
    for (int i=0;i<5;i++)
        cin >> a[i];
    B b;
    cout << "Input 5 elements of b: ";
    for (int i=0;i<5;i++)
        cin >> b.x[i];
    B result = 2 + b[a[1] ] [a[a[0]] ] (2,3) * b + b[2][a[3]]; // this is the question
    cout << "Result: ";
    for (int i=0;i<5;i++)
        cout << result.x[i] << ' ';
    return 0;
}
