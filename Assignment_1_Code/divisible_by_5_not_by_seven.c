#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%5==0&&n%7!=0)
    {
        printf("It is not Divisible by 7 but by 5");
    }
    else{
        printf("It not qualified");
    }
}