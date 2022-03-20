#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,root_1,root_2;
    printf("Enter a b c:");
    scanf("%d%d%d",&a,&b,&c);
    root_1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    root_2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("The roots are %d and %d",root_1,root_2);
}