#include<iostream>
using namespace std;

int main()
{
  char a='b';
  char *ptr;
  cout<<"original value"<<a;
   ptr=&a;    
  cout<<"\naddress of a"<<(int)ptr;
  cout<<"\nvalue of a"<<a<<"Pointer value:"<<*ptr;
  *ptr = 'r';
  cout<<endl<<"change value "<<a;
  return 0;
}