#include<stdio.h>
void main()
{
    int a,b=0,rem;
    printf("Enter a number =");
    scanf("%d",&a);
    while(a!=0)
    {
        rem = a % 10;
        b=b+rem;
        a=a/10;

    }
    printf("sum is = %d",b);
}