/*

 *
 * *
 * * *
 * * * *
 * * * * *
 
 */
#include <stdio.h>
void multiplicationTable()
{
    int i, j, row, column, number;
    printf("enter the row and the column \n");
    scanf("%d%d", &row, &column);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}
void triangularNumber()
{

    int i, j, num = 1, triangular_number;
    printf("enter the number \n ");
    scanf("%d", &triangular_number);
    for (i = 1; num <= triangular_number; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%3d", num);
            num++;
        }
        printf("\n");
    }
}
void triangularStar()
{
    int i, j, row;
    printf("How many rows\n");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    triangularStar();
}