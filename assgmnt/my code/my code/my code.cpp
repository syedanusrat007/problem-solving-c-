#include <iostream>
#include <conio.h>
#include "mathSL.h"
using namespace std;

int main()
{
     mathSL ob;
     double a ,b ;
     cout<<"enter two number : "<<endl;
     cin>>a>>b;


    cout << "a + b = " <<  ob.Add( a,b) << endl;
    cout << "a - b = " << ob.Subtract( a,b) << endl;
    cout << "a * b = " << ob.Multiply( a,b) << endl;
    cout << "a / b = " << ob.Divide( a,b) << endl;
    getch();

    return 0;
}
