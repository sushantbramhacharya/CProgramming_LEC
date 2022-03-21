#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==1)
        printf("Neither prime nor composite.");
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Composite.");
            break;
        }
    }
    if(i==n)
    {
        printf("Its prime.");
    }
}