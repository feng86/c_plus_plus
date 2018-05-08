#include <iostream>
#include <string>
using namespace std;

class Person{
public:
string *name;
int age;

    Person(string name,int age){
    this->name = new string(name);
    this->age = age;
    }

    Person(const Person &p){
    cout << "copy constructor is called "<<endl;
    name = new string(*p.name);
    age = p.age;
    }

    void changeNameandAge(string name,int age){
    *(this->name) = name;
    this->age = age;
    }

    void introduce(){
    cout << "hey i am "<<*name<<" and i am "<<age<<" years old"<<endl;
    }
};

int main()
{
    Person anil("anil",24);
    anil.introduce();

    Person duplicateanil = anil;
    duplicateanil.introduce();

    anil.changeNameandAge("anil shetty",100);
    anil.introduce();
    duplicateanil.introduce();
    return 0;
}
