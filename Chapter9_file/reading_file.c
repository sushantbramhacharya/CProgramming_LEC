#include<stdio.h>
void main()
{
    char name[50];
    FILE *fp;
    fp=fopen("Data.txt","r");
    fscanf(fp,"%s",name);
    printf("%s",name);
}