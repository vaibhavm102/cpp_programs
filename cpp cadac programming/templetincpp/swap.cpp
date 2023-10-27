#include<iostream>
using namespace std;
template <class T>
void swap(T *a,T *b)
{

  *a=*a+*b;
  *b=*a-*b;
  *a=*a-*b;  
   // return (x,y);
};
int main()
{
    int x=10;
    int y=20;
    swap(x,y);
    cout<<"value of X"<<x<<"\nvalue of y"<<y<<"\n";
}