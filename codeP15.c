#include <stdio.h>
#include<string.h>
 int main()
{ 
    char s[1000],x;
 int i,j,c=0,l=0,a[1000];
 gets(s);
  for(i=0;s[i]!='\0';i++)
 {
    c=1;
    for(j=i+1;s[j]!='\0';j++)
    {
        if(s[i]!='$'&&s[j]!='$')
        {
        if(s[i]==s[j])
        {
            c++; 
            s[j]='$';
            
         }
      }
    }
    
    if(s[i]!='$')
    {
    if(c>l)
    {
    l=c;
  x=s[i];
  }
  }}
  printf("%c",x);
return 0;
}
