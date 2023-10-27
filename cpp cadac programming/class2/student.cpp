#include <iostream>
using namespace std;

class student
{
private:
    int admno;
    char sname[20];
    float eng, math, sci, total;

    float ctotal()
    {
        //cout << "enter marks of eng math and sci";
        
        total = eng + math + sci;
        // cout<<total;
        return total;
    }

public:
    void takedata()
    {
        cout << "enter admno , sname";
        cin >> admno >> sname;
         cout<<"enter marks of eng sci math";
        // cout<<ctotal;
        cin>>eng>>sci>>math;
         
        // return ctotal;
    }

    void showdata()
    {

        cout << "admo is" << admno;
        cout << "student name is " << sname;
        cout << "total got==>" << ctotal() << endl;
    }
};

int main()
{
    student s;
    // s.ctotal();
    s.takedata();
    s.showdata();
    return 0;
}