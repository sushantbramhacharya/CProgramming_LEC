#include<stdio.h>
#define PI 3.14
void main()
{
    float radius,surface_area,volume;
    printf("Enter the radius of the sphere : ");
    scanf("%f",&radius);
    surface_area=4*PI*radius*radius;
    volume=(4/3)*PI*radius*radius*radius;
    printf("The surface area is %f\nThe volume is %f",surface_area,volume);
}