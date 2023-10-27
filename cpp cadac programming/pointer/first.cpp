#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
    int temp;
   temp=*x;
   *x=*y;
    *y=temp;

}
int main()
{
   int a=10,b=20;
   cout<<"numbers without swapping \n"<<"a="<<a<<"\nb="<<b;
   swap(&a,&b);
   cout<<"\nValues after swapping"<<"\nvalue of a="<<a<<"\nvalue of b ="<<b;

}