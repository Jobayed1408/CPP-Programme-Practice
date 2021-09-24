#include<iostream>
using namespace std;


class natural_numbers
{
        int n,sum=0,i;

public:




        natural_numbers(int n)
        {
            //int sum,i;
            for(i=0;i<=n;i++){
                cout<<i<<" ";
                sum+=i;}
            cout << "Sum =  " << sum;
        }

    };
int main() {


    natural_numbers object(6);

}
