#include<iostream>
using namespace std;

class batsman
{
    private:
       int bcode,ining,notout,runs;
       char bname[20];
        float bavg;
    float calavg()
    {
        bavg=runs/(ining-notout);
        return bavg;
    }

    public:

    void readdata()
    {
        while(true)
        {
        cout<<"enter bcode";
        cin>>bcode;
        if(bcode>999 || bcode<10000)
        {
        break;
        
        }
        }
        cout<<"enter bname";
        cin>>bname;
        cout<<"enter inning";
        cin>>ining;
        cout<<"enter notout";
        cin>>notout;
        cout<<"enter runs";
        cin>>runs;
         //calavg();
    } 
    void displaydata()
    {
        cout<<"bcode is "<<bcode<<"\n";
        cout<<"bname is "<<bname<<"\n";
        cout<<"ining is "<<ining<<"\n";
        cout<<"notout "<<notout<<"\n";
        cout<<"runs scored "<<runs<<"\n";
        cout<<calavg();
        cout<<bavg;
    }
};
int main()
{
    batsman b;
    
    b.readdata();
    b.displaydata();
return 0;
}