#include<iostream>
using namespace std;

class first
    {
        public:
        float l,w,area;
        void input();
        friend float rect(first rec);
        void output(float r);
    };

void first :: input()
    {
        cin>>l>>w;
    }

float rect(first rec)
    {
        rec.area=rec.l*rec.w;
        return rec.area;
    }

void first :: output(float r)
    {
        float output = r;
        cout<<output;
    }

int main()
{
    float reslt;
    first obj;
    obj.input();
    reslt=rect(obj);
    obj.output(reslt);
}
