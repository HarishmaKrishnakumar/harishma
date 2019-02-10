#include <stdio.h>

int main()
{
    int N,product=1;
    scanf("%d",&N);
    if(N<=1000000000)
    while(N)
    {
        product = product * (N % 10);

             N = N/ 10;
    }
printf("%d",product);
    return 0;
}
