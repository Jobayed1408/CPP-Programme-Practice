#include<iostream>
using namespace std;

class Add
{
    public:
    int a,b,c;
    Add()
    {
        cin>>a>>b;
        c=a+b;
    }
    ~Add()
    {
        cout<<c;
    }
};


int main()
{
    Add a;
}

