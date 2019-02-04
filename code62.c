#include <stdio.h>

int main()
{
    int N,a,rem,sum=0;
    scanf("%d",&N);
    a=N;
  
     while (a> 0)
   {
      rem =a%10;
      sum+=rem;
      a=a/10;
   }
   printf("%d",sum);

return 0;    
}
