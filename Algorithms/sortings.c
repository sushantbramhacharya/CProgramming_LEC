#include <stdio.h>
int array[10] = {3, 2, 1, 4, 4, 5, 6, 3, 7, 4};
int n = 10;
void selectionSort()
{
    int i, j, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}
void bubbleSort()
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
}
void insertionSort()
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = array[i];
        j = i - 1;
        while (array[j] > temp && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j+1]=temp;
    }
}
void displayArray()
{
    printf("The sorted array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
void main()
{
    int algo, n = 10;
    // printf("Enter the numbers in array : ");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &array[i]);
    // }
ReEnter:
    printf("Which Algorithms to use\n1.Selection\n2.Bubble\n3.Insertion\n-->");
    scanf("%d", &algo);
    switch (algo)
    {
    case 1:
        selectionSort();
        break;
    case 2:
        bubbleSort();
        break;
    case 3:
        insertionSort();
        break;
    default:
        printf("Use valid command : ");
        goto ReEnter;
    }
    displayArray();
}
