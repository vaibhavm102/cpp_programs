#include<iostream>
using namespace std;
int main()
{
    char op;
    cout<<"\n Enter any operator :'+','-','*','/' : ";
    cin>>op;
    float num1,num2;
    cout<<"\n Enter the value of num1 and num2 ";
    cin>>num1>>num2;
    switch (op)
    {
     case '+':cout<<num1<<"+"<<num2<<"="<<num1+num2;
             break;
     case '-':cout<<num1<<"-"<<num2<<"="<<num1-num2;
             break;        
     case '*':cout<<num1<<"*"<<num2<<"="<<num1*num2;
             break;  
     case '/':cout<<num1<<"/"<<num2<<"="<<num1/num2;
             break;        
    

    
    
    default:cout<<"\n not specified";
        break;
    }


}