#include <stdio.h>
#include <math.h>
void main()
{
    int a, option;
    printf("Enter the value you want : ");
    scanf("%d", &a);
BACK:
    printf("Enter the Command Number : \n1.Sin\n2.Cos\n3.Tan\n4.Arc Sin\n5.Arc Cos\n6.Arc Tan\n7:Hyperbolic Sin\n8.Hyperbolic Cos\n9:Hyperbolic Tan\n------->");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("%f", sinf(a));
        printf("\n%f for cosec", 1 / sinf(a));
        break;
    case 2:
        printf("%f", cosf(a));
        printf("\n%f for sec", 1 / cosf(a));
        break;
    case 3:
        printf("%f", tanf(a));
        printf("\n%f for cot", 1 / tanf(a));
        break;
    case 4:
        printf("%f", asinf(a));
        printf("\n%f for Arc cosine", 1 / asinf(a));
        break;
    case 5:
        printf("%f", acosf(a));
        printf("\n%f for Arc sec", 1 / acosf(a));
        break;
    case 6:
        printf("%f", atanf(a));
        printf("\n%f for Arc cot", 1 / atanf(a));
        break;
    case 7:
        printf("%f", sinh(a));
        printf("\n%f for Hyperbolic cosine ", 1 / sinh(a));
        break;
    case 8:
        printf("%f", cosh(a));
        printf("\n%f for Hyperbolic sec", 1 / cosh(a));
        break;
    case 9:
        printf("%f", tanf(a));
        printf("\n%f for Hyperbolic cot", 1 / tanf(a));
        break;

    default:
        printf("Invalid Command");
        goto BACK;
    }
}