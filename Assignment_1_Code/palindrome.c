#include<stdio.h>
void main()
{
    int n,rev=0,rem,num;
    printf("Enter the number : ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
    {
        printf("%d is palindrome.",num);
    }
    else{
        printf("The number is not palindrome.");
    }
}