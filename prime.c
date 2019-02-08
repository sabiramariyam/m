#include<stdio.h>
int main()
{
int n,i,flag=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(n==1)
{
printf("1 is not prime nor composite");
}

else
{
if(flag==0)
printf("yes",n);
else
printf("no",n);
}
return 0;
}