#include<iostream>
using namespace std;

int factorial(int n,int fact)
{
    
     for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
         
    }
    cout<<fact;
}

int main()
{
  int n,fact=1;
  cout<<"enter any no";
  cin>>n;
  factorial(n,fact);
}
