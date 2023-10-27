#include<iostream>
using namespace std;

class sample
{
    int a;

    public:
      sample()
      {
        a=10;

      }
      friend void add();
};
class sample1
{
    int b;

    public:
      sample1()
      {
        b=30;

      }
      friend void add();
};
void add()
{
   sample s;
   sample1 s1;
   int c=s.a+s1.b;
   cout<<c;
}
int main()
{
   add();
}