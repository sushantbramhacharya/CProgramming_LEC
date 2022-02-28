#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n ;
    printf("Enter the nth term in fibonacci : ");
    scanf("%d",&n);
    printf("%d", fib(n));
}