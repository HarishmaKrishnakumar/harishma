#include<stdio.h>
void main()
{
 char str[50],str1;
 int n,i;
 clrscr();
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  n=str[i];
  if(n>=88 && n<=90 || n>=120 && n<=122)
  {
   n=n-23;
   str1=n;
  }
  else
  {
  str1=n+3;
  }
  str[i]=str1;
 }
 printf("%s",str);
 getch();
}