#include <iostream>

using namespace std;

class book
{
    int page;
    float price;
    public: book() //declaration of default copyconstructor
            {

            }
            book(int x, float y) //declaration of parameterconstructor
            {
                page=x;
                price=y;
            }
            book(book &b) //declare and define copyconstructor b is an object
            {
                page=b.page;
                price=b.price;
            }
            void display()
            {
                cout<<"Pages = "<<page<<endl;
                cout<<"Price = "<<price<<endl;
            }
};

int main()
{
    book b1(256,143.50);
    book b2(b1); //this will call the copyconstructor book b2=b1
    cout<<"Object b1 "<<endl;
    b1.display();
    cout<<endl;
    cout<<"Object b2 "<<endl;
    b2.display();
    book b3; //this will use the assignmentoperator
    b3=b1;
    cout<<endl;
    cout<<"Object b3 "<<endl;
    b3.display();
    return 0;
}
