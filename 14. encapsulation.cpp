#include<iostream>
using namespace std;

class Avg
{
    private:
    double a,b,c,res;

    public:
    void setValue(double p, double q, double r)
    {
        a = p;
        b = q;
        c = r;
    }
    double getValue()
    {
        res = (a+b+c)/3;
        return res;
    }
};

main()
{
    Avg ob;
    ob.setValue(10,5.6,8.9);
    ob.getValue();
    cout<<"Result = "<<ob.getValue()<<" !";
}

