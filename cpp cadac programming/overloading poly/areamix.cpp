#include<iostream>
using namespace std;


float area(float pi,int r)
{
    float acirc = pi*r*r; 
    cout<<"area of circle is ";
    cout<<acirc;
}
int area(int l,int b)
{
    int arearect = l * b;
    cout<<"area of rect is ";
    cout<<arearect;
}
int main()
{
  int l=20,b=10;
  float pi=3.14;
  int r;

  area(pi,2);
  //area(2,5);

}