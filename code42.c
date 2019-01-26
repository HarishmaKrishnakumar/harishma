#include <stdio.h>
#include<math.h>
int main()
{
int hour1,minute1,hour2,minute2,hour3,minute3;
scanf("%d %d\n%d %d",&hour1,&minute1,&hour2,&minute2);
hour3=abs(hour1-hour2);
minute3=abs(minute1-minute2);
printf("%d %d",hour3,minute3);
return 0;
}
