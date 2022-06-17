#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;

    printf("Enter sides of a triangle\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("Invalid Data");
    }
    else{
        s = (a+b+c)/2; 
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the triangle = %.2f\n", area);
    }

    return 0;
}