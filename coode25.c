#include <stdio.h>

int main()
{
 int N,t=0,r;
 scanf("%d",&N);
 
 while(N)
 {
     r=N%10;
     t=t*10+r;
     N=N/10;
 }
 printf("%d",t);

    return 0;
}
