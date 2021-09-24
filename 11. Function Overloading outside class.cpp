#include<iostream>
using namespace std;

class A
{
public:
    int c;
    double d;
    void add(int a)
    {
        c = a+a;
        cout<<c<<endl;
    }
    void add(int a , int b)
    {
        c = a+b;
        cout<<c<<endl;
    }
    void add(double, int);
};


void A :: add(double a , int b)
{
    d = a+b;
    cout<<d<<endl;
}

main()
{
    int p,q;
    double r;
    cin>>p>>q>>r;
    A ob;
    ob.add(p);
    ob.add(p,q);
    ob.add(r,p);
}
