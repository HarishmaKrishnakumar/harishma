#include <stdio.h>

int main()
{
    int NUM,r1,i;
scanf("%d %d",&NUM,&r1);
if((NUM>=1&&NUM<=100000)&&(r1>=1&&r1<=100000))
{

for(i=1;;i++)
{
    if(i%NUM==0&&i%r1==0)
    {
        
        printf("%d",i);
        break;
    }
    
}
}

    return 0;
}