#include<stdio.h>
int main()
{
 char string[50],str1;
 int n,i;
 scanf("%s",string);
 for(i=0;string[i]!='\0';i++)
 {
  n=string[i];
  if(n>=88 && n<=90 || n>=120 && n<=122)
  {
   n=n-23;
   str1=n;
  }
  else
  {
  str1=n+3;
  }
  string[i]=str1;
 }
 printf("%s",string);
 return 0;
}
