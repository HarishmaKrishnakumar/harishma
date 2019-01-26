#include <stdio.h>
int main() 
{
    int N,a[100000],i,min;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    
    for(i=0;i<N;i++)
    {
        if(min>a[i])
    {
        min=a[i];
    }
    }
    printf("%d",min);
    
return 0;
}

