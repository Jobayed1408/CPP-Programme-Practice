#include<iostream>
using namespace std;

class Calc
{
public:

    void add(int, int);
    void add(int);
    void add(double, double, double);
};

void Calc :: add(int e)
{
    int a = e+e;
    cout<<a<<endl;
}
void Calc :: add(int p, int q)
{
    int a = p+q;
    cout<<a<<endl;
}
void Calc :: add(double p, double q, double r)
{
    double b = 0.5 * p * q;
    cout<<b<<endl;
}

main()
{
    Calc ob;
    ob.add(5);
    ob.add(5,6);
    ob.add(1.5,5.6,7.8);
}

