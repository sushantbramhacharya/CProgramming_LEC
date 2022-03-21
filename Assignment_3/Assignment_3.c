#include<stdio.h>
int add(int a,int b,int c)
{
    return a+b+c;
}

void main()
{
    int a,b,c,result;
    printf("Enter the three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    result=add(a,b,c);
    printf("%d",result);
}