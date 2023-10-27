//using protected 
#include<iostream>
using namespace std;

class A
{
    protected :
      int a;

    public:
    
     void get()
     {
        cout<<"\n enter 1st nos";
        cin>>a;
     }  
    //  void show()
    //  {
    //     cout<<"A"<<a;
        
    //  }
};
class B
{
     protected :
      int b;

    public:
    
     void getin()
     {
        cout<<"\n enter 2st nos";
        cin>>b;
     }
};

class C : public A,public B
{
    private: int c;

    public:
     void display()
     {
        //  get();
        //  getin();
         c=a+b;
        cout<<c;
     }
};
int main()
{
    C c;
    c.get();
    c.getin();
    
    c.display();
}

