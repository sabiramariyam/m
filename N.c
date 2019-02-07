#include<stdio.h>
void main()
{
int i,n,sum=0;
scanf("%d",&n);
i=1;
while(i<=n)

{
 sum+=i;
++i;
}

printf("%d",sum);
}