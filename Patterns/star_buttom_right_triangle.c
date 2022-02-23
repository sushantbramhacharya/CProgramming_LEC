/*

    *
  * *
* * *

*/
#include <stdio.h>
void main()
{
    int n, row = 3;
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