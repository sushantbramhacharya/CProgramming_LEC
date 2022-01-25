#include <stdio.h>
void main()
{
    int a = 5;
    int b = 20;
    int c;

    if (a && b)
    {
        printf("Line 1 - Condition is True\n");
    }

    if (a || b)
    {
        printf("Line 2 - Condition is True\n");
    }

    a = 0;
    b = 10;

    if (a && b)
    {
        printf("Line 3 - Condition is True\n");
    }
    else
    {
        printf("Line 3 - Condition is not True\n");
    }

    if (!(a && b))
    {
        printf("Line 4 - Condition is True\n");
    }
}