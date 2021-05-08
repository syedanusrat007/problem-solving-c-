#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    unsigned seed=time(NULL);
    srand(seed);
    int min=1, max=100,guess;
    int range=max-min+1;

    do
    {
        int ran=rand()/100%range+min;
        cout<<"Enter a number to guess random number (1-100) : ";
        cin>>guess;
        if(guess>ran+50)
            cout<<"TOO HIGH. Try Again !!!!" <<endl;
        else if(guess<ran-50)
            cout<<"TOO LOW. Try Again !!!!"  <<endl;
        else if (guess==ran)
            cout<<endl<<endl<<endl<<" *******  BINGOO !!!! You hit the bull :) ******** "<<endl<<endl<<endl;
        else
            cout<<"Closer, Try again!!! " <<endl;

        cout<<"Press 'e' to Exit or  Enter to continue ....";
        cin.get();
    }while(cin.get()!='e');

    return 0;
}
