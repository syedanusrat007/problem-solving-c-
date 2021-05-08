#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n,a,b;
   cin>>n;
   if(n%2==0)
   {
       a=8;
       b=n-a;
       cout<<a<<" "<<b;
   }
   else{
     a= 9;
     b=n-a;
      cout<<a<<" "<<b;
   }
    return 0;
}
