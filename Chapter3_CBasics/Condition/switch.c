#include <stdio.h>
void main()
{
    char grade;
    printf("Enter your grade : \n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
    case 'C':
        printf("Well done\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'F':
        printf("Better try again\n");
        break;
    default:
        printf("Invalid Grade\n");
        break;
    }
    printf("Your grade is %c", grade);
}