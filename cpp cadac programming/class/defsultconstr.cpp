#include<iostream>
using namespace std;

class Holiday
{
    private: int a,b,c;
    public:

    Holiday()
    {
      a=10;
      b=20;
      c=30;
    }
    Holiday(int x)
    {
     a=x;
     
    
    }
    Holiday(int x,int y)
    {
     a=x;
     b=y;
    
    }
    
  void show()
  {
    cout<<"\n value of A:"<<a;
    cout<<"\n value of B: "<<b;
    //cout<<"\n value of C: "<<c;

  }
   void show1()
  {
    cout<<"\n value of A:"<<a;
    //cout<<"\n value of B: "<<b;
  }
};             
      
    
int main()
{
Holiday h,h1(10),h2(5,6);    //creating object
h.show();
h1.show1();
h2.show();
}