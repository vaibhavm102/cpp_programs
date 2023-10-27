#include<iostream>
using namespace std;

class sample
{
    float pi;

    public:
      sample()
      {
        pi=3.14;

      }
      friend void area();
};
class sample1
{
    int r;

    public:
      sample1()
      {
        r=2;

      }
      friend void area();
};
void area()
{
   sample s;
   sample1 s1;
   float arect = s.pi*s1.r*s1.r;
   cout<<arect;
}
int main()
{
   area();
}