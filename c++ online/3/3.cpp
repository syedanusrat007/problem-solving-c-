#include <iostream>

using namespace std;
  class base {
      int j;
      public:
    base(int n)
    {
        j=n;
        cout<<"base constructor"<<endl;
    }
     ~base()
    {
        cout<<"base destructor"<<endl;
    }
    show1()
    {
        cout<<j<<endl;
    }
  };
  class derived : public base
  {
      int i;
  public:
    derived(int n,int m):base(n)
    {

        i=m;
        cout<<"derived costructor"<<endl;
    }
    ~derived()
    {
        cout<<"derived destructor"<<endl;
    }
    show2()
    {
        cout<<i<<endl;
    }
  };


int main()
{
    derived o(10,20);
    o.show1();
    o.show2();
    return 0;
}
