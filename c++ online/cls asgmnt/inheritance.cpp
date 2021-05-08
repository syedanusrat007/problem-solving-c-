///Inheritance

#include<iostream>
using namespace std;

class A
{
    int x;
public:
    int a;
    A(int i)
    {
        cout<<"inside base"<<endl;
        x=i;
    }

    void show()
    {
        cout<<"x "<<x<<endl;
    }
    int get()
    {
        return x;
    }

};

class B: virtual public A
{
    int y;
public:
    int b;
    B(int j):A(10)
    {
        cout<<"inside baseb"<<endl;
        y=j;
    }
    void show()
    {
        cout<<"y "<<y<<endl;
    }

};
class C: virtual public A
{
    int z;
public:
    int c;

    C(int k):A(20)
    {
        z=k;
    }
    void show()
    {
        cout<<"z "<<z<<"x "<<get()<<endl;
    }
};
class D: public B, public C
{
    int w;
public:
    int d;
    D(int d):B(d+3), C(d+1), A(30)
    {
    w=d;
    }
};
int main()
{
    //C s1(7);
   // s1.show();
   D d(4);
   /*d.d=1;
   d.a=2;
   d.b=3;
   d.c=4;*/
   d.B::show();
   C c(8);
   c.show();
    return 0;
}

