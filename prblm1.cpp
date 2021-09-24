#include<iostream>
using namespace std;

class BGC
{
public:
    int addi,subst;
    double multi,divis,modul;
    BGC(int a,int b,int c,int d)
    {
        addi=a+b+c+d;
        subst=a-b;
        multi=a*b*c;
        divis=a/b;
        modul=a%b;

        cout<<"Addition of four numbers is: "<<addi<<endl;
        cout<<"Subtraction is: "<<subst<<endl;
        cout<<"Multiplication of three numbers is: "<<multi<<endl;
        cout<<"Division is: "<<divis<<endl;
        cout<<"Modulus is: "<<modul<<endl;
    }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter the input value of a,b,c,d: "<<endl;
    cout<<"Enter the value of a :: ";
    cin>>a;
    cout<<"Enter the value of b :: ";
    cin>>b;
    cout<<"Enter the value of c :: ";
    cin>>c;
    cout<<"Enter the value of d :: ";
    cin>>d;
    cout<<endl<<endl;





    BGC obj(a,b,c,d);
}
