#include <iostream>
using namespace std;

class invalid
{
public:
    virtual void displayArea() = 0;
};

class triangle : public invalid
{
public:
    void displayArea()
    {
        int a=2,b=3,area;
        area=.5*a*b;
        cout<<"The class is valid:  "<<area<<endl;
    }
};
class rectangle : public invalid
{
public:
    void displayArea()
    {
        int a=2,b=3,area;
        area=a*b;
        cout<<"The class is valid:  "<<area<<endl;
    }
};

class circle : public invalid
{
public:
    void displayArea()
    {
        int a=2,area;
        area=3.14*a*a;
        cout<<"The class is valid:  "<<area<<endl;
    }
};


main()
{
    invalid *obj;
    triangle v;

    rectangle t;

    circle r;

    obj = &v;
    obj-> displayArea();

    obj = &t;
    obj-> displayArea();

    obj = &r;
    obj-> displayArea();


}

