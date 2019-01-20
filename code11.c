#include <stdio.h>

int main()
{
 int n,k,a[10],s=0,i;
 scanf("%d %d",&n,&k);
 
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(i=0;i<k;i++)
 {
     s=s+a[i];
}
 printf("%d",s);

    return 0;
}
