#include<iostream>
using namespace std;
class Student
{
    char name[50];
    float marks[20];
    float total;
    void calcTotal(int n);
public:
    int roll;
    void setName(char *n);
    void setMark(float m,int i);
    void CalculateTotal(int n);
    float getTotal();
};
void Student::calcTotal(int n)
{
    total=0;
    for (int i=0;i<n;i++)
        total+=marks[i];
}

void Student::setName(char *n)
{
    int i=0;
    while(n[i]!=0)
    {
        name[i]=n[i];
        i++;
    }
    name[i]=0;
}
void Student::setMark(float m,int i)
{
    marks[i]=m;
}

void Student::CalculateTotal(int n)
{
    calcTotal(n);
}

float Student::getTotal()
{
    return total;
}

int main()
{
    int t;
    cout << "no of students: ";
    cin >> t;
    int n;
    cout << "enter subjects: ";
    cin >> n;
    Student s[t];
    for (int j=0;j<t;j++)
    {
    char name[50];
    cout << "Enter name: ";
    cin >> name;
    s[j].setName(name);
    cout << "Enter roll: ";
    cin >> s[j].roll;
    cout << "Enter marks: ";
    for (int i=0;i<n;i++)
    {
        float m;
        cin >> m;
        s[j].setMark(m,i);
    }
    s[j].CalculateTotal(n);
    cout << "Output: Roll= " << s[j].roll << " total marks = " << s[j].getTotal() << endl;
    }
    return 0;
}
