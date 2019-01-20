#include <stdio.h>

int main()
{
 int N,K,a[10],s=0,i;
 scanf("%d %d",&N,&K);
 
for(i=0;i<N;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(i=0;i<K;i++)
 {
     s=s+a[i];
}
 printf("%d",s);

    return 0;
}
