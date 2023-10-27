#include<iostream>
using namespace std;

class Student
{
    protected :
      int id;
      char sname[20];
    public:
     void get()
     {
        cout<<"\n enter id and sname";
        cin>>id;
        cin>>sname;
     }  
     void put()
     {
        cout<<"\nid of  student"<<id;
        cout<<"\nname of student"<<sname;
     }
};


class test : public Student
{
    protected:
         int m1,m2,m3;
         
     public:
     void getin()
     {      
             get();
            cout<<"\nenter marks of sub1";
            cin>>m1;
            cout<<"\nenter marks of sub2";
            cin>>m2;
            cout<<"\nenter marks of sub3";
            cin>>m3;
     }
     void putin()
     {
           put();
           cout<<"\nmarks of sub1"<<m1;
           cout<<"\nmarks of sub2"<<m2;
           cout<<"\nmarks of sub3"<<m3;
     }


};
class sport
{
    protected:
          int g1,g2,g3; 
    public:
     void input()
     {     
           
            cout<<"Enter grade of student1";
            cin>>g1;
            cout<<"Enter grade of student2";
            cin>>g2;
            cout<<"Enter grade of student3";
            cin>>g3;
            

     }
     void output()
     {
        
        cout<<"grade of student1"<<g1;
        cout<<"grade of student1"<<g2;
        cout<<"grade of student1"<<g3;
     }
};    

class result : public test,public sport
{
    protected :
       int totalmarks,totalgrades;

    public :
    void display()
    {
        //putin();
        //output();
        totalmarks=m1+m2+m3;
        cout<<"total marks got =>"<<totalmarks;
        totalgrades=g1+g2+g3;
        cout<<"total grade got ==>"<<totalgrades;
    }
};
int main()
{
   

    result r;
     r.get();
     r.put();
     r.input();
     r.output();
     r.display();  
}

