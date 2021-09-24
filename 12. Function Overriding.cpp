#include<iostream>
using namespace std;

class A
{
    public:
    double c;
    void area(double a, double b)
    {
        c = 0.5*a*b;
        cout<<"Class A: Area of Triangle is: "<<c<<endl;
    }
};

class B
{
    public:
    double c;

    void area(double a, double b)
    {
        c = a*b;
        cout<<"Class B: Area of Rectangle is: "<<c<<endl;
    }

    void area(double a, double b, double d)
    {
        c = a+b;
        cout<<"Class B: Addition Result: "<<c<<endl;
    }
};

main()
{
    double m,n;
    cin>>m>>n;

    A ob1;
    B ob2;
    ob1.area(m,n);
    ob2.area(m,n);
    ob2.area(m,n,10.5);
}
