#include<iostream>
using namespace std;

class Student
{
    public:
    virtual void display() = 0;

};

class Rahim : public Student
{
    public:
    void display()
    {
        cout<<"Name is Rahim"<<endl;
    }

    void output()
    {
        cout<<"Name is Output"<<endl;
    }
};


class Karim : public Student
{
    public:
    void display()
    {
        cout<<"Name is Karim"<<endl;
    }
};

main()
{
    Student *ob;
    Rahim r;
    Karim k;

    ob = &r;
    ob->display();

    ob = &k;
    ob->display();
}

