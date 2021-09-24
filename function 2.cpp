#include<iostream>
using namespace std;


class car{

public:
    string brand;
    string model;
    float year;

};

int main ()
{
    car obj1;

    obj1.brand = " BMW";
    obj1.model = " NEW";
    obj1.year = 1221.00;

    car obj2;

    obj2.brand = " TESLA";
    obj2.model = " NEW";
    obj2.year = 1990.00;

cout<<obj1.brand<<" " <<obj1.model<< " "<<obj1.year<<"\n";
cout<<obj2.brand<<" " <<obj2.model<< " "<<obj2.year<<"\n";

}





