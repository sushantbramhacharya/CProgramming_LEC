#include <stdio.h>
void main()
{
    int c_mark;
    printf("Enter the marks you have obtained in C programming : ");
    scanf("%d", &c_mark);

    if (c_mark >= 40)
    {
        printf("You have passed!!!");
        if (c_mark >= 85)
        {
            printf("You have got A+");
        }
        else if (c_mark >= 70 && c_mark < 80)
        {
            printf("You have got A");
        }
        else if (c_mark >= 50 && c_mark < 70)
        {
            printf("You have got B");
        }
        else
        {
            printf("You have got D");
        }
    }
    else
    {
        printf("You have to study hard for next Attempt");
    }
}