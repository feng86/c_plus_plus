#include<iostream>
using namespace std;

class myclass{
  int a;
  public:
      void seta(int number);
      int geta();

};

void myclass::seta(int num)
{
    a=num;
}
int myclass::geta()
{
    return a;
}
int main()
{
    myclass obj1,obj2;
    obj1.seta(10);
    obj2.seta(99);

    cout<<obj1.geta()<<endl;
    cout<<obj2.geta()<<endl;
    return 0;
}
