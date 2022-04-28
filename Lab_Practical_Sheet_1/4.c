#include<stdio.h>
void main()
{
    float l,b,area,perimeter;
    printf("Enter the length and bredth : ");
    scanf("%f%f",&l,&b);
    area=l*b;
    perimeter=l+l+b+b;
    printf("The area is %f.\nPerimeter is %f.",area,perimeter);

}