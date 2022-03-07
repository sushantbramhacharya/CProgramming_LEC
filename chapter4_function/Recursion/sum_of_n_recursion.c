#include <stdio.h>
int naturalNumbers(int n)
{
    if (n >= 1)
    {
        return n + naturalNumbers(n - 1);
    }
    else
    {
        return 0;
    }
}
void main()
{
    int natural, n;
    printf("Enter the number you want sum: ");
    scanf("%d", &n);
    natural = naturalNumbers(n);
    printf("The sum of n number of %d is %d", n, natural);
}