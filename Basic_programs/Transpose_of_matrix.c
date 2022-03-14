#include <stdio.h>
void main()
{
    int a[3][3], t[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the number for %d row and %d Column ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            t[j][i] = a[i][j];
        }
    }
    printf("Matrix Before Transpose \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    printf("The Transposed matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", t[i][j]);
        }
        printf("\n");
    }
}