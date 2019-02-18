#include<stdio.h>
int main()
{
 char string[50],string1;
 int N,i;
 scanf("%s",string);
 for(i=0;string[i]!='\0';i++)
 {
  N=string[i];
  if(N>=88 && N<=90 || N>=120 && N<=122)
  {
   N=N-23;
   string1=N;
  }
  else
  {
  string1=N+3;
  }
  string[i]=string1;
 }
 printf("%s",string);
 return 0;
}
