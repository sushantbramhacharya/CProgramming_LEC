#include<stdio.h>
#include<string.h>
void main()
{
    char name1[]="Pokhara City";
    char name2[]={'K','a','t','h','m','a','n','d','u',' ','C','i','t','y'};
    for(int i=0;i<strlen(name1);i++)
    {
        printf("%c\n",name1[i]);
    }
    printf("\n");
    for(int i=0;i<strlen(name2);i++)
    {
        printf("%c\n",name2[i]);
    }
}