//derive class num with data member input n in function   2)class square input nSquare 3)class cube  ncube

#include<iostream>
using namespace std;

class Num
{
    protected :
      int n;

    public:
    
     void get()
     {
        cout<<"\n enter value for n";
        cin>>n;
     }  
    //  void show()
    //  {
    //     cout<<"A"<<a;
        
    //  }
};
class square : public Num
{
     protected :
      int a;

    public:
    
     void getin()
     {
        a=n*n;
        cout<<"square is"<<a<<"\n";
     }
};

class Cube : public square
{
    protected : int c;

    public:
     void display()
     {
        
         c=n*n*n;
        cout<<"cube is"<<c;
     }
};
int main()
{
    // square s;
    // s.get();
    // s.getin();
    Cube c;
    c.get();
    c.getin(); 
    c.display();
}

