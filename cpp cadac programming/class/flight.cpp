#include <iostream>
using namespace std;

class flight
{
private:
    int flnum;
    char destination[20];
    float dist, fuel,f;

    float calfuel()
    {
       
     if (dist > 2000)
        {
            fuel = 2200;
        }
        else if (dist >= 1000 && dist <= 2000)
        {
            fuel = 1100;
        }
        else if (dist <= 1000)
        {
            fuel = 500;
        }
        
        return fuel;
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
        f=calfuel();
        //calfuel();
    }

    void showinfo()
    {
        cout << "flight num is" << flnum << "\n";
        cout << "destination is " << destination << "\n";
        cout << "distance is " << dist << "\n";
        cout << "fuel required is " <<f;
        // cout<<fuel;
    }
};
int main()
{
    flight f;
    f.feedinfo();
    cout << "******************\n";
    f.showinfo();
    return 0;
}