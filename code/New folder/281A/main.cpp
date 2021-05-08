#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    char a[1001];
    gets(a);

    a[0]=toupper(a[0]);

    puts(a);
    return 0;
}
