#include<iostream>
using namespace std;
class findAverage
{
int x,y,z;
double result;
public:
    void input()
    {
        cin>>x>>y>>z;
    }

    void avg()
    {
        result=(x+y+z)/3.0;
        cout<<result;
    }
};
int main()
{
    findAverage a;
    a.input();
    a.avg();
}
