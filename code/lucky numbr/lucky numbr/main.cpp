#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    string a;
    int i,c=0;
    cin>>a;
    for(i=0;i<a.size();i++){
    if(a[i]== '4' || a[i]=='7')
    {
        c++;
    }
    }
     if(c==4 || c==7)
    {

        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
