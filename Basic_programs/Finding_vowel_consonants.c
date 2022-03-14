#include<stdio.h>
#include<string.h>
void main()
{
    char words[50];
    int n,v=0,c=0;
    printf("Enter your good name ? \n");
    scanf("%s",words);
    for(int i=0;i<strlen(words);i++)
    {
        if(words[i]=='a'||words[i]=='e'||words[i]=='i'||words[i]=='o'||words[i]=='u'||words[i]=='A'||words[i]=='E'||words[i]=='I'||words[i]=='O'||words[i]=='U')
        {
            v++;
        }
        else{
            c++;
        }
    }
    printf("Your name has %d Vowels and %d Consonants.",v,c);
}