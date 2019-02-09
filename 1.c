#include<stdio.h>
#include<math.h>
void main()
{
fact();
getch();
}
fact()
{
int i,fact=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
return fact;

}