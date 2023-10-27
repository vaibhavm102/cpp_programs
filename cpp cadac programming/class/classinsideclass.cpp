#include<iostream>
using namespace std;

class student
{
    private:
     char name[20];
     int id;

    public:
      void get();
      void put();

    class address
    {
        private:
          char city[20],state[20];
        public:
          void in();
           void out();

    };      
};
void student::get()
{
  cout<<"enter name";
  cin>>name;
  cout<<"enter studentid";
  cin>>id;
}
void student::put()
{
   cout<<name;
   cout<<id;
}
void student :: address::in()
{
    cout<<"enter city";
    cin>>city;
    cout<"enter state";
    cin>>state;

}
void student :: address::out()
{
   cout<<city;
   cout<<state;
}
int main()
{
    student s;
    s.get();
    s.put();
    student::address a;
    a.in();
    a.out();

}