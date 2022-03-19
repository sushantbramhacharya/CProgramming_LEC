#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Its even");
    }
    else{
        printf("The number is odd");
    }
}