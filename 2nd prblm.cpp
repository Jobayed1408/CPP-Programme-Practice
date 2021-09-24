#include<iostream>
using namespace std;

class A
{
public:
    double triangle,rectangle;
    void result1(int,int);
};

class B
{
public:
    double square,polygon;
    void result2(int,int);
};

void A :: result1(int y,int h)
{
    triangle=0.5*y*h;
    rectangle=y*h;
    cout<<"The value of Triangle is: "<<triangle<<endl;
    cout<<"The value of Rectangle is: "<<rectangle<<endl;
}

void B :: result2(int x,int p)
{
    int s,d;
    cout<<"Enter the number of sides of Polygon:: ";
    cin>>s;

    cout<<"Enter the length of any one sides of Polygon:: ";
    cin>>d;


    cout<<endl<<endl;
    p=s*d;
    polygon=x*p*0.5;
    square =x*x;
    cout<<"The value of Polygon is: "<<polygon<<endl;
    cout<<"The value of Square is: "<<square<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter the two input value below"<<endl<<endl;
    cout<<"Enter the value of x:: ";

    cin>>x;

    cout<<"Enter the value of y:: ";
    cin>>y;
    cout<<endl<<endl;

    A obj;
    obj.result1(x,y);
    B out;
    out.result2(x,y);

}
