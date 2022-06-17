#include <stdio.h>
#include <math.h>
void main()
{
    float p, n, r, f;
    printf("Enter the values of p n and r (in decimal point) : ");
    scanf("%f%f%f", &p, &n, &r);
    f = p * pow((1 + r), n);
    printf("The compound intrest added with amount is %f", f);
}