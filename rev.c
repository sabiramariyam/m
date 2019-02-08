#include<stdio.h>
void main()
{
int i,j,k;
char str[100000];
char rev[100000];
scanf("%s",str);
for(i=0;str[i]!='\0';i++);
{
k=i-1;
}
for(j=0;j<=i-1;j++)
{
rev[j]=str[k];
k--;
}
printf("%s\n",rev);
getch();
}