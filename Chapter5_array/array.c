#include <stdio.h>

void int_arr();
void char_array()
{
    char characters[100];
    printf("Enter the characters : \n");
    scanf("%s", characters);

    printf("The required character with index 3 from array is %c\n", characters[3]);
    for (int i = 0; i < 7; i++)
    {
        printf("The %d index character is %c\n", i, characters[i]);
    }
}
void main()
{
    int_arr();
    // char_array();
}

void int_arr()
{
    int numbers[20], size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d index number : \n", i);
        scanf("%d", &numbers[i]);
    }

    printf("The required number with index 3 from array is %d\n", numbers[3]);
    for (int i = 0; i < size; i++)
    {
        printf("The %d index number is %d\n", i, numbers[i]);
    }
}
