#include<iostream>
using namespace std;
int main()
{
    int a=50,b=0;
    int c;

    try
    {
        if(b==0)
        {
            throw 404;
        }
    }
    catch(...)
    {
        cout<<"throw exception";
    }
    
}