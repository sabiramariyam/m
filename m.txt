

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a<0)
    {
        printf("a is negative",a);
        
    }
    else if(a>0)
    {
        printf("a is positive",a);
    
    }
    else
    {
        printf("a is zero",a);
    }