#include <stdio.h>
void main()
{
    int testInteger;
    printf("The address of declared : %d\n", &testInteger);
    printf("Enter an integer:");
    scanf("%d", &testInteger);
    printf("number = %d", testInteger);
}