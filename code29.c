include <stdio.h>
int main()
{
 
 int N,c=0;
 scanf("%d",&N);

if(N>=0 && N<=100000000000) 
{
while(N)
 {
   N=N/10;
     c++;
 }
 printf("%d",c);
}

 return 0;
}
