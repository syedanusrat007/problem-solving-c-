#include <iostream>
#include <vector>
using namespace std;
 class demo{
 double d;
 public:
   demo(){d=0.0;}
   demo(double x){d=x;}
   demo &operator=(double x)
   {
       d=x;
       return *this;
   }
   double getd() {return d;}

 };
 bool operator<(demo a,demo b)
 {
     return a.getd()<b.getd();
 }
  bool operator==(demo a,demo b)
 {
     return a.getd()== b.getd();
 }
int main()
{
    vector<demo> v;
    int i;
    for(i=0;i<10;i++)
        v.push_back(demo(i/3.0));
    for(i=0;i<v.size();i++)
       cout<<v[i].getd()<<endl;
       for(i=0;i<v.size();i++)
       v[i]=v[i].getd()*2.1;
       for(i=0;i<v.size();i++)
       cout<<v[i].getd()<<endl;
    return 0;
}
