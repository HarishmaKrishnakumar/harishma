#include <stdio.h>

int main()
{
    int N,r,t=0;
    scanf("%d",&N);
    if(N<=1000)
    while(N)
    {
        r=N%10;
        t=t*10+r;
        N=N/10;
    }
printf("%d",t);
    return 0;
}
