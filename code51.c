#include <stdio.h>
int main()
{
    int N,a[10000],i,sum=0,avg;
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<N;i++)
    {
        sum+=a[i];
    }
    avg=sum/N;
    printf("%d",avg);
    return 0;
}
