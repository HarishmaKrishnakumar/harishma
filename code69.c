#include <stdio.h>
#include<math.h>

int main()
{
   int N,K,a[1000],i,x;
   scanf("%d %d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   x=K-1;
             printf("%d",a[x]);
return 0;
}
