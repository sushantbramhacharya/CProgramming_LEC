#include<stdio.h>
int fibonacci(int i){ 
	if(i==0) 
        return 0; 
	else if(i==1) 
        return 1; 
	else 
        return (fibonacci(i-1)+fibonacci(i-2));
        // 0 1 1 2 3 5 8
} 
void main()
{
    
        printf("%d\t",fibonacci(13));

    
}