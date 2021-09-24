#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    for(int i=1;i<=6;i++)
    {
        int randomNumber = rand()%7;
        cout<<"randomNumber = "<<randomNumber<<endl;
    }

}


