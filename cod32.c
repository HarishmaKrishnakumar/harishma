#include <stdio.h>
#include <string.h>
 
int main()
{
   char s[100000];
   int i,a=0;

   scanf("%s",s);
   a=strlen(s);
   for(i=a;i>=0;i--)
   {
       printf("%c",s[i]);
   }
 
   
 
   return 0 ;
}
