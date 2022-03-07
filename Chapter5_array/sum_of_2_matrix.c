#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],sum[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the number of %d i %d j element for 1st matrix : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the number of %d i %d j element for 2nd matrix : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum is : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n\n");
    }
}