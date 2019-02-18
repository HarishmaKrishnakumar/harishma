#include <stdio.h>

int main()
{
    int L1,L2,i;
scanf("%d %d",&L1,&L2);
if((L1>=1&&L1<=100000)&&(L2>=1&&L2<=100000))
{

for(i=1;;i++)
{
    if(i%L1==0&&i%L2==0)
    {
        
        printf("%d",i);
        break;
    }
    
}
}

    return 0;
}
