/* C++ program to find Area using Function Overloading  */

#include<iostream>
using namespace std;

class over
{
public:

    void area(int, int);
    void area(int);
    void area(double, double);
};
void over :: area(int s)
{
    int res=(s*s);
    cout<<"Area of square is "<<res<<endl;
}
void over :: area(int l,int b)
{

    int res=l*b;
    cout<<"Area of rectangle is "<<res<<endl;
}
void over :: area(double base,double height)
{

    double res=((base*height)/2);
    cout<<"Area of triangle is "<<res;
}
 main()
{

        int a=10,b=4,c=5;
        double m=5.5,n=2.5;
        over ob;
        ob.area(10);
        ob.area(4,5);
        ob.area(5.5,2.5);
}
