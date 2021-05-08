#include <iostream>

using namespace std;
class shape
{
protected :
    int a,b;
public :
    void setdim(int i,int j)
    {
        a=i;
        b=j;
    }
    void getdim(int &i,int &j)
    {
        i=a;
        j=b;
    }
    virtual int getarea()=0;
};
class rect :public shape
{
public :
    int getarea()
    {
        return a*b;
    }
};
class tri :public shape
{
public :
    int getarea()
    {
        return .5*a*b;
    }
};
int main()
{
    shape *p;
    rect r;
    tri t;
    r.setdim(10,20);
    t.setdim(10,20);
    p=&r;
    cout<<p->getarea()<<endl;
     p=&t;
    cout<<p->getarea()<<endl;
    return 0;
}
