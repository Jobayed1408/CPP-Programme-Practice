#include<iostream>
using namespace std;

class A
{
    public:
    float a,b,c,avg;
    void input();
    friend float average(A m);
    void output(float r);
};

void A :: input()
{
    cin>>a>>b>>c;
}

float average(A m)
{
    m.avg = (m.a + m.b + m.c)/3;
    return m.avg;
}

void A :: output(float r)
{
    float result = r;
    cout<<result;
}

main()
{
    float res;
    A f;
    f.input();
    res = average(f);
    f.output(res);
}
