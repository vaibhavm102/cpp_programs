#include<iostream>
using namespace std;

class Employee
{
    protected :
      int id;
      char ename[20];
    public:
     void get()
     {
        cout<<"\n enter id and employeename";
        cin>>id;
        cin>>ename;
     }  
     void show()
     {
        cout<<"id of  employee"<<id;
        cout<<"name of employee"<<ename;
     }
};


class Salary : public Employee
{
    protected:
            int empsal;
    public:
     void display()
     {
        empsal=4500;
        cout<<"\nSalary of employee is"<<empsal;
     }
};
int main()
{
   Salary s;
   s.get();
   s.show();
   s.display();
}

