#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll;
} s1, s2;
void main()
{
    char name[20];
    puts("Enter S1 name :  ");
    gets(name);
    puts("Enter S1 roll :  ");
    scanf("%d", &s1.roll);
    strcpy(s1.name, name);
    puts("Enter S2 name :  ");
    fflush(stdin);
    gets(name);
    puts("Enter S2 roll :  ");
    scanf("%d", &s2.roll);
    strcpy(s2.name, name);

    printf("The name of S1 is %s and roll is %d.\n", s1.name, s1.roll);
    printf("The name of S1 is %s and roll is %d.\n", s2.name, s2.roll);
}