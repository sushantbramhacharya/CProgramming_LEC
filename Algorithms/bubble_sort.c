#include <stdio.h>
void bubbleSort(int array[], int n)
{
    int i, j, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
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
    bubbleSort(array, 10);
}
