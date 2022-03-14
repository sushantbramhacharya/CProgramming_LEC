/*
What is a leap year? To be a leap year, the year number must be divisible by four –
except for end-of-century years, which must be divisible by 400.
This means that the year 2000 was a leap year, although 1900 was not.
2020, 2024 and 2028 are all leap years.
*/
#include <stdio.h>
void main()
{
    int year, check;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Its a Leap Year");
            }
            else
            {
                printf("Its Not Leap Year");
            }
        }
        else
        {
            printf("Its a Leap Year");
        }
    }
    else
    {
        printf("Its not leap year.");
    }
}