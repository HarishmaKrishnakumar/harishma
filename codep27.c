#include <stdio.h>
#include<string.h>

int main()
{
   char s[20];
   int i,l;
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]>='a' &&  s[i]<='z')
       {
           printf("%c",(s[i]-32));
           
       }
       if(s[i]>='A' &&  s[i]<='Z')
       {
           printf("%c",(s[i]+32));
       }
       
   }

    return 0;
}
