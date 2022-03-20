#include<stdio.h>
void main()
{
    int a,sum=0,rem;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a/=10;
    }
    printf("%d is sum",sum);
}