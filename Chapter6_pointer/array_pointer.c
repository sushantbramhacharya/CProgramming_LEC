#include <stdio.h>
void main()
{
    int a[5];
    int *ap[5];
    printf("Enter the 5 values for array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        ap[i] = &a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The address of %d at [%d] index is %p.\n", a[i], i, ap[i]);
    }
}