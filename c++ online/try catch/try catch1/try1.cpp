#include <iostream>
#include <exception>
using namespace std;
void func1(int var){

    cout<<"enter an integer :";
       cin >> var;
       if (var <0){
            throw 10;
       }
       else if ( var > 10){
            throw 2.2;
       }
}
int main(){


    try{
       int var;
         func1(var);
         cout<<"(Y)"<<endl;
    }
    catch(int i)
    {
        cout<<"1"<<endl;

    }
    catch(double i)
    {
        cout<<"2"<<endl;

    }
    catch(...)
    {
        cout<<" <3 "<<endl;

    }

    return 0;
}

