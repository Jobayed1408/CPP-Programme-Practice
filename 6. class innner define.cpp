#include<iostream>
using namespace std;

class bgc
{
    public:
    int a,b,c;

    void result()
    {
        cin>>a>>b;
        c = a+b;
        cout<<"The Result is: "<<c;
    }

};

int main()
{
    bgc out;
    out.result();
}
