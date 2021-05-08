#include<cstdlib>
//#include<ctime>
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    unsigned seed =time(NULL); ///uses the sytem clock
    cout<<"seed: "<<seed<<endl;
    srand(seed);
    int min=1, max=100;
    int range=max-min+1;
    for(int i=0; i<20; i++)
    {
        int r=rand()/100%range +min;
        cout<<r<<" ";
    }
    cout<<endl;

    return 0;
}
