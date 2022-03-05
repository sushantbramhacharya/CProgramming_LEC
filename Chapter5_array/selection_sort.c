#include <stdio.h>
void selectionSort(int array[], int n)
{
    int i, j, temp;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("The sorted array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
void main()
{
    int array[10];
    printf("Enter the numbers in array : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    selectionSort(array, 10);
}
