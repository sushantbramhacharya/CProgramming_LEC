#include <stdio.h>
int array[10] = {3, 2, 1, 4, 4, 5, 6, 3, 7, 4};
int n = 10;
int linearSearch(int search)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (array[i] == search)
            return i;
    }
    if (i == n)
        return -1;
}
void main()
{
    int algo, search, found;
    printf("Enter the number You wanted to seach : ");
    scanf("%d", &search);
ReEnter:
    printf("Which Search Algorithms\n1.Linear Search\n2.\n-->>");
    scanf("%d", &algo);
    switch (algo)
    {
    case 1:
        found = linearSearch(search);
        break;
    default:
        printf("Use valid command : ");
        goto ReEnter;
    }
    if (found != -1)
        printf("Element is present in array at [%d] index", found);
    else
        printf("Element is not found");
}