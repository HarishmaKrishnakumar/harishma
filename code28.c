#include <stdio.h>
int main()
{
 char S[1000];
 int K;
 scanf("%s",&S);
 scanf("%d",&K);
 
 while(K)
 {
     printf("%s\n",S);
     K--;
 }
 return 0;
}
