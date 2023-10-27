#include<iostream>
using namespace std;

class Report
{
  private:
        int adno;
        char name[20];
        float marks[5];
        int total;
        int average;

        void getavg()
        {
            for(int i=0; i<5; i++)
            {
                total=total+marks[i];
            }
            average = total/5;
            
        }
        
    public:
        void readinfo()
        {          
            while(true)
            {
            cout<<"Enter adno: ";
            cin>>adno;
            if(adno>999 && adno<10000){
                break;
            }
            }
            cout<<"Enter the name: "<<endl;
            cin>>name;
            cout<<"Enter five elements of an array: "<<endl;
            for(int i=0; i<5; i++){
                cin>>marks[i];
            }
            getavg();
        }
        void displayinfo()
        {
            cout<<"The value of adno: "<<adno<<endl;
            cout<<"The value of name: "<<name<<endl;
            for(int i=0; i<5; i++)
            {
                cout<<"The marks of "<<i+1<<"th subject is "<<marks[i]<<"\n";
            }
            cout<<"Average of marks: "<<average<<"\n";
        }

};
int main()
{
    Report r;
    r.readinfo();
    r.displayinfo();
    return 0;
}