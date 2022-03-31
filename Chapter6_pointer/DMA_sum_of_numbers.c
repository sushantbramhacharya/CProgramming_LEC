#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,sum=0;
    printf("Enter the number you want to be allocated : ");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the number for %d index : ",i);
        scanf("%d",(ptr+i));
        sum=sum+*(ptr+i);
    }
    printf("The sum of numbers is %d.",sum);
    free(ptr);
}