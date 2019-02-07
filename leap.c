#include<stdio.h>
int main()
{
int year;
scanf("%d",&year);

if((year%400)==0)
printf("yes",year);
else if((year%100)==0)
printf("no",year);
else if((year%4)==0)
printf("yes",year);
else
printf("no",year);
return 0;
}
