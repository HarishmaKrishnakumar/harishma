#include <stdio.h>

int main()
{
    int N,M,x;
    scanf("%d %d",&N,&M);
    x=N+M;
    if(x%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
return 0;
}
