#include <stdio.h>
void main()
{
    int a = 0, b = 1, c = b, n;
    printf("Enter the numbers : ");
    scanf("%d", &n);
    printf("%d", a);
    for (int i = 1; i <= n - 2; i++)
    {
        printf(" %d", c);
        c = a + b;
        a = b;
        b = c;
    }
}