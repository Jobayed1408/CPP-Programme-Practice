

#include<iostream>
using namespace std;

class area
{
    public :

    void triangle(int a,int b,int c);


    void rectangle(int a,int b);

};
void area :: triangle(int a,int b,int c)
    {
        int d=0.5*a*b;
        cout<<"The values:"<<d<<endl;
    }
 void area :: rectangle(int a,int b)
    {
        int d=a*b;
        cout<<"The value is: "<<d<<endl;
    }
int main()
{
    area obj;

    obj.triangle(1,2,3);
    obj.rectangle(4,3);
}
