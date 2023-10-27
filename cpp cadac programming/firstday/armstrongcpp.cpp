#include<iostream>
using namespace std;
int main()
{
    int r,sum=0,a,n;
    cout<<"Enter any no";
    cin>>n;
    int temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if (sum==temp)
    {
        cout<<"no is armstron";
    }
    else
    {
        cout<<"not an armstrong";
    }
    return 0;
}