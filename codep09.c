#include <stdio.h>
int main()
{
   
int l1,l2,i,fact=0,j,c;
scanf("%d %d",&l1,&l2);

for(j=l1;j<=l2;j++)
{
    
    
    fact=0;


for(i=2;i<=j/2;i++)
{
    if(j%i==0)
    {
        fact=1;
    
        break;
    }
}

if(fact==0)
{
    c++;
  
}

  }
  
  
  
    printf("%d ",c);
    return 0;
}
