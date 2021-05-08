#include <iostream>

using namespace std;
class arraytype{
int a[5];
public :
    arraytype(){
     int i;
     for(i=0;i<5;i++)
     {
         a[i]=i;
     }
    }
     int &operator[] (int i)
     {
         return a[i];
     }
};
int main()
{
    arraytype a;
    int i;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
        a[i]+=10;
        cout<<a[i]<<endl;
    }
    return 0;
}
