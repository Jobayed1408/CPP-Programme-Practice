#include<iostream>
using namespace std;

class first
    {
        public:
        float a,b,c,tri;
        void input();
        friend float trian(first scnd);
        void output(float r);
    };

void first :: input()
    {
        cin>>a>>b;

    }

float trian(first scnd)
    {
        scnd.tri=.5*scnd.a*scnd.b;
        return scnd.tri;
    }

void first :: output(float t)
    {
        float output = t;
        cout<<output;
    }


int main()
{
    float reslt;
    first ob;
    ob.input();
    reslt=trian(ob);
    ob.output(reslt);
}
