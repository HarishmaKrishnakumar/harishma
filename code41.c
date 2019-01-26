#include <stdio.h>
int main() 
{
    int N,hours,minutes;
    
scanf("%d",&N);
hours = N / 60;
 minutes = N % 60;
	
	printf("%d %d",hours,minutes);
  return 0;
}
