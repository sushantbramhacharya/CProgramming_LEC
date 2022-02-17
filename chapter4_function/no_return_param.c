#include<stdio.h>
void add(int a,int b)
{
    int sum=a+b;
    printf("The sum of the two numbers %d \n",sum);

}
void main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    add(a,b);
}