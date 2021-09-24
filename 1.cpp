#include<iostream>
using namespace std;

class result
{
private:
    double a,b,c,d,avg;
    void setValue(double,double,double,double);
    void getValue();

};
void result :: setValue(double p,double q,double r,double s)
{
    a=p;
    b=q;
    c=r;
    d=s;
}
void result :: getValue()
{
    avg=(a+b+c+d)/4;
    cout<<"Average is: "<<avg;
}
int main()
{
    result out;
    out.setValue(10.5,5.5,5,15);
    out.getValue();




}
