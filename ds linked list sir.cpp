#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of linked list: ";
    cin>>n;
    int i,start,value[1000],next[1000];
    cout<<"Enter values: ";
    for(i=1;i<=n;i++)
    {
        cin>>value[i];
    }
    cout<<"Enter Links: ";
    for(i=1;i<=n;i++)
    {
        cin>>next[i];
    }
    cout<<"Enter Insert Position: ";
    cin>>start;
    cout<<"The List: ";
    while(start!=0)
    {
        cout<<value[start]<<" ";
        start=next[start];
    }
    cout<<endl;
}
