#include <stdio.h>
int main()
{
  
  int N,K,i,c;
  int a[10];
  scanf("%d%d",&N,&K);
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
  count=0;
  for(i=0;i<N;i++)
  {
      if(a[i]==K)
      {
          c++;
      }
  }
  printf("%d",c);
	
return 0;
}
