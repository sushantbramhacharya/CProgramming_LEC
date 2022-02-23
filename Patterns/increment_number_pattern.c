/*

 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

*/
#include <stdio.h>
void main()
{
    int row;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
}