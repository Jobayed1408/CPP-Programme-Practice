#include<iostream>
using namespace std;
class sample
{
public:
    int a;
    double b;


    void random(double a,double b)
    {
        double x;
        x=0.5*a*b;
        cout<<"Area of triangle: "<<x<<endl;
    }

    void random(double a)
    {
        //int m;
    double x;
    x=a*a;
    cout<<"Area of square: "<<" = "<<x<<endl;

    }

};


int main()
{
    sample ob;

    ob.random(1.5,2.5);
    ob.random(1.5);


}
