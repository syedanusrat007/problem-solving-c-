#include <iostream>

using namespace std;

class base
{
    protected:
    int a, b;
public :
    void setab(int n,int m)
    {
        a=n;b=m;
    }

};
class derived : protected base
{
    int c;
public :
    void setc(int n)
    {
        c=n;
    }
    void showabc()
    {
        cout<<a<<b<<c;
    }
};

int main()
{
    derived o;
    //o.setab(1,2);
    o.setc(3);
    o.showabc();
    return 0;
}
