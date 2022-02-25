#include <stdio.h>
void multiplicationTable();
void floydTriangle();
void triangularStar();
void incrementNumbersTriangleLeft();
void incrementNumbersTriangleRight(); // only two loops
void chessPattern();
void triangularStarRight();
void incrementNumbersInvertTriangleRight(); // uses three loops
void decrementNumbersInvertTriangleRight(); // uses three loops
void decrementNumbersTriangleRight();       // only two loops
void incrementDecrementPatternNumber();
void squareStarPattern();
void rectangleStarPattern();
void pyramidPattern();
void main()
{
    pyramidPattern();
}
void triangularStar()
{
    /*

    *
    * *
    * * *
    * * * *
    * * * * *

    */
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
void multiplicationTable()
{
    /*
    1   2   3   4
    2   4   6   8
    3   6   9  12
    4   8  12  16
    */
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
void floydTriangle()
{
    /*
    1
    2  3
    4  5  6
    7  8  9 10
    */
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
void incrementNumbersTriangleLeft()
{
    /*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    */
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
void incrementNumbersTriangleRight()
{
    /*

                 5
              4  5
           3  4  5
        2  3  4  5
     1  2  3  4  5

     */
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
void chessPattern()
{
    /*

W B W B
B W B W
W B W B
B W B W

*/
    int matrix;
    printf("Enter the matrix Row\n");
    scanf("%d", &matrix);
    for (int i = 1; i <= matrix; i++)
    {
        for (int j = 1; j <= matrix; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("W ");
            }
            else
            {
                printf("B ");
            }
        }
        printf("\n");
    }
}
void triangularStarRight()
{
    /*

    *
  * *
* * *

*/
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
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
        n--;
    }
}
void incrementNumbersInvertTriangleRight()

{
    /*

    1 2 3 4 5
      2 3 4 5
        3 4 5
          4 5
            5

    */
    int row;
    printf("How many rows You want\n");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (int k = i; k <= row; k++)
        {
            printf("%2d", k);
        }
        printf("\n");
    }
}
void decrementNumbersInvertTriangleRight()
{
    /*

      5 4 3 2 1
        4 3 2 1
          3 2 1
            2 1
              1

    */
    int row;
    printf("How many rows You want\n");
    scanf("%d", &row);
    for (int i = row; i >= 1; i--)
    {
        for (int j = row; j >= i + 1; j--)
        {
            printf("  ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("%2d", k);
        }
        printf("\n");
    }
}
void decrementNumbersTriangleRight()

{
    int n, row;
    printf("How many rows You want\n");
    scanf("%d", &row);
    n = 1 + 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= 1; j--)
        {
            if (j >= n)
            {
                printf("   ");
            }
            else
            {
                printf("%2d ", j);
            }
        }
        printf("\n");
        n++;
    }
}
void alphabetPattern()
{
    int row;
    printf("Enter the numbers of row:\n");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        /*
        A
        a       b
        A       B       C
        a       b       c       d
        A       B       C       D       E
        */
        for (int j = 65; j <= 65 + i - 1; j++)
        {
            if (i % 2 != 0)
                printf("%c\t", j);
            else
                printf("%c\t", j + 32);
        }
        printf("\n");
    }
}
void incrementDecrementPatternNumber()
{
    /*
    5
   4 6
  3   7
 2     8
1       9*/
    int top_num, n = 0;
    printf("Enter the numbers of top number:\n");
    scanf("%d", &top_num);
    for (int i = top_num; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= top_num + n; k++)
        {
            if (k == i)
                printf("%d", i);
            else if (k == top_num + n)
                printf("%d", k);
            else
                printf(" ");
        }
        printf("\n");
        n++;
    }
}
void squareStarPattern()
{
    /*
     * * * * *
     *       *
     *       *
     *       *
     * * * * *
     */
    int row;
    printf("Enter the numbers of row:\n");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || j == 1 || j == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
void rectangleStarPattern()
{
    /*
     * * * * * * *
     *           *
     *           *
     * * * * * * *
     */
    int row, column;
    printf("Enter the numbers of row and column:\n");
    scanf("%d%d", &row, &column);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || i == row || j == 1 || j == column)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
void pyramidPattern()
{
    /*
         1
       2 3 2
     3 4 5 4 3
   4 5 6 7 6 5 4
 5 6 7 8 9 8 7 6 5
 */
    int row, n;
    printf("Enter the numbers of row :\n");
    scanf("%d", &row);
    n = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j <= row - 1; j++)
        {
            printf("  ");
        }
        n = i;
        for (int k = 1; k <= i; k++)
        {
            printf(" %d", n++);
        }
        n--;
        for (int l = 1; l <= i - 1; l++)
        {
            printf(" %d", --n);
        }
        printf("\n");
    }
}
