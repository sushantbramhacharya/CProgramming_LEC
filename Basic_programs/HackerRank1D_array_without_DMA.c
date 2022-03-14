#include<stdio.h>
int main()
{
    int arry[1000],i,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
        sum=sum+arry[i];
    }
    printf("%d",sum);
}