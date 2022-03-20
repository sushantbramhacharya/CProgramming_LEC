#include<stdio.h>
void main()
{
    int a,fact=1;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i=a;i>=1;i--)
    {
        fact*=i;
    }
    printf("The factoial is %d",fact);
}