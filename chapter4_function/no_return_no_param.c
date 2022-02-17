#include <stdio.h>
void sum()
{
    int a, b, sum;
    printf("Enter the numbers \n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("The sum of the numbers %d \n", sum);
}
void main()
{
    sum();
}