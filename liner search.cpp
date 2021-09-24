
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int m,n;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];

        }
        char op;
        int d,k;
        int j1;

        for(int j=1;j<=m;j++)
        {
            cin>>op;
            if(op=='S')
            {

                cin>>d;
                for(j1=0;j1<n;j1++)
                {
                    a[j1]=a[j1]+d;
                }

            }

            else if(op == 'M')
            {

                cin>>d;
                for(j1=0;j1<n;j1++)
                {
                    a[j1]=a[j1]*d;
                }

            }
            else if(op == 'D')
            {

                cin>>d;
                for(j1=0;j1<n;j1++)
                {
                    a[j1]=a[j1]/d;
                }

            }
            else if(op == 'P')
            {
                int x,y;
                cin>>x>>y;
                for(j1=0;j1<n;j1++)
                {
                    swap(a[x],a[y]);
                }

            }
            else if(op == 'R')
            {

                for(j1=0;j1<n;j1++)
                {
                    int c=0;
                    int d=n-1;
                    while(c<=d)
                    {
                        swap(a[c],a[d]);
                        c++;
                        d--;
                    }
                }
            }
        }

        cout<<"case "<<i<<":"<<endl;
        for(int i=0; i<n; i++)
        {

            cout<<a[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<endl;
    }
}
