#include<iostream>
using namespace std;

class test
{
    private:
    int testcode,nocandidate,centerreq,total;
    char desc[30];
    
    int calcentr()
    {
      total=nocandidate/(100+1);
      return total;
    }

    public:
    void schedule()
    {
        cout<<"enter testcode";
        cin>>testcode;
        cout<<"enter description";
        cin>>desc;
        cout<<"num of candidates";
        cin>>nocandidate;
       // cout<<"enter center required";
        // cin>>centerreq;
        calcentr();   
    }
   void disptest()
   {
     cout<<"test code is "<<testcode<<"\n";
     cout<<"description is "<<desc<<"\n";
     cout<<"num of candidates are "<<nocandidate<<"\n";
     //cout<<"centerreq "<<centerreq<<"\n";
     cout<<"center require "<<calcentr();
   }
};
int main()
{
    test t;
    t.schedule();
    t.disptest();
      
}