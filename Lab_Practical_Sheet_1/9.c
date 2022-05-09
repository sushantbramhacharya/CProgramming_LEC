#include<stdio.h>
void main()
{
    float a, b, c, d, f;
    printf("Enter any 4 numbers =");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    f = (a+b+c+d);
    a = a/f*100;
    b = b/f*100;
    c = c/f*100;
    d = d/f*100;
    printf("Percentage of your first num = %f\nPercentage of your second num = %f\nPercentage of your third num = %f\nPercentage of your fourt num = %f\n",a,b,c,d);
}