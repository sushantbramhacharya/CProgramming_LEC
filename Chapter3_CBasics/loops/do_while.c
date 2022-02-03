#include <stdio.h>
void main()
{
    int a = 10;

    do
    {
        printf("Value of A - %d\n", a);
        ++a;
    } while (a < 20);
}