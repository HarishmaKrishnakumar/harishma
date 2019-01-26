#include <stdio.h>
#include<math.h>
int main()
{
    int N,A,D,total=0,x,i;
    scanf("%d %d %d",&N,&A,&D);
    
total = (N * (2 * A + (N - 1) * D)) / 2;
    x = A+ (N- 1) * D;
            printf("%d", total);

return 0;
}
