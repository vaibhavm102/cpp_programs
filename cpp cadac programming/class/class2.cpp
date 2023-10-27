#include<iostream>
using namespace std;

class Student
{
    private:
        int prn_no;
        char name[20];

     public:
             void get();
              void put();
};             
      void  Student::get()
      {
        cout<<"\n Enter prn no and Name: ";
        cin>>prn_no>>name;
      }   
      void Student::put()
      {
        cout<<"\n prn no is : "<<prn_no;
        cout<<"\n student name: "<<name;

      }

int main()
{
 Student s;    //creating object

 s.get();
 s.put();
//////////////////////////////////////////////////
// student s[2];   //array of an object
// for (int i = 0; i < 2; i++)
// {
//     s[i].get();
//     s[i].put();
// }
////////////////////////////////////////////////
  // Student s,*p;
  // p=&s;
  // p->get();
  // p->put();

}