#include<stdio.h>
#include<string.h>
void main()
{
    char input[30],temp[30];
    printf("Enter the string : ");
    scanf("%s",input);
    strcpy(temp,input);
    if(strcmp(temp,strrev(input))==0)
    {
        printf("%s is palindrome ",temp);
    }
    else{
        printf("Its not palindrome");
    }
}