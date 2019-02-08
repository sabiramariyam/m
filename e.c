#include<stdio.h>
void main()
{
  int b,e;
  int result=1;
  scanf("%d",&b);
  scanf("%d",&e);
  while(e!=0)
{
result*=b;
--e;
}
printf("%d",result);
return 0;
}