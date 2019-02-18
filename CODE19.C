#include <stdio.h>

int main()
{
    int NUM,i,j,T=0;
scanf("%d",&NUM);

if(NUM>=2&&NUM<=100000)
{
for(i=2;i<=NUM;i++)
{
  if(NUM%i==0)
    {
        
        
        for(j=2;j<=i/2;j++)
        {
            
            
            if(i%j==0)
            {
                
                T=1;
                break;
                
            }
        }
if(T==0)
     printf("%d ",i);
}}
}
    return 0;
}