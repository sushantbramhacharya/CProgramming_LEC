#include<stdio.h>
void main()
{
    int num = 1, count_odd = 0,count_even = 0;
    while(num != 0)
    {
        printf("Enter Numbers and enter 0 to cancel:\n");
        scanf("%d", &num);
        if(num % 2 == 0)
            count_even++;
        else
            count_odd++;
    }
    printf("Count of odd is %d and Even is %d",count_odd,count_even);
}
