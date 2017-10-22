#include<bits/stdc++.h>
using namespace std;
class Stu
{
public:
    char name[50];
    int roll;
    int mark;
};
int main()
{
    struct Student
    {
        char name[50];
        int roll;
        int mark;
    };

    struct Student s[3];
    for (int i=0;i<3;i++)
    {
        cout << "Student " << i+1 << ": " << endl;
        cin >> s[i].name >> s[i].roll >> s[i].mark;
    }
    int total=0;
    for (int i=0;i<3;i++)
        total+=s[i].mark;
    cout << "Total marks: " << total << endl;

    Stu st[3];
    for (int i=0;i<3;i++)
    {
        cin >> st[i].name >> st[i].roll >> st[i].mark;
    }
    int totalm=0;
    for (int i=0;i<3;i++)
        totalm+=st[i].mark;
    cout << "Total marks: " << totalm;
}
