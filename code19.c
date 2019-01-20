#include <stdio.h>

int main()
{
int N,s=0,a,r;
    scanf("%d",&N);
    
        a=N;
    
    while(a)
    {
     r=a%10;
     s=s*10+r;
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
