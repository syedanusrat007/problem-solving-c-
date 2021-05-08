#include <iostream>

using namespace std;

int main()
{
    int k,n,w,i,s=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        s=s+k*i;
    }
    if(n<s)
    {
        cout<<s-n<<endl;
    }
    else if(n>=s)
    {
        cout<<"0"<<endl;
    }
    return 0;
}
