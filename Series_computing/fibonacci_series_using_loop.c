#include <stdio.h>
#include <conio.h>
void main()
{
    int n, first_term = 0, second_term = 1, term;
    printf("Enter the number of terms you want to print : ");
    scanf("%d", &n);
    printf("The %d terms in fibonacci series are : %d %d", n, first_term, second_term);
    for (int i = 1; i <= n - 2; i++)
    {

        term = first_term + second_term;
        first_term = second_term;
        second_term = term;
        printf(" %d", term);
    }
}