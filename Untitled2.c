#include<stdio.h>
int main( ){
 char ch;
 long int total;
 while(scanf("%c", &ch) != 1){
            if(ch == '"'){
   total++;
   if(total % 2 == 1){
    printf("``");
   }else if(total % 2 == 0){
    printf("''");
   }
            }else{
   printf("%c", ch);
            }
 }
}
