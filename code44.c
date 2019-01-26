#include <stdio.h>
#include<math.h>
int main()
{
    int N,i,a[10000],max=0;
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
