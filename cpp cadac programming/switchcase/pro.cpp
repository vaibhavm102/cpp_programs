#include<iostream>
using namespace std;

int main()
{
    
    int choice,a,b,ans;
    //char y,n;
    do
    {
        
    cout<<" 1)+ \n 2)- \n 3)* \n 4)/ \n 5)Exit\n plz select ur choice \n";
    cin>>choice;

    switch (choice)
    {
    case 1:
         cout<<"plz enter any 2 nos:\n";
         cin>>a>>b;
         cout<<"addition is : "<<a+b;
         cout<<"do u want to continue \n 1)y \n 2)n";
         cin>>ans;
        break;
    
    case 2:
         cout<<"plz enter any 2 nos:\n";
         cin>>a>>b;
         cout<<"substraction is : "<<a-b;
        break;

    case 3:
         cout<<"plz enter any 2 nos:\n";
         cin>>a>>b;
         cout<<"multiplication is : "<<a*b;
         break;

    case 4:
          cout<<"plz enter any 2 nos:\n";
         cin>>a>>b;
         cout<<"division is : "<<a/b;          
         break;
    default:
        cout<<"enter invalid choice";
        break;
    } 
    } while (ans==1);
    
    return 0;


}