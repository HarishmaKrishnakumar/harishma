#include <stdio.h>
#include<string.h>

int main()
{
   char s[20],s1[20];
   int i,l,flag=0,K;
   scanf("%s",s);
   scanf("%s",s1);
   scanf("%d",&K);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
      if(s[i]!=s1[i])
           {
               flag++;
           }
    }
   
    if(flag==K)
       printf("yes");
       else
       printf("no");
   

    return 0;
}
