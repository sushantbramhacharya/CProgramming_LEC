#include<stdio.h>
void main()
{
    int a=15;
    char b='a';
    float c=12.13;
    printf("The value of a is %d \nValue of b is %c \nValue of c is %f\n",a,b,c);
    printf("The address of a is %p \nAdress of b is %p\nAddress of c is %p",&a,&b,&c);
}