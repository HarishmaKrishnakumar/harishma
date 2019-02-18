#include<stdio.h>
int main()
{
 int arr[50],spl,arr1[50];
 int num,i,l=0,j=0;
 scanf("%d",&num);
 scanf("%d",&spl);
 for(i=0;i<num;i++)
 {
  scanf("%d",&arr[i]);
 }
 l=num-spl;
 for(i=l;i<num;i++)
 {
  arr1[j]=arr[i];
  j++;
 }
 for(i=0;i<l;i++)
 {
  arr1[j]=arr[i];
  j++;
 }
 for(i=0;i<num;i++)
 {
  printf("%d ",arr1[i]);
 }
return 0;
}