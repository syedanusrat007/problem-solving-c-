#include <stdio.h>
int main()
{
    int a,b,i,n,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        c+=b-a;
        if(c>=d)
        {
            d=c;
        }

    }
    printf("%d",d);
    return 0;
}
