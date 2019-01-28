#include <stdio.h>
int main()
{
    
    char s[1000];
    int l=0,i,c=0;
    
    scanf("%[^\n]",s);
    c=strlen(s);

 
 for(i=0;i<c;i++)
 {
     if(s[i]>='0' && s[i]<='9')
     {
         l++;
     }
 }
  printf("%d",l);
    return 0;
}
