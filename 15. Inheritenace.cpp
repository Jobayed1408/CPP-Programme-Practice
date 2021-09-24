#include<iostream>
using namespace std;

class Person
{
public:
    int id;
    string name;
    void display1()
    {
        cout<<"ID: "<<id<<"  Name:"<<name<<endl;
    }

};

class student: public Person
{
public:
    double gpa;
    void display2()
    {
        display1();
        cout<<"GPA: "<<gpa;
    }
};


main()
{
    student ob;
    ob.id=10;
    ob.name="Jobayed";
    ob.gpa=3.76;
    ob.display2();
}
