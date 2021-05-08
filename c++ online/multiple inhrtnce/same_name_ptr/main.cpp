#include <iostream>

using namespace std;
class A{
  int a;
  public:
      void seta(int i)
      {
          a=i;
      }
       int  show()
      {
          return a;
      }
};
class B{
  int b;
  public:
      void seta(int j)
      {
          b=j;
      }
       int  show()
      {
          return b;
      }
};
class C:public A,public B{
  int c;
  public:
      void setc(int i)
      {
          c=i;
      }
    int  showc()
      {
          return c;
      }
      };
int main()
{
    C ob;
    ob.setc(10);
    cout<<ob.showc();
    A *a;
    a=&ob;
    a->seta(12);
    cout<<a->show();
    return 0;
}
