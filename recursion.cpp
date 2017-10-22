#include<iostream>
using namespace std;
int sum=0;
int recursion(int value)
{
    if(value>0)
    {
        sum=sum+value;
        cout<<"Call no "<<value<<" Sum is "<<sum<<endl;
        recursion(value-1);
    }
}

int main()
{
    recursion(7);
}
