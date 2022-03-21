#include <stdio.h>
void main()
{
    int *ptr_var;
    int number = 12345;
    ptr_var = &number;
    printf("The address of %d is : %p\n", number, ptr_var);
    printf("The value using pointer is %d", *ptr_var);
}