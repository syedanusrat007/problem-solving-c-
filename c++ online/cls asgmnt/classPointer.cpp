#include<iostream>
using namespace std;

class A
{
    int a;
public:
    void set(int i)
    {
        a=i;
    }
    int get()
    {
        return a;
    }
};

class B
{
    int b;
public:
    void set(int j)
    {
        b=j;
    }
    int get()
    {
        return b;
    }
};
class C: virtual public A, public B
{
    int c;
public:
    void setValue(int k)
    {
        c=k;
    }
    void show()
    {
        cout<<"a "<<A::get()<<"b "<<B::get()<<"c "<<c<<endl;
    }
};

int main()
{
    C Obj;
    //Obj.set(10);
    //obj.show();
    A *a;
    a=&Obj;
    a->set(20);
    Obj.show();
    cout<<endl<<endl;

    A obj1;
    C *p;
    p=&obj1;
    p->setValue(30);
    p->show()

}
