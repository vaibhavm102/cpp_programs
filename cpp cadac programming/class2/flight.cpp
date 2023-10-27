#include <iostream>
using namespace std;

class flight
{
private:
    int flnum;
    char destination[20];
    float dist, fuel;

    void calfuel()
    {
        
       
     if (dist > 2000)
        {
            fuel = 2200;
         //cout<<"fuel needed is"<<fuel;   
        }
        else if (dist >= 1000 && dist <= 2000)
        {
            fuel = 1100;
           
        }
        else
        {
            fuel = 500;
          
        }
        
        //cout<<"here is the fuel"<<fuel;
    }

public:
    void feedinfo()
    {

        cout << "enter flight num";
        cin >> flnum;
        cout << "destination is ";
        cin >> destination;
        cout << "distance is";
        cin >> dist;
        calfuel();
        //calfuel();
    }

    void showinfo()
    {
        cout << "flight num is" << flnum << "\n";
        cout << "destination is " << destination << "\n";
        cout << "distance is " << dist << "\n";
        // cout << "fuel required is " <<f;
        cout<<"Fuel required is: "<<fuel;
    }
};
int main()
{
    flight f;
    f.feedinfo();
   // cout << "******************\n";
    f.showinfo();
    return 0;
}