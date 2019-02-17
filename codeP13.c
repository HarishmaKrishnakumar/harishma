#include <stdio.h>
 

int main()
{
int n;
	int N,s=0,r,a;
	scanf("%d",&N);
	while(N>0)
	{
		r=N%10;
		a=r*r;
		s=s+a;
		N=N/10;
	}
	printf("%d",s);
    return 0;
}
