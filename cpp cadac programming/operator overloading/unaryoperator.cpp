//Unary operator 
#include<iostream>
using namespace std;
class inc
{
int i,a,b;
public:
     inc()
    {
     a=5;
     b=5;
    }

void operator ++()
{
a=++a;
b=b+1;
}
void operator --()
{
a=--a;
b=b-1;
}
void show()
{
   cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;
}
};
int main()
{

inc i;
i.show();
 ++i;
 i.show();
--i;
i.show();
}