#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    while(1)
    /*{
        int rn,gn;

        cout<<" Enter the guessing number: ";
        cin>> gn;

        rn = 1+rand()%5;

        if(gn==rn)
        {
            cout<<" You are won! "<<endl<<endl;
        }
        else
        {
            cout<<" You have Lost!Try again."<<endl;
            cout<<" The random number is "<< rn <<endl<<endl;
        }

    }*/


    {

        while(1)
        {
            int guessNUmber,randomNumber;
            cout<<"Enter the guess number: ";
            cin>> guessNUmber;
            randomNumber=1+rand()%5;

            if(guessNUmber==randomNumber)
            {
               cout<<" You are won!"<<endl<<endl;
            }
            else
            {
                cout<<" You have lost"<<endl<<endl;
            }
        }
    }


}


