#include<iostream>
using namespace std;

class Input
{
    public:
        int a,b;
        Input()
        {
            cin>>a>>b;
        }

};

class Add: public Input
{
    public:
        int c;
        Add()
        {
            c = a+b;
        }

};

class Subtract: public Input
{
    public:
        int d;
        Subtract()
        {
            d = a-b;
        }

};

class Output : public Add, public Subtract
{
    public:
        void display()
        {
            cout<<"Add Result is: "<<c<<endl;
            cout<<"Subtract Result is: "<<d<<endl;
        }
};



main()
{
    Output ob;
    ob.display();
}






