#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string *name;
    int age;

    Person(string name,int age)
    {
        this->name= new string(name);
        this->age=age;
    }

    Person(const Person &p)
    {
        cout<<endl<<"Copy constructor is called"<<endl;
        name= new string(*p.name);
        age=p.age;
    }

    void change(string name,int age)
    {
        *(this->name)=name;
        this->age=age;
    }

    void introduce()
    {
        cout<<"Hey I am "<<*name<<" and my age is "<<age<<endl;
    }

};

int main()
{
    Person original("Pavel",24);
    original.introduce();

    Person duplicate=original;
    duplicate.introduce();

    original.change("Pavel Ali",35);
    original.introduce();
    duplicate.introduce();

    return 0;

}
