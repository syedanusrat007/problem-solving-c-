#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned long long int parse(char *s)
{
    unsigned long long int res = 0;
    int i = 0;
    while(s[i])
    {
        res*=10;
        res+=s[i]-'0';
        i++;
    }
    return res;
}
int asc(const void*a,const void*b)
{
    return *(char*)a-*(char*)b;
}

int des(const void*a,const void*b)
{
    return*(char*)b-*(char*)a;
}
int main()
{
    char string[100];
    unsigned long long int a,b,i;
    while(scanf("%s",string)==1)
    {
        qsort(string,strlen(string),sizeof(char),&asc);
        i = 0;
        while(string[i]=='0')
            i++;
        string[0]=string[i];
        if(i)
            string[i]='0';
        a = parse(string);
        qsort(string,strlen(string),1,&des);
        b = parse(string);
        printf("%lld - %lld = %lld = 9 * %lld\n",b,a,b-a,(b-a)/9);
    }
    return 0;
}
