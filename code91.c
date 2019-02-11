#include <stdio.h>

int main()
{
 
 int N,M,i,p,f=0;
 scanf("%d %d",&N,&M);
 p=N*M;
 for(i=1;i<=p/2;i++)
 {
     if(p==i*i)
     {
         f=1;
         break;
     }
 }
 if(f==0)
 {
     printf("no");
 }
 else
 {
     printf("yes");
 }
 
    return 0;
}
