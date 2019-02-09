#include <stdio.h>
#include<math.h>

int main()
{
   int L,B,H,vol,total,area;
   scanf("%d %d %d",&L,&B,&H);
   total=L*B + B*H + H*L;
   area=2*total;
   vol=L*B*H;
   printf("%d %d",area,vol);
   

    return 0;
}
