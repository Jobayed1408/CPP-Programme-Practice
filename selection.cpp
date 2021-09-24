#include<iostream>
using namespace std;

class Addition
{
    public:
    int a,b,c,d;

    void input()
    {
        cin>>a>>b>>c;
    }
    void output()
    {
       // d = a+b+c;
        cout<<"Hello";
    }
};

main()
{
    Addition ob;
    Addition *p;

    ob.input();
    p->output();
}
