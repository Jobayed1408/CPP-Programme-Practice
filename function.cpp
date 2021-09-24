#include<iostream>
using namespace std;
class bgc
{
    public:
    int a,b,c,sum;
    double avrg;
    void input();
    void result();
    void output();
};
void bgc :: input()
{

    cout<<"Enter value: \n";
    cin>>a>>b>>c;
}

void bgc :: result()
{
    sum=a+b+c;
    avrg=sum/3;
}

void bgc :: output()
{
    cout<<"The average of three number is : "<<avrg<<endl;
}
int main()
{
    bgc out;
    out.input();
    out.result();
    out.output();
}




