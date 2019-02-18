#include <stdio.h>

int main()
{
    int num,i,j,Tot=0;
scanf("%d",&num);

if(num>=2&&num<=100000)
{
for(i=2;i<=num;i++)
{
  if(num%i==0)
    {
        
        
        for(j=2;j<=i/2;j++)
        {
            
            
            if(i%j==0)
            {
                
                Tot=1;
                break;
                
            }
        }
if(Tot==0)
     printf("%d ",i);
}}
}
    return 0;
}
