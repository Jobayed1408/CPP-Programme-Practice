#include<iostream>
using namespace std;

class Width
{
    public:
        double w;
        Width()
        {
            cin>>w;
        }

};

class Height
{
    public:
        double h;
        Height()
        {
            cin>>h;
        }

};

class Rectangle : public Width, public Height
{
    public:
        void display()
        {
            double area;
            area = w * h;
            cout<<"Area is: "<<area;
        }
};



main()
{
    Rectangle ob;
    ob.display();
}





