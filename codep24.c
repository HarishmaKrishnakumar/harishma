#include <stdio.h>
#include<string.h>

int main()
{
   char s[20];
   int i,l,flag;
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]>='0'   && s[i]<='9')
       {
           flag=1;
       }
       else
       {
           flag=0;
       }
   }
       if(flag==1)
       printf("yes");
       else
       printf("no");
   

    return 0;
}
