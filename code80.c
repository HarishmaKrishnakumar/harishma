#include <stdio.h>

int main()
{
    int N,M,min,gcd=1,i;
    scanf("%d %d",&N,&M);
    min = (N<M) ? N : M;

    for(i=1; i<=min; i++)
    {
    
        if(N%i==0 && M%i==0)
        {
            gcd = i;
        }
    }

    printf("%d",gcd);
return 0;
}
