#include <stdio.h>
long int factorial(int num)
{
    long int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}
void main()
{
    int num;
    printf("Enter the number you want factorial :\n");
    scanf("%d", &num);
    printf("The factorial is %ld", factorial(num));
}