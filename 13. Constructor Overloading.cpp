
#include<iostream>
using namespace std;

class Avg
{
    public:
    Avg()
    {
       cout<<"Default Constructor"<<endl;
    }
    Avg(int a)
    {
       cout<<"Value of a is: "<<a<<endl;
    }
    Avg(int a, int b)
    {
       cout<<"Value of a and b is: "<<a<<"  "<<b;
    }
};

main()
{
    Avg ob1;
    Avg ob2(10);
    Avg ob3(20,30);
}

