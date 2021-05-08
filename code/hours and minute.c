#include <stdio.h>
int main ()
{
     int  x , a ;

     while (scanf ("%d",&a) == 1)
     {
          x = a % 6 ;
          puts ((x==0) ? "Y" : "N" ) ;
     }

     return 0 ;
}
