#include<iostream>
using namespace std;

class demo
{
    private: int a,b;
    public:
    demo()
    {
      a=10;
      b=20;
    }
    demo(int x,int y)
    {
      a=x;
      b=y;
    }
    demo(demo &ob)
    {
      a=ob.a;
      b=ob.b;
    }
  void show()
  {
    cout<<"\n value of A:"<<a;
    cout<<"\n value of B: "<<b;

  }
  ~demo()
  {
    cout<<"\n destructor called...................";

  }
};             
      
    
int main()
{
demo d,d1(2,3),d2(d);    //creating object
d.show();
d1.show();
d2.show();

}