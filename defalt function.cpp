#include<iostream>
using namespace std;

void display(int a=30 , int b=40)
{

    cout <<"a = "<< a <<endl;
    cout <<"b = "<< b <<endl;
}
int main()
{
    display();
    display(100);
}
