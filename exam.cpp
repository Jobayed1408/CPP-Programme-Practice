#include<iostream>
using namespace std;
class M
{
int x,y,z;
public:
    void input()
    {
        cin>>x>>y;
    }
    void Addition()
    {
        z=x+y;
    }
    void output()
    {
        cout<<z;
    }
};
int main()
{
    M a;
    a.input();
    a.Addition();
    a.output();
}
