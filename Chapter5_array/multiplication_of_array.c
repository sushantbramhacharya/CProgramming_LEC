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
            if(i==0)
            {
                sum[i][j]=a[0][0]*b[0][j]+a[0][1]*b[1][j];
            }
            else
            {
                sum[i][j]=a[1][0]*b[0][j]+a[1][1]*b[1][j];
            }
            // sum[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
            // sum[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
            // sum[i][j]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
            // sum[i][j]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
        }
    }
    printf("The product is : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n\n");
    }
}