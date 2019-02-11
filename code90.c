#include<stdio.h>
int main()
{
    int i,N,f=0;
    scanf ("%d",&N);
        if (N%13 == 0)
        {
            f=1;
        }
    if(f==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
