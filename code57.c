#include <stdio.h>
int main()
{
    
    char s[1000];
    int l=0,i,t=0;
    
    scanf("%[^\n]",s);

 
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]>='0' && s[i]<='9'|| s[i]>='A' && s[i]<='Z'||  s[i]>='a' && s[i]<='z'||s[i]==' ' )
         l++;
     else
       t++; 
 }
 
  printf("%d",t);
    return 0;
}
