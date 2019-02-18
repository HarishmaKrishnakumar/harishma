#include <stdio.h>
#include<string.h>

int main()
{
       char NUM[100000];
int i;
gets(NUM);

for(i=0;NUM[i]!='\0';i++)
{
  
  if(NUM[i]=='Z' )
  printf("C");
  else if(NUM[i]=='Y')
  printf("B");
  else if(NUM[i]=='X')
  printf("A");
  else
    
  printf("%c",NUM[i]+3);
    

    
    
}
    return 0;
}
