// C++ program to demonstrate function
// declaration outside class

#include<iostream>
using namespace std;

class greak
{
    public:
        string greakname;
        void printname();
        int id;
        void printid()
        {
            cout<<"Geek id is:"<<id;
        }

};

void greak::printname()
{
    cout<<"The name is: "<<greakname;
}
int main()
{
    greak obj;
    obj.greakname= "jobayed";
    obj.id=200;

    obj.printname();
    cout<<endl<<endl;
    obj.printid();

}
