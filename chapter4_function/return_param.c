#include <stdio.h>
int add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
void main()
{
    int num1, num2, sum;
    printf("Enter two numbers to add :\n");
    scanf("%d%d", &num1, &num2);
    sum = add(num1, num2);
    printf("Sum is = %d", sum);
}