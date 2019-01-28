#include<stdio.h>
int main()
{
int N,f1,f2,f3,i;

scanf("%d",&N);
f1=1;
f2=1;
printf("%d ",f1);
for(i=1;i<N;i++)
{
    if(i<=1)
{
    f3=i;
}

else
{
f3=f1+f2;
f1=f2;
f2=f3;
}
printf("%d ",f3);
}
return 0;
}
