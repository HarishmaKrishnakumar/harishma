#include <stdio.h>

int main()
{
	char S[100];	
	int i;
	
		scanf("%[^\n]s",S); 
	
	for(i=0; S[i]!='\0'; i++)
	{
if(i==0)
		{
			if((S[i]>='a' && S[i]<='z'))
				S[i]=S[i]-32; 
			
		}
		if(S[i]==' ')
		{
			i++;
			if(S[i]>='a' && S[i]<='z')
			{
				S[i]=S[i]-32; 
				
			}}}
	
	printf("%s",S);
	
	return 0;
}
