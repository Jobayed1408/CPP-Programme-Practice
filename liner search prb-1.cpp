#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int x,y;

    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[t];

        //cout<<a[t]<<"  ";


    }
    cout<<endl;
    x= 0;
    y= t-1;
    //cout<<x<<"  " << y;
    while(x<y)
    {
      swap(a[x],a[y]);
        x++;
        y--;

    }
    for(int i=0;i<t;i++)
    {

        cout<<a[t]<<"  ";

    }
}
