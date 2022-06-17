#include<stdio.h>
void main()
{
    int a,b,c,n;
    float res;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Menu:\n1.Sum\n2:Sum of the squares\n3:Sum of cubes\n4.Product\n---->");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("The sum is %d",a+b+c);
        break;
    case 2:
        res=(a*a)+(b*b)+(c*c);
        printf("The sum is %.1f",res);
        break;
    case 3:
        res=(a*a*a)+(b*b*b)+(c*c*c);
        printf("The sum is %.1f",res);
        break;
    case 4:
        res=a*b*c;
        printf("The sum is %.1f",res);
        break;
    default:
        printf("Invalid Number");
        break;
    }
}