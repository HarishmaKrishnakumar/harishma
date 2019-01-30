#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,c,l=0,d,a=0,pos,pos1,alpha,alpha1,x,y,k,f,j;
scanf("%[^\n]",str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]=='@')
{
a++;
pos=i;
}
}
for(j=pos;j<l;j++)
{
if(str[j]=='.')
{
d++;
pos1=j;
}
}
alpha=0;
for(k=pos;k>0;k--)
{
if(str[k]>='a' && str[k]<='z')
{
alpha++;
}
}
alpha1=0;
for(x=pos1;x>l;x++)
{
if(str[k]>='a' && str[k]<='z')
{
alpha1++;
}
}
f=0;
for(y=pos1;y<l;y++)
{
if(str[y]=='.'&& str[y+1]=='c'&& str[y+2]=='o'&& str[y+3]=='m')
{
f=1;
}
}
if((f==1)&&(alpha1>=5)&&(alpha>=3)&&(a==1)&&(d==1))
{
printf("valid");
}
else
{
printf("not valid");
}
getch();
}
