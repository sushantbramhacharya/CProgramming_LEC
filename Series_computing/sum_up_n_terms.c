#include <stdio.h>
void main()
{
    int n, term, sum = 0;
    printf("Enter the number of terms : ");
    scanf("%d", &term);
    printf("The terms are : ");
    for (int i = 1; i <= term; i++)
    {
        printf(" %d", i);
        sum = sum + i;
    }
    printf("\nThe sum of %d terms : %d", term, sum);
}