#include <iostream>
using namespace std;

int main()
{
    int a=10,b=20,c;
    int *p,*q;
    p=&a;
    q=&b;
    c=*p + *q;
    cout<<c<<endl;
}

