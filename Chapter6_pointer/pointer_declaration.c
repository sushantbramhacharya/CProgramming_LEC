#include<stdio.h>
void main()
{
    int *ptr_var;
    int number =12345;
    ptr_var=&number;
    printf("The address of %d is : %p",number,ptr_var);
}