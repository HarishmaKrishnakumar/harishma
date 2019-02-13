#include <stdio.h>
#include<math.h>

int main()
{
 
      int N,K,y,i,j,min,a[100],x;
   scanf("%d %d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
       
   }
   x=N+1-K;
  for(i=0;i<x;i++)
   {
    min=a[0];
       for(j=1;j<N;j++)
       {
        if(min<a[j])
           {
               
               min=a[j];
               y=j;
            }
        }
        a[y]=0;
    }
  printf("%d\n",min);
 return 0;
}
