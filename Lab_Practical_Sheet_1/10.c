#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter the numbers a and b : ");
    scanf("%f%f",&a,&b);
    printf("The evaluation are:\na+b = %f\na-b=%f\na*b=%f\na/b=%f\nRemainder while a/b=%d",a+b,a-b,a*b,a/b,(int)a%(int)b);
}