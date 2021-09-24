
#include<iostream>
using namespace std;


int fact(int n)
{
    if(n==0  || n<1)
    {
        return -1;
    }
    else if(n<=1)
    {
        return 1;
    }

    return n*fact(n-1);


}

int main()
{
    long long m;
//    int n=5;
//    int i;
//    int fact = 1;
    m = fact(-5);
    cout<<"Factorial n! = "<<m<<endl;

    return 0;

}
