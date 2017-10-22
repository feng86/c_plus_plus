#include<iostream>
using namespace std;

class Student{
public:
    int roll;
    int mark;
};

class Derived : public Student{
    public:
    void setup()
    {
        cout<<"Enter your roll & mark"<<endl;
        cin>>roll>>mark;
    }
    void printf()
    {
        cout<<roll<<mark<<endl;
    }
};


int main()
{
    Derived o;
    o.setup();
    o.printf();
    Student s;
    cout<<endl<<s.mark;
}
