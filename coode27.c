#include <stdio.h>

int main()
{
 int N,a=1,i;
 scanf("%d",&N);
 if(N<=20)
 {
 
 for(i=1;i<=N;i++)
 {
    a=a*i;
 }
 printf("%d",a);
}
    return 0;
}
