#include<iostream>
#include<conio.h>
using namespace std;

int add(int , int);
int max(int , int);
float area(float ,float );
int main()
{

    int result = add(20,31);
    cout<<"result: "<<result<<endl;

    int maximum = max(4,5);
    cout<<"max:  "<<maximum<<endl;

    float e,f;
    cin>>e>>f;
    float finalArea = area(e,f);

    cout<<"Final Area: "<<finalArea;

}

int add(int a, int b)
{
    int sum=a+(-b);
    return sum;
}
int max(int c, int d)
{
    if(c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
float area(float e,float f)
{
    float area = .5*e*f;
    return area;
}
