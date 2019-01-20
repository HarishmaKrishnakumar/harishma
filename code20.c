#include <stdio.h>

int main()
{
int N,s=0,a,r,i;
    scanf("%d",&N);
    if(N<=100000)
        a=N;
    
    
    while(a)
    {
    r=a%10;
    s=s+r*r*r;
    a=a/10;
    }

    if(N==s)
    {
    printf("yes");
}

else
{
    printf("no");
}
    

    return 0;
}
