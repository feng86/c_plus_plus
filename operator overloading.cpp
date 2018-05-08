#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    int marks[10];

public:
    void set()
    {
        cout<<"Enter name & roll"<<endl;
        cin>>name>>roll;
        cout<<"Enter 5 marks of the student"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }

    Student operator+(int a)
    {
        Student temp;
        for(int i=0;i<5;i++)
        {
            temp.marks[i]=marks[i]+a;
        }
        return temp;

    }

    void operator=(const Student &s)
    {
        for(int i=0;i<5;i++)
        {
            marks[i]=s.marks[i];
        }
    }


    void display()
    {
        cout<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<endl;
        }
    }

    Student friend operator+(int n,Student o)
    {
        Student t;
        for(int i=0;i<5;i++)
        {
            t.marks[i]=o.marks[i]+n;
        }
        return t;

    }



};

int main()
{
    Student s1;
    s1.set();
    s1=s1+10;
    s1.display();
    s1=5+s1;
    s1.display();

}
