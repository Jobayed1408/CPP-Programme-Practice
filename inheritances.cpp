#include<iostream>
using namespace std;

class Width
{
    public:
        string name,address;
        Width()
        {
            cin>>name>>address;
        }

};

class Height
{
    public:
        int rollno,percentage;
        Height()
        {
            cin>>rollno>>percentage;
        }

};

class Rectangle : public Width, public Height
{
    public:
        void display()
        {


            cout<<"Name is: "<<name<<address;
            cout<<rollno<<percentage;
        }
};



main()
{
    Rectangle ob;
    ob.display();
}





