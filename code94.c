#include <stdio.h>

int main() {
char S[50];
int l;
scanf("%s",S);
l=strlen(S);
if(l%2==0)
{
    S[l/2]='*';
		S[(l/2)-1]='*';
}
else
{
    S[l/2]='*';
}
printf("%s",S);
	return 0;
}
