#include <stdio.h>

int main() {
	char a[10000];
	int b,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		
		b=a[i];
		if(b%2!=0)
		{
			printf("%c ",a[i]);	
		}
	}
	return 0;
}

