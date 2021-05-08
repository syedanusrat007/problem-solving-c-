#include<iostream>
using namespace std;


class comNo
{
    int real, imaginary;

public:

    comNo()
    {
        real=0;
        imaginary=0;
        cout<<endl<<"Constructor called"<<endl;
    }

    ~comNo()
    {
        cout<<endl<<"Destructor Called"<<endl;
    }


    void setValue()
    {
        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter Imaginary part: ";
        cin>>imaginary;
    }

    friend comNo add(comNo a, comNo b);

    void sub(comNo x)
    {
        cout<<"Sub() working"<<endl;
        real=real-x.real;
        imaginary=imaginary-x.imaginary;
    }
    void display()
   {
       cout<<"The number is : "<<real<<" + "<<imaginary<<" i "<<endl;
   }
};



comNo add(comNo a, comNo b)
    {
        cout<<"add working"<<endl;
        comNo x;
        x.real=a.real+b.real;
        x.imaginary=a.imaginary+b.imaginary;

        return x;
    }
int main()
{
    comNo a,b,c;
    comNo *p;
    p=&a;
    cout<<endl<<"1st Number"<<endl;
    b.setValue();
    cout<<endl<<"2nd Number"<<endl;
    c.setValue();

    cout<<endl<<"You've entered"<<endl<<"1st No"<<endl;
    b.display();
    cout<<"2nd No"<<endl;
    c.display();
    cout<<endl<<"Add() called"<<endl;
    a=add(b, c);
    cout<<"display after add"<<endl;
    a.display();
    cout<<endl<<endl<<"sub() called"<<endl;
    p->sub(b);
    cout<<endl<<endl<<"printing sub result"<<endl;
    a.display();

    return 0;

}
