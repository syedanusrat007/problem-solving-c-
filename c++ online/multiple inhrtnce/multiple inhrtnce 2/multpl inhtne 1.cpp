#include <iostream>

using namespace std;
class A
{
    protected:
    int a;
public:
    A(int x)
    {
        a=x;
    }
    int geta()
    {
        return a;
    }
};
class B
{
    int b;
public:
    B(int y)
    {
        b=y;
    }
    int getb()
    {
        return b;
    }
};
class C:public A,public B
{
    int c;
public:
    C(int x,int y,int z):A(x),B(y)
    {
        c=z;
    }
    void show()
    {
        cout<<geta( )<<" "<<getb()<<" "<<c<<" "<<a;
    }
};
int main()
{
    C ob(1,2,3);
    ob.show();
    return 0;
}
