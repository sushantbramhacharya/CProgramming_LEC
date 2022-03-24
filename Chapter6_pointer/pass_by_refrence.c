#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int num1,num2;
    printf("Enter num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    swap(&num1,&num2);
    printf("The value of num1 is %d\nThe value of num2 is %d",num1,num2);
}