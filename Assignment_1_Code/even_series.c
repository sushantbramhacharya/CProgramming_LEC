#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        printf("%3d",i);
    }
}