#include <stdio.h>

int main()
{
int N,T=0,i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
	
		if((N/i==2) && (N%i==0))
		{
			printf("%d",i);
			T=1;
			break;
		}
	}
	if(T==0)
	{
		printf("%d",N);
	}
   
    return 0;
}
