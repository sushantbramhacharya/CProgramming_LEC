#include<stdio.h>
#include<conio.h>
void main()
{
	int b,a,c,det,x1,x2;
	printf("Enter a b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	det=b*b-4*a*c;
	x1=-b+(sqrt(det)/2*a);
	x2=-b-(sqrt(det)/2*a);
	printf("%d is 1st root\n%d is 2nd root",x1,x2);
}