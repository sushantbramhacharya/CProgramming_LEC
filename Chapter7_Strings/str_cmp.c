#include<stdio.h>
#include<string.h>
void main()
{
    char name1[50],name2[50];
    printf("Enter Name1 and Name2 (Seprate with new line) : ");
    gets(name1);
    gets(name2);
    switch (strcmp(name1,name2))
    {
    case 1:
        printf("The ASCII value of Characters in Name1 is higher");
        break;
    
    case -1:
        printf("The ASCII value of Characters in Name2 is higher");
        break;
    case 0:
        printf("Both are equal");
        break;
    }
}