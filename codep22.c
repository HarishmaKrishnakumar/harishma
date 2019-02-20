#include <stdio.h>

int main()
{

 int N,K,max,GR=1,i;
    scanf("%d %d",&N,&K);
    max = ((N<K) ? N : K);

    for(i=1; i<=max; i++)
    {
    
        if(N%i==0 && K%i==0)
        {
            GR = i;
        }
    }

    printf("%d",GR);

return 0;
}
