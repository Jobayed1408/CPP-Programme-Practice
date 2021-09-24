#include<iostream>
using namespace std;

int sum (int,int);
int biog (int,int);

int main()
{
    int a,b,res,c,d;
    cin>>a>>b;

    res=sum(a,b);
    res2=biog(a,b);

    cout<<"The result is : "<<res<<endl;
    cout<<"The result is : "<<res2;

}
int sum(int n,int m)
{
    int n3;
    n3=n+m;
    return n3;
}

int biog(int n1,int n2)
{
    int n3;
    n3=n1-n2;
    return n3;
}
