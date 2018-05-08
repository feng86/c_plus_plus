#include<iostream>
using namespace std;

class Student{
   string name;
   int roll;
   int marks[10];
   int total;
   public:

    void input()
    {
        cout<<"Enter student's name and roll"<<endl;
        cin>>name>>roll;
        cout<<"Enter five marks of the student"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }

    }
   void sum ()
   {
       total=0;
       for(int j=0;j<5;j++)
       {
           total=total+ marks[j];
       }
   }

   void display()
   {
       cout<<"Name: "<<name<<"  Roll: "<<roll<<" Total marks: "<<total<<endl;
   }


};



int main()
{
    Student st,st2,st3;
    st.input();
    st.sum();
    st.display();


    st2.input();
    st2.sum();
    st2.display();

    st3.input();
    st3.sum();
    st3.display();

    return 0;
}
