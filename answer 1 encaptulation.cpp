#include<iostream>
using namespace std;

class Avarage
{
    private:
    double a,b,c,d,avrg;

    public:
    void input(double p, double q, double r,double s)
    {

        a = p;
        b = q;
        c = r;
        d = s;

    }
    void avg()
    {

        avrg = (a+b+c+d)/4.0;
    }

    void output()
    {

        cout<<"Result = "<<avrg <<" ." <<endl;
    }
};

main()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    Avarage ob;
    ob.input(p,q,r,s);
    ob.avg();
    ob.output();

}

