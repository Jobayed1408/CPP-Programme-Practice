#include<iostream>
using namespace std;

class bgc
{
    public:
    //int z;

    double z,y;


    bgc(int x)
    {
        z = 4*3.14*x*x;
        y= (4/3)*3.1416*x*x*x;

    }
    ~bgc()
    {
        cout<<"Rectangle of area is : "<<z<<endl;
        cout<<"Rectangle of area is : "<<y<<endl;
    }

};

int main()
{



    bgc ob(10);

}
