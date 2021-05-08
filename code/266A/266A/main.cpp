#include <iostream>
#include <string>

using namespace std;

class stone {
  public:
      int n,i,j,f=0;
      string a;
      void sum()
      {
          cin>>n;

              cin>>a;

              for(i=0;i<n;i++)
          {
              if(a[i]==a[i+1])
                    f++;
                    }
          cout<<f;
      }

};

int main()
{
    stone s1;
    s1.sum();
    return 0;
}
