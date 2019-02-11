#include <stdio.h>
 
int main() 
{
	int N,arr[60],i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=N;i++)
	{
		if(i!=arr[i])
		{
			printf("\n%d",i-1);
			break;
		}
	}
 
	return 0;
}
