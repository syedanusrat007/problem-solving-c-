#include <iostream>
#include <cstring>

using namespace std;

class HQ9
{
public:
    char x;

    void check()
    {
        cin>>x;

    (strstr(x,"H")||strstr(x,"Q")||strstr(x,"9"))?f=1:f=0;

    if (f==1)
    {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    }
};

int main()
{
    HQ9 c1;
    c1.check();
    return 0;
}
