#include<iostream>
using namespace std;

class datatype
{
    

    public :
      void first()
      {
        int a=10;
        cout<<"A"<<a;
      }
      void first(int x)
      {
        int b;
        b=x;
        cout<<"B"<<b;
      }
      void first(int c,int d)
      {
         int z;
         z=c+d;
         cout<<"Z"<<z;
      }
};
int main()
{
    datatype d;
    d.first();
    d.first(20);
    d.first(2,2);

}