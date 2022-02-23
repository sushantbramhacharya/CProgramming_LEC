/*

W B W B
B W B W
W B W B
B W B W

*/
#include <stdio.h>
void chess_pattern(int matrix)
{
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
void main()
{
    int matrix;
    printf("Enter the matrix Row\n");
    scanf("%d", &matrix);
    chess_pattern(matrix);
}