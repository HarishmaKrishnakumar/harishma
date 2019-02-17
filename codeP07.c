#include <stdio.h>
#include<string.h>
int main()
{
       char s[30];
       int i,l,t;
       
       scanf("%s",s);
      l=strlen(s); 
       for(i=0;i<l-1;i++)
       {
         if(i%2==0)
           {
               t=s[i];
               s[i]=s[i+1];
               s[i+1]=t;
            }
       }

printf("%s",s);
    return 0;
}
