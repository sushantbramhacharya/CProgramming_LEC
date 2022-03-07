#include<stdio.h>
int largestNumber(int a,int b,int c)
{
    if(a==b&&a==c)
        return 0;
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else 
    {
        if(b>c)
            return b;
        else
            return c;
    }
    
}
void main()
{
    int a,b,c;
    printf("Enter three numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Largest Number is %d",largestNumber(a,b,c));
}
