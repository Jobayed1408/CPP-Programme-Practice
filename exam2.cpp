#include<iostream>
using namespace std;
class m
{
int x;
public:
    ~m();
    void result();
};
m :: ~m ()
{
    result();
}
void m :: result()
    {
    cin>>x;
    if(x%2 ==0)
    cout<<"Even";
    else
    cout<<"Odd";
    }
int main()
{
    m a;
}
