#include<iostream>
using namespace std;

int main()
{
    int sum=0,r,a,n,temp;
    cout<<"enter number";
    cin>>n;
    temp=n;
    while (n>0)
     {
     r=n%10;
     sum=(sum*10)+r;
     n=n/10;  
    }
    if (sum==temp)
    {
       cout<<"num is palidrome";
    }
    else
        cout<<"num is not palidrome";
 return 0;   
}