#include<stdio.h>
void main()
{
int num,N,Q;
scanf("%d",&N);
scanf("%d",&Q);
for(num=N;num<=Q;num++)
{
if(num%2==1)
printf("%d\t",num);
}

}
