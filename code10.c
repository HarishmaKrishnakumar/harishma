#include <stdio.h>

int main()
{
 int n,c=0,i;
 scanf("%d",&n);
 while(n)
 {
  n=n/10;
  c++;
 }
printf("%d",c);

    return 0;
}
