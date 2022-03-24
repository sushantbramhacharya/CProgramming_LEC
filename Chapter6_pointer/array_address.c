#include<stdio.h>
void main()
{
    int a[] ={2,3,5,3,2};
    for(int i=0;i<5;i++)
    {
        printf("Address of %d at index [%d] is %p.\n",a[i],i,&a[i]);
    }
}