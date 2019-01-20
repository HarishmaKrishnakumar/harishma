#include <stdio.h>

int main()
{
 int N,k,p=1;
 scanf("%d %d",&N,&k);
 
while(k)
{
    p=p*N;
    k--;
    
}
printf("%d",p);

    return 0;
}
