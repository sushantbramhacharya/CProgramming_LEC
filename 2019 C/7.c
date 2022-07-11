#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,j,k=10;
    p = (int*)malloc(10 * sizeof(int));
    for(i=0;i<10;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(p+j>p+i)
            {
                *(p+j)=*(p+j)+*(p+i);
                *(p+i)=*(p+j)-*(p+i);
                *(p+j)=*(p+j)-*(p+i);
            }
        }
    }
    printf("Largest = %d\nSmallest = %d",(*p),(*(p+9)));
}
