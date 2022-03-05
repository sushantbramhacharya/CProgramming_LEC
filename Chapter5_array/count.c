//wap to count and find the sum of all number in the array which are exactly divided by 7 but not by 5
#include<stdio.h>
int sum(int array[5])
{
    int sum=0,count=0;
    for(int i=0;i<5;i++)
    {
        if(array[i]%7==0&&array[i]%5!=0)
        {
            sum=sum+array[i];
            count++;
        }
    }
    printf("The count of numbers divisible by 7 and not by 5 is %d\n",count);
    return sum;
}
void main()
{
    int array[5],sumOfNumbers;
    printf("Enter the numbers : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    sumOfNumbers=sum(array);
    printf("The sum is %d",sumOfNumbers);
}