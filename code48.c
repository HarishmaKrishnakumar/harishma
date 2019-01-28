include <stdio.h>

int main()
{
    int a[10000],N,max,min,i,j;
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
min=a[0];

for(i=0;i<N;i++)
{
    if(a[i]<min)
    {
        min=a[i];
    }
}
max=0;
for(j=0;j<N;j++)
{
    if(a[j]>max)
    {
        max=a[j];
    }
}
printf("%d %d",min,max);

return 0;
}
