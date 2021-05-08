#include <stdio.h>
int main()
{
    char s[100];
    gets(s);
    puts(strstr(s,"1111111")||strstr(s,"0000000")?"YES":"NO");
    return 0;
}
