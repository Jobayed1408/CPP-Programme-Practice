#include<iostream>
using namespace std;

class Hello
{
    public:
        int a;
    Hello(int a)
    {
        this ->a=a;

    }
    void output()
    {
        cout<<a;
    }

};
main()
{
   Hello ob(101);
   ob.output();
}
