#include <stdio.h>
#include <string.h>
 
int main()
{
   char S[100000];
   int a=0;

   scanf("%s",S);
   a=strlen(S);
   S[a]='.';
   printf("%s",S);
   
 
   return 0 ;
}
