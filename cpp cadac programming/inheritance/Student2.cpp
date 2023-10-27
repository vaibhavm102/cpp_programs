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


class science : public Student
{
    protected:
            char s1[20],s2[20],s3[20];
    public:
     void getin()
     {
        cout<<"\nEnter name of subject1";
        cin>>s1;
        cout<<"\nEnter name of subject2";
        cin>>s2;
        cout<<"\nEnter name of subject3";
        cin>>s3;
            
     }
     void putin()
     {
        cout<<sname<<"\n";
        cout<<id<<"\n";
        cout<<"name of sub1 :"<<s1<<"\n";
        cout<<"name of sub2 :"<<s2<<"\n";
        cout<<"name of sub1 :"<<s3<<"\n";
     }


};
class commerce : public Student
{
    protected:
            char c1[20],c2[20],c3[20];
    public:
     void input()
     {
         get();  
        cout<<"\nEnter name of subject1";
        cin>>c1;
        cout<<"\nEnter name of subject2";
        cin>>c2;
        cout<<"\nEnter name of subject3";
        cin>>c3;
            
     }
     void output()
     { 
        put();
        // cout<<sname;
        //cout<<id;
        cout<<"\nname of sub1 :"<<c1;
        cout<<"\nname of sub2 :"<<c2;
        cout<<"\nname of sub1 :"<<c3;
     }
};    
int main()
{
    science s;
    //s.get();
    //s.put();
    s.getin();
    s.putin();

   commerce c;
//    c.get();
//    c.put();
   c.input();
   c.output();

   
}

