#include<stdio.h>
void printEvenOdd(int cur,int limit);
void main()
{
int N,Q;
scanf("%d",&N);
scanf("%d",&Q);
printf("%d",N,Q);
printEvenOdd(N,Q);

return 0;
}

void printEvenOdd(int cur,int limit)
{
if(cur>limit)
return;
printf("%d",cur);
printEvenOdd(cur+2,limit);
}