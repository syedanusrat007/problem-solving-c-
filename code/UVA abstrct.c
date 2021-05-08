#include <stdio.h>
#include <string.h>

int main()
{
    int test_case,a, b,t, k;
    char name1[100], name2[100],consonant1[100], consonant2[100];

    while(scanf("%d ", &test_case)==1)
    {
        for(t=0; t<test_case; t++)
        {
            int a=0, b=0;
            gets(name1);
            gets(name2);

            if(strlen(name1)!=strlen(name2))
                printf("No\n");
            else
                {
                    for(k=0; k<strlen(name1); k++)
                    {
                        if(!(name1[k]=='a' || name1[k]=='e' || name1[k]=='i' || name1[k]=='o' || name1[k]=='u'))
                            {
                                consonant1[a]=name1[k];
                                a++;
                            }
                    }
                    for(k=0; k<strlen(name2); k++)
                    {
                            if(!(name2[k]=='a' || name2[k]=='e' || name2[k]=='i' || name2[k]=='o' || name2[k]=='u'))
                            {
                                consonant2[b]=name2[k];
                                b++;
                            }
                    }
                consonant1[a]='\0';
                consonant2[b]='\0';
                if(!(strcmp(consonant1, consonant2)))
                    printf("Yes\n");
                else
                    printf("No\n");
                }
            }
    }
}
