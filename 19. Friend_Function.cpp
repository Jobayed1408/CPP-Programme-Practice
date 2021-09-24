#include<iostream>
using namespace std;

class Add
{
    public:
    int a,b,c;
    void input();
    friend void add(Add ob);
};

void Add:: input()
{
    cin>>a>>b;
}

void add(Add ob)
{
    ob.c = ob.a + ob.b;
    cout<<"Result is: "<<ob.c;
}

main()
{
    Add ob1;
    ob1.input();
    add(ob1);
}



