#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,*p=&a,*q=&b;
    printf("enter first number :");
    scanf("%d",p);
    printf("enter second number :");
    scanf("%d",q);
    if(*p>*q)
    {
        printf("max number is %d ",*p);
    }
    else
    {
        printf("max number is %d",*q);
    }
    return 0;
}
