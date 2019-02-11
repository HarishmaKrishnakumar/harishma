#include <stdio.h>
#include<string.h>
int main()
{
     int N,M;
   char ch;

       scanf("%d %c %d",&N,&ch,&M);
       if(ch=='/')
       {
           printf("%d\n",(N/M));
       }
       else
       {
           printf("%d\n",(N%M));
       }

	return 0;
}
