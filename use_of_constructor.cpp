#include<bits/stdc++.h>
using namespace std;

class Constructor{
public:

    Constructor(int,char,float c=5.0)
    {
        cout<<"int,char,float is called"<<endl;
    }

    Constructor(int,char,char)
    {
        cout<<"int,char,char is called"<<endl;
    }

    Constructor(int,float,int)
    {
        cout<<"int,float,int is called"<<endl;
    }

};


int main()
{
    Constructor a(2, 'a', 3.3f);
    Constructor b(3, 'a');
    Constructor c(3, 'b', 'c');
    Constructor d(4, 3.4f, 4);
    return 0;
}
