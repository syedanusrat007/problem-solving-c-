#include <iostream>

using namespace std;
class A{
 public:
     int a;
     A(int x)
     {
         a=x;
     }

};
class B:virtual public A{
 public:
     int b;
     B(int x,int y):A(x)
     {
         b=y;
     }

};
class C:virtual public A{
 public:
     int c;
     C(int x,int y):A(x)
     {
         c=y;
     }

};
class D: public B,public C{
 public:
     int d;
     D(int x,int y,int z,int w):A(x),B(x,y),C(x,z)
     {
         d=w;
     }

};
int main()
{
    D ob(1,2,3,4);
    int sum= ob.a+ob.b+ob.c+ob.d;
    cout<<sum;
    return 0;
}
