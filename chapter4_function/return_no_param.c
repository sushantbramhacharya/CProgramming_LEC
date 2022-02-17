#include<stdio.h>
int add()
{
    int a,b,sum;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}

void main()
{
    int sum;
    sum=add();
    printf("The Sum is %d",sum);
}