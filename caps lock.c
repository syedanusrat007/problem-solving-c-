#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,a,j;
    gets(s);
    a=strlen(s);
    for(i=1;i<a;i++)
    {
        if(s[i]>='a' && s[i]<='z')
       {
           j=0;
        break;
       }

       else if (s[i]>='A' && s[i]<='Z')
             j=1;
    }
    if(j==0)
    {
        puts(s);
    }

    else if(j==1)
    { if(s[0]>='A' && s[0]<='Z')
        for(i=1;i<a;i++)
        {
            s[i]=s[i]+32;
        }
        if(s[0]>='a' && s[0]<='z')
            s[0]=s[0]-32;
        for(i=1;i<a;i++)
        {
            s[i]=s[i]+32;
        }
        puts(s);
    }

    return 0;

}
