#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    vector <int >neg,pos,zero;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)
            neg.push_back(x);
        else if(x>0)
            pos.push_back(x);
        else
            zero.push_back(x);


    }

    if(pos.empty())
    {
        pos.push_back(neg[neg.size()-1]);
        neg.pop_back();
        pos.push_back(neg[neg.size()-1]);
        neg.pop_back();
    }
    if(neg.size()%2==0)
    {
        zero.push_back(neg[neg.size()-1]);
        neg.pop_back();
    }


    cout<<neg.size()<<" ";
    for(int i:neg)
        cout<<i<<"  ";
        cout<<endl;

    cout<<pos.size()<<" ";
    for(int i:pos)
        cout<<i<<"  ";
        cout<<endl;

    cout<<zero.size()<<" ";
    for(int i:zero)
        cout<<i<<"  ";
        cout<<endl;

}
