#include <stdio.h>

int main()
{
    int N,M,a,rem,sum=0;
    scanf("%d %d",&N,&M);
    a=N*M;
    if((a%2)==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
return 0;    
}
