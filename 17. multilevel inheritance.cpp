#include<iostream>
using namespace std;

class Input
{
   public:
   int a,b;
   void input()
   {
       cin>>a>>b;
   }
};


class Calculation:public Input
{
   public:
   int c;
   void add()
   {
       c = a+b;
   }
};


class Square:public Calculation
{
   public:
   int d;
   void square()
   {
       d = c*c;
   }
};


class Output:public Square
{
   public:
   void output()
   {
       cout<<d<<endl;
   }
};


main()
{
    Output ob;
    ob.input();
    ob.add();
    ob.square();
    ob.output();
}





