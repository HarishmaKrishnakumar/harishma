#include <stdio.h>

int main()
{
    char S[1000];
   int N,c,i;
   scanf("%s %d",S,&N);
   c=strlen(S);
   
for(i=c;i>N;i--)
{
    
    
    printf("%c",S[i]);
}

   
    return 0;
}
