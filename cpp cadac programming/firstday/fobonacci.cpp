#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,c=0,n;
    cout<<"enter any value";
    cin>>n;
    while (a<=n)
    {
       cout<<c;
        a=b;
        b=c;
        c=a+b;
        a++;
    }
    
     return 0;
}