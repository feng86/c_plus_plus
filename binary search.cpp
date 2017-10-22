#include<iostream>
using namespace std;

int main()
{
    int a[]= {1,3,6,45,89,100};
    int lowind=0;
    int highind=5;
    int midind;
    int num=45;
    while(lowind<=highind)
    {
        midind=(lowind+midind)/2;

        if(num==a[midind])
            break;
        if(num<a[midind])
            highind=midind-1;
        else
            lowind=midind+1;
    }

    if(lowind>highind)
    {
        cout<<num<<"is not in the arra"<<endl;
    }
    else
        cout<<num<<"is the the"<<a[midind]<<"th element of the arr"<<endl;

    return 0;

}
