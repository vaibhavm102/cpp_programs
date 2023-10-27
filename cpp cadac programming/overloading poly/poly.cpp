#include<iostream>
using namespace std;

int add(int x,int y,int z)
{
     int r=x+y+z;
    cout<<r;
}

int add(int a,int b)
{
    int c=a+b;
    cout<<c;
}
float add(int d,float e)
{
   float f=d+e;
   cout<<f;
}
int main()
{
int a,b;
float e=2.2;
int d=5;
int x,y,z;

//add(10,20);
add(d,e);
//add(d,e,f);
}