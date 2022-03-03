// Can be used out side of Functions and used globally
#include <stdio.h>
int sum, num1, num2;
void Sum();
void main()
{
    printf("Enter the number : \n");
    scanf("%d%d", &num1, &num2);
    Sum();
    printf("The sum is %d", sum);
}
void Sum()
{
    sum = num1 + num2;
}