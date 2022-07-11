#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,res=0;
	char s;
 	printf("Choose an operator +,-,*,/: ");
 	scanf("%c",&s);
 	printf("\nCoose value for a and b: ");
 	scanf("%d %d",&a,&b);
 	switch(s){
 		case '+':
	 	res=a+b;
	 	printf("%d",res);
	 	break;
 	case '-':
	 	res=a-b;
	 	printf("%d",res);
	 	break;
 	case '*':
	 	res=a*b;
	 	printf("%d",res);
	 	break;
 	case '/':
	 	res=a/b;
	 	printf("%d",res);
	 	break;
	 }
 	
}