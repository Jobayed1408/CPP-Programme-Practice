
#include<iostream>
using namespace std;

class average
{
    public:
    int z;

    average(int x, int y,int b, int c,int a)
    {
        z = (x+y+a+b+c)/5.0;
    }
    ~average()
    {
        cout<<z;
    }
};

int main()
{

    int m,n,o,p,q;
    cin>>m>>n>>o>>p>>q;

    average ob(m,n,o,p,q);

}
