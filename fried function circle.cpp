//area of circle...
#include<iostream>
using namespace std;

class first
    {
        public:
        float radius,circle;
        void input();
        friend float crle(first scnd);
        void output(float r);
    };

void first :: input()
    {
        cin>>radius;

    }

float crle(first scnd)
    {
        scnd.circle=3.14*scnd.radius*scnd.radius;
        return scnd.circle;
    }

void first :: output(float r)
    {
        float output = r;
        cout<<output;
    }


int main()
{
    float result;
    first f;
    f.input();
    result=crle(f);
    f.output(result);
}
