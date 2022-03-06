#include<stdio.h>
void main()
{
    int sum = 0, number;
    for(number = 1;number <= 10; number++)
    {
        sum = sum + number;
    }
    printf("The sum of the 10 natural numers = %d", sum);
}
