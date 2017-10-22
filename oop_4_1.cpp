#include<bits/stdc++.h>
using namespace std;
class Kaj
{
public:
    int result;
    Kaj(Kaj &);
    Kaj(int,char);
    Kaj(int, int, char);
    Kaj(int,int,int,char,char);
};
Kaj::Kaj(Kaj &k)
{
    result=k.result;
}
Kaj::Kaj(int i, char c)
{
    result=(c=='+')?0+i:0-i;
}
Kaj::Kaj(int a, int b=0, char c='+')
{
    result=(c=='+')?a+b:a-b;
}
Kaj::Kaj(int a, int b, int c, char op1, char op2='+')
{
    result=(op1=='+')?a+b:a-b;
    result+=(op2=='+')?result+c:result-c;
}
int main()
{
    int a=2,b=3,c=5;
    char p='-',q='+';
    Kaj k1(10);
    Kaj k2(2,3,'-');
    Kaj k3(6,7,9,'+');
    Kaj k4(4,5,6,'+','-');
    Kaj k5(k1);
    Kaj k6(9,'-');
    Kaj k7(2,4);
    cout << k1.result << " ";
    cout << k2.result << " ";
    cout << k3.result << " ";
    cout << k4.result << " ";
    cout << k5.result << " ";
    cout << k6.result << " ";
    cout << k7.result << " ";

}
