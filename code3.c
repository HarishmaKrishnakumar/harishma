#include <stdio.h>

int main()
{
 char c;
 scanf("%c",&c);
 
 if(c=='a' || c=='A'|| c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
 {
   printf("Vowel");
  
 }
else if(c<65 || c>90 || c<97 || c>122)
{
    printf("invalid");
}

else
{
    printf("Consonant");
}
    return 0;
}
