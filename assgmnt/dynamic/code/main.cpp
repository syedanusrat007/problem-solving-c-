#include <iostream>
#include <conio.h>
#include "main.h"

using namespace std;

int main()
{
    Functions ob1;
    double a;
    int b ;
    cout<<"enter a double and a integer : "<<endl;
    cin>>a>>b;

    cout << "a + b = " <<ob1.Add(a, b) << endl;
    cout << "a * b = " <<ob1.Multiply(a, b) << endl;
    cout << "a + (a * b) = " <<ob1.AddMultiply(a, b) << endl;
   getch();
    return 0;
}
