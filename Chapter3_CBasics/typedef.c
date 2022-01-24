#include <stdio.h>
void main()
{
    typedef float mark;
    mark mark1, mark2, average;
    printf("Enter the value of mark1 and mark2: ");
    scanf("%f%f", &mark1, &mark2);
    average = mark1 + mark2 / 2;
    printf("Average : %f", average);
}