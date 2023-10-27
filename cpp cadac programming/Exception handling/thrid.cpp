#include<iostream>
using namespace std;
int main()
{
    int a;
    
    int engper,catrank;
    cout<<"enter percentage";
    cin>>engper;
    cout<<"rank in precat";
    cin>>catrank;

    try
    {
        if(engper>50)  
        {
           
           cout<<"cong u are eligible";
           
         }
         else
         {
            throw 505;
         }
         try
         {
           if(catrank<2000)
           {
            cout<<"u got nagpur center";
           }
            else
            {
              throw 404;
            } 
         }
          catch(...)
         {
         cout<<"got less rank";
        
        }
  }
   catch(...)
         {
         
        cout<<"not eligible";
        }
} 