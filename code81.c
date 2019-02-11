#include <stdio.h>

int main()
{
    int N,M,max,lcm,i;
    scanf("%d %d",&N,&M);
    max=N>M?N:M;
    for(i=0;i<max;i++)
    {
        if(max%N==0 && max%M==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    

    printf("%d",lcm);
return 0;
}
