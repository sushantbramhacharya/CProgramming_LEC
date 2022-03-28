#include<stdio.h>
#include<string.h>
int count(char str[])
{
    return strlen(str);
}
void main()
{
    char input[30];
    printf("Enter the string : ");
    gets(input);
    printf("%d",count(input));
}