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

    int length,height;
    cin>>length>>height;

    bgc ob(length,height);

}
