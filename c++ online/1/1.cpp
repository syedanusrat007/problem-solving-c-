#include <iostream>

using namespace std;

class base {
  int x;
  public :
      void setx(int n){x=n;}
      void showx() {
       cout<<x<<endl;
       }

};
class derived : private base {
 int y;
 public :

  void sety(int n,int m)
  {
      setx(n);
      y=m;}
      void showy() {
          showx();
       cout<<y<<endl;
       }
};

int main()
{
    derived o;
    //o.setx(10);
    o.sety(20,10);
    //o.showx();
    o.showy();
    return 0;
}
