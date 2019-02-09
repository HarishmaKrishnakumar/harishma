#include <stdio.h>
#include<math.h>

int main()
{
   int N,i,total=0,a[1000];
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
{
    total+=a[i];
}
  printf("%d",total);
   

    return 0;
}
