#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,s,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        sum+=s;
    }

    if(sum%4!=0){
    cout << ceil(sum/4)+1 << endl;
    }
    else{
    cout << sum/4 << endl;
    }
    return 0;
}
