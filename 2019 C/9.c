#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	char address[20];	
};
void main()
{
	struct employee e[25];
	struct employee *ptr = &e;
	char temp[20];
	int em=25,i,j;
	for(int i=0;i<em;i++)
	{
		printf("Enter id name and address : ");
		scanf("%d%s%s",&e[i].id,e[i].name,e[i].address);	
	}
	for(i=0;i<em;i++)
    {
        for(j=i+1;j<em;j++)
        {
            if(strcmp((*(ptr+j)).name,(*(ptr+i)).name)<0)
            {
                strcpy(temp,(*(ptr+j)).name);
                strcpy((*(ptr+j)).name,(*(ptr+i)).name);
                strcpy((*(ptr+i)).name,temp);
            }
        }
    }
    for(int i=0;i<em;i++)
	{
		printf("[%d]th\n%d\n%s\n%s\n",i+1,e[i].id,e[i].name,e[i].address);	
	}
}