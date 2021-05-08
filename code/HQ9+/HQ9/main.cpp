#include <iostream>

using namespace std;

int main()
{
    char x;
    int f=0;
    while(cin>>x)
    {
        if(x=='H'||x=='Q'|| x=='9')
        {
           f++;
           break;
        }

    }
    if(f!=0)
    {
        cout<<"YES";

      }

      else if(f==0){
        cout<<"NO";
      }
    return 0;
}
