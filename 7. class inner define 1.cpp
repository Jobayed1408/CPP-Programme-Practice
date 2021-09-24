#include<iostream>
using namespace std;

class bgc
{
    public:
    int a,b,c;

    void input()
    {
        cin>>a>>b;
    }

    void add()
    {
        c = a+b;
    }

    void output()
    {
        cout<<c<<endl;
    }

};

class cse
{
    public:
    int a,b,c;

    void input()
    {
        cin>>a>>b;
    }

    void sub()
    {
        c = a-b;
    }

    void output()
    {
        cout<<c;
    }
};



int main()
{
    bgc ob;

    ob.input();
    ob.add();
    ob.output();

    cse cs;

    cs.input();
    cs.sub();
    cs.output();

}
