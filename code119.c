#include <stdio.h>
#include<math.h>

int main()
{
int a[100000],n,i,j,max;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
   if(a[i]>a[j] && i!=j)
   {
    max=a[i];
    a[i]=a[j];
    a[j]=max;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }

 return 0;
}
