#include<iostream>
using namespace std;
class first
{
public:
    float a,area;
    void input();
    friend float tarea(first s);
    void output(float m);

};

void first::input()
{
    cin>>a;
}

float tarea(first s)
{
    s.area=s.a*s.a;
    return s.area;
}
void first :: output(float m)
{
    float output = m;
    cout<<output;
}
main()
{
    float finalrs;
    first ob;
    ob.input();
    finalrs=tarea(ob);
    ob.output(finalrs);
}


