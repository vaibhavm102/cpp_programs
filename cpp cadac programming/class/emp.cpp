#include<iostream>
using namespace std;
class Employee
{
 public:
 int emp_id;
 char emp_name[20];
  
 int input()
 {
   cout<<"Enter emp id and name";
   cin>>emp_id;
   cin>>emp_name;
 }
 int output()
 {
  cout<<emp_id<<"\n";
  cout<<emp_name;
 }
};
int main()
{
    //int emp_id;
    Employee e;
    e.input();
    e.output();

return 0;
}


