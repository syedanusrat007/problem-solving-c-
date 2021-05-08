#include <iostream>
#include <vector>
using namespace std;
template<class T>

class cmplx{

 public:
     double r,i;
     cmplx()
     {
         r=i=0;
     }
     T add(T a,T b)
     {

        return a+b;
     }
     void Add(cmplx &a,cmplx &b)
     {
         i=a.i+b.i;
         r=a.r+b.r;
     }

       void print( )
     {

         if (i>=0){
            cout<<r<<"+"<<i<<endl;}

         else{
         cout<<r<<i<<endl;
         }

     }

};


int main()
{


     cmplx<double> a;
    cmplx<double> b;
     cmplx<double>c;
    cin>>a.r>>a.i>>b.r>>b.i;
    c.Add(a,b);
    c.print();
    int d,e;
    cin>>d>>e;
    cout<<c.add(d,e);

    return 0;
}
