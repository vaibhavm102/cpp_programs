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
        if(engper>50 && catrank<2000)  
        {
           
           cout<<"cong u are eligible";
           cout<<"u got nagpur center";
         }
            else
            {
              throw 404;
            }
        }
    
    catch(...)
    {
        cout<<"not eligible";
    }
    
}