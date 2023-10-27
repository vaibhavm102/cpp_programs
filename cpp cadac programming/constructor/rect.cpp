#include<iostream>
using namespace std;

class area
{
    private: int len,wid,rect;
    public:
    area()
    {
      int len=10,wid=20;
      
    }
    area(int x,int y)
    {
      len=x;
      wid=y;
    }
    area(area &a)
    {
        len=a.len;
        wid=a.wid;
        //cout<<"using copy constructor";

     }
     void rectangle()
     {
        rect=len*wid;
        cout<<rect;
     }
  
};             
          
int main()
{
  int x,y;
  cout<<"enter x";
  cin>>x;
  cout<<"enter y";
  cin>>y;

  area();
  area(10,20);
  //area();
    area a;
  a.rectangle();
}