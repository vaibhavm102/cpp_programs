#include<iostream>
using namespace std;

class cashRegister
{
    private :
         int cash,cashonhand;

    public :

     cashRegister() 
     {
        cash=500;
     }    
     cashRegister(int a)
     {
        cashonhand=a;

     }
     int getCurrentBalance()
     {
       cout<<cashonhand;
     }
};

int main()
{
    cashRegister c(),c1(300);
    //cashRegister c;
    //c.getCurrentBalance();
}
