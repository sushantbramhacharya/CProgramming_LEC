#include<stdio.h>
#include<string.h>
void main()
{
    char input[50],name[50],last_name[50];
    puts("Enter the string");
    gets(input);
    puts("Enter the 2nd string");
    gets(name);
    puts("Enter the 3rd string");
    gets(last_name);
    strcat(input,name);
    strcat(input,last_name);
    puts(input);

}