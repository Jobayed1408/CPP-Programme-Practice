
//triangle, circle, Sphere

#include<iostream>
using namespace std;

class bgc
{
    public:
    int z;
    void result(int,int);
};

class cse
{
    public:
    int z;
    void result(int);
};


void bgc :: result(int x, int y)
{
    z=x*y;
    cout<<"The Area of Rectangle: "<<z<<endl;
}

void cse :: result(int p)
{
    z = p*p;
    cout<<"The Area of Square: "<<z<<endl;
}

int main()
{
    int p,q;
    cin>>p>>q;

    bgc a;
    cse b;

    a.result(p,q);
    b.result(p);
}
