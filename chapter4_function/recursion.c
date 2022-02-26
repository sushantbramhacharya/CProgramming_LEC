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
    int fact;
    fact = factorial(5);
    printf("The factorial of %d is %d", 5, fact);
}