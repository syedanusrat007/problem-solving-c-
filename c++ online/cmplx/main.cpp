#include <iostream>
using namespace std;
class cmplx{

 public:
     int r,i;
     cmplx()
     {
         r=i=0;
     }
     void add(cmplx &a,cmplx &b)
     {
         r=a.r+b.r;
         i=a.i+b.i;
     }
     void sub(cmplx &b)
     {
         r=r-b.r;
         i=i-b.i;
     }
       friend void print();


};
void print(cmplx c)
     {

         if (c.i>=0){
            cout<<c.r<<"+"<<c.i<<endl;}

         else{
         cout<<c.r<<c.i<<endl;
         }

     }

int main()
{
    cmplx a,b,c;
    string t;
    cin>>a.r>>a.i>>b.r>>b.i;
    a.add(a,b);
    print(a);
    a.sub(b);
    print(a);
    getline(cin,t);
    return 0;
}
