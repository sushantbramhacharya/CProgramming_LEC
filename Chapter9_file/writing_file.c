#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("Data.txt","w");
    fprintf(fp,"Sushant Bramhacharya");
}