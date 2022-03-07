#include <stdio.h>
int factorial(int n)
{
    if (n >= 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
void main()
{
    int fact, n;
    printf("Enter the number you want factorial: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of %d is %d", n, fact);
}