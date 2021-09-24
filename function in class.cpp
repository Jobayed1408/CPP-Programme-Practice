// C++ program to demonstrate
// accessing of data members


#include<iostream>
using namespace std;

class greak
{
    public :
    string greakname;
    void pointname()
    {
        cout<<"The greakname is:"<< greakname;
    }



};
int main()
{
    greak obj;
    obj.greakname= "Jobayed";
    obj.pointname();
}
