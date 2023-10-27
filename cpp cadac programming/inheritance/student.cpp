#include<iostream>
using namespace std;

class Student
{
    private :
      int id;
      char name[20];
    public:
     void get()
     {
        cout<<"\n enter id and name";
        cin>>id;
        cin>>name;
     }  
     void show()
     {
        cout<<"id of  student"<<id;
        cout<<"name of student"<<name;
     }
};


class Attendence : public Student
{
    private:

    public:
     void display()
     {
        cout<<"\n call of Atendence class";
     }
};
int main()
{
    Attendence a;
    a.get();
    a.show();
    a.display();
}

