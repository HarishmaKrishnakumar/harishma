#include <stdio.h>
int main()
{
   char a[1000],b[1000];
   int i,j,k=0,l=0;
   scanf("%s %s",a,b);
   
   for(i=0;a[i]!='\0';i++)
   {
       k++;
   }
   for(j=0;b[j]!='\0';j++)
   {
      l++;
   }
  if(k<l)
  {
  printf("%s",a);
  }
  else if(k>l)
  {
  printf("%s",a);
  }
  else
  {
  printf("%s",b);
 
  return 0;
}

