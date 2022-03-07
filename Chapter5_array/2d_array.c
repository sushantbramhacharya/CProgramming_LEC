#include <stdio.h>
void main()
{
    int temp[7][2];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the temprature of the city for %d day %d city : ", i + 1, j + 1);
            scanf("%d", &temp[i][j]);
        }
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The temprature of %d day %d city is [%d]\n", i + 1, j + 1, temp[i][j]);
        }
    }
}