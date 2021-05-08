#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    int i,j,count=0,k,f;
    cin>>s;
    k=strlen(s);
    for(i=0;i<k;i++)
    {  f=0;
        for(j=i+1;j<k;j++)
        {
            if(s[i]==s[j])
                f=1;

        }
        if(f!=1)
            count++;
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
