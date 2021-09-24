#include<iostream>
using namespace std;

class input
{
public:
    double a,b,square;
    void display1()
    {
        cout<<"Enter two value of a,b: ";
        cin>>a>>b;
        square=a*a;
    }


};
class area
{
public:
    double rectangle,a,b;
    void display2()
    {
        cout<<"Enter the value of a,b: ";
        cin>>a>>b;
        rectangle=a*b;

    }
};
class output : public input,public

area
{
public:
    void display3()
    {
        cout<<"Square value is: "<<square<<endl<<endl;
        cout<<"Rectangle value is: "<<rectangle<<endl;

    }

};
int main()
{
    output obj;
    obj.display1();
    obj.display2();

        obj.display3();

}
