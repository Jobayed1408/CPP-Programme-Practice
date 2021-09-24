#include<iostream>
using namespace std;

class bgc
{
    public:
    int z;

    bgc(int x, int y)
    {
        z = x*y;
    }
    ~bgc()
    {
        cout<<"Rectangle of area is : "<<z;
    }
};

int main()
{

    int a,b;
    cin>>a>>b;

    bgc ob(a,b);

}
