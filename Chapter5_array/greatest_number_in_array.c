#include <stdio.h>
void main()
{
    int array[10] = {3, 2, 1, 4, 4, 5, 6, 3, 7, 4};
    int n = 10,greatest=0;
    for(int i=0;i<n;i++)
    {
        if(greatest<array[i])
        {
            greatest=array[i];
        }
    }
    printf("The Greatest Number in an array is %d",greatest);
}