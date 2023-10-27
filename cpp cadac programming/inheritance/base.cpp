#include<iostream>
using namespace std;

class Base
{
    private :
      int a,b;

    public:
     void get()
     {
        cout<<"\n enter 2 nos";
        cin>>a>>b;
     }  
     void show()
     {
        cout<<"A"<<a;
        cout<<"B"<<b;
     }
};


class Derive : public Base
{
    private:

    public:
     void display()
     {
        cout<<"\n call of base class";
     }
};
int main()
{
    Derive d;
    d.get();
    d.show();
    d.display();
}

