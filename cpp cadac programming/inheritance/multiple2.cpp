//using return value

#include<iostream>
using namespace std;

class A
{
    private :
      int a;

    public:
    
     int get()
     {
        cout<<"\n enter 1st nos";
        cin>>a;

        return 0;
     }  
    //  void show()
    //  {
    //     cout<<"A"<<a;
        
    //  }
};
class B
{
     private :
      int b;

    public:
    
     int getin()
     {
        cout<<"\n enter 2st nos";
        cin>>b;

        return 0;
     }
};

class C : public A,public B
{
    private: int c,x,y;

    public:
     void display()
     {
         x=get();
         y=getin();
         c=x+y;
        cout<<c;
     }
};
int main()
{
    C c;
    //c.get();
    //c.getin();
    
    c.display();
}

