#include <stdio.h>
void main()
{
    int n, row;
    printf("How many rows You want\n");
    scanf("%d", &row);
    n = row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= n)
            {
                printf("   ");
            }
            else
            {
                printf("%2d ", j);
            }
        }
        printf("\n");
        n--;
    }
}