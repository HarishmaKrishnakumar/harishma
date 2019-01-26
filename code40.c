#include <stdio.h>
int main() 
{
    int N,i,a[10000];
    
scanf("%d",&N);

for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
    printf("%d %d \n",a[i],i);
}
    
return 0;
}
