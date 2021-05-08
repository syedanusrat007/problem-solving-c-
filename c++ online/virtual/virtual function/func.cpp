#include <iostream>
#include <cstdlib>
using namespace std;
class base {
int x;
public:
    base(int i){x=i;}
    virtual void f()
    {
        cout<<x<<endl;
    }

};
class derived1:public base{
int x;
public:
    derived1(int i,int j):base(i){x=j;}
    void f()
    {
        cout<<x<<endl;
    }

};
class derived2:public base{
int x;
public:
    derived2(int i,int j):base(i){x=j;}
    void f()
    {
        cout<<x<<endl;
    }

};
int main()
{
    base *p;
    base ob(10);
    derived1 ob1(10,20);
    derived2 ob2(10,30);
    p =&ob;
    p->f();
    p=&ob1;
    p->f();
    p=&ob2;
    p->f();
    for (int i=0;i<10;i++)
    {
        if(rand()%2==0)
            p=&ob1;
        else
            p=&ob2;
        p->f();
    }
    return 0;
}
