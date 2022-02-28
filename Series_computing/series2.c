#include <stdio.h>
void main()
{
    float terms, exp, sum = 0;
    printf("Enter the number of terms you want:");
    /*The pattern of this specific series is
    (1*7)/1+(3*12)/2+(9*47)/3+(19*47)/3
    expression =
    (2i^2+1)*(5i^3+7)/(i+1)*/
    scanf("%f", &terms);
    printf("The terms are : ");
    for (int i = 0; i < terms; i++)
    {
        exp = (float)(2 * i * i + 1) * (5 * i * i * i + 7) / (i + 1);
        printf(" %.2f", exp);
        sum += exp;
    }
    printf("\nThe sum of %d terms are : %.3f", &terms, sum);
}