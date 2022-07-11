#include <stdio.h>

int main() {
    int a[30],i,j,k=30;
    printf("Enter the age of the employees: ");
    for (i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[j]>a[i])
            {
                a[j]=a[j]+a[i];
                a[i]=a[j]-a[i];
                a[j]=a[j]-a[i];
            }
        }
    }
    printf("Second largest is %d ",a[1]);
    
}