#include <stdio.h>

int main()
{
int N,s=0,i;
    scanf("%d",&N);
    
    for(i=1;i<=5;i++)
    {
        s=i*N;
        printf("%d ",s);
    }
    return 0;
}
