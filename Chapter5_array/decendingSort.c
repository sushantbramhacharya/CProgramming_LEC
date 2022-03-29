#include<stdio.h>
void decendingSort(int arr[],int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void main()
{
    int i,n, arr[100];
    printf("Enter the number of items : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the numbers of %d : \n",i);
        scanf("%d",&arr[i]);
    }
    decendingSort(arr,n);
    printf("Sorted Array");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}