#include <stdio.h>
int main()
{
  
  char S[1000];
  int i,f1=0,f2=0;
  scanf("%[^\n]",S);
  for(i=0;S[i]!='\0';i++)
  {
      if((S[i]>='a' && S[i]<='z')|| (S[i]>='A'&& S[i]<='Z' ))
      {
          f1==1;
      }
      if(S[i]>='0' && S[i]>='9')
      {
          f2=1;
      }
  }
	if(f1==1 && f2==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}

