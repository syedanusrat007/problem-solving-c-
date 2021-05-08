#include <iostream>
#include <string>
using namespace std;

class math{

  public:
      string a;

      int i,j;
      void work()
      {
          cin>>a;
          for(i=0;i<a.size();i=i+2)
          {
              for(j=i+2;j<a.size();j=j+2)
              {
                  if(a[i]>a[j]){
                    swap(a[i],a[j]);
                  }
              }
          }
          cout<<a;
      }






};

int main()
{
    math m1;
    m1.work();

    return 0;
}
