#include<stdio.h>
int* reverse();
void main()
{
    int i,*p;
    p=reverse();
    for(i=0;i<5;i++)
    {
        printf("%d\t",p[i]);
    }
}
int* reverse()
{
    int i,temp;
    static int num[5]={10,20,30,40,50};
    for(i=0;i<5/2;i++)
    {
        temp=num[i];
        num[i]=num[4-i];
        num[4-i]=temp;
    }
    return num; 
}