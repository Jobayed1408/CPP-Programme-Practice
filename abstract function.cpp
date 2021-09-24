#include <iostream>
using namespace std;

class invalid
{
public:
    virtual void display() = 0;
};

class valid : public invalid
{
public:
    void display()
    {
        cout<<"The class is valid"<<endl;
    }
};

main()
{
    invalid *obj;
    valid v;

    obj = &v;
    obj-> display();
}
