#include <stdio.h>

int main()
{
    int N,a[1000],K,i,j,f=0;
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
     scanf("%d",&a[i]);   
    }
    for(j=0;j<N;j++)
    {
    if(a[j]==K)
    {
    f=1;
    }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }   
return 0;    
}
