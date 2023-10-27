#include<iostream>
using namespace std;
class Book
{
    private:
        int bookno;
        char title[20];
        float price,total;

        float total_cost(int n)
        {
            int total =  price * n;
            return total;
        }
        
    public: 
        void input()
        {
            cout<<"Enter title of book: "<<endl;
            cin>>title;
            cout<<"Enter the price of the book: "<<endl;
            cin>>price;
        }
        void purchase()
        {
            cout<<"Enter no of books: "<<endl;
            cin>>bookno;
                        
            total=total_cost(bookno);
            cout<<"total cost ==>"<<total;
        }

};
int main()
{
    Book b;
    b.input();
    b.purchase();
    return 0;
}