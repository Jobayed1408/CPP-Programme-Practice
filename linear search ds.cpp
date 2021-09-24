#include<iostream>
using namespace std;
int main()
{
    int a[7] = {3,2,8,5,9,4,6};
    int key,i;
    cin>>key;
    bool flag = false;
    for(int i=0;i<7;i++)
    {
        if(a[i] == key)
            flag = true;
    }
    if(flag == true){
        cout<<"Found. "<<endl;
        cout<<"Position of key is :"<< a[key];}
    else
        cout<<"Not found.";
}
