#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=0||n==0){
        return -1;
    }


    else if(n==1){
        return 1;
    }

    return n*fibonacci(n-1);
}


int main()
{
    int n;
    long long r;
    cin>>n;
    r=fibonacci(n);
    cout<<"Result "<<n<<" = "<<r;
}
