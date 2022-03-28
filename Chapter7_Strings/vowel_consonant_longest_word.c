#include <stdio.h>
#include <string.h>
char* vowelConsonants_longest(char str[],int *vowel,int *consonant)
{
    static char longest[20];
    int count = 0, pos, max = 0;
    for (int i = 0; i <= strlen(str); i++)
    {
        if(str[i] == ' '||str[i]=='\0')
        {
            if (max < count)
            {
                max = count;
                pos = i - count;
            }
            count = 0;
        }
        else
        {
            count++;
        }
    }
    for (int i = 0, j = pos; i < max; i++, j++)
    {
        longest[i]=str[j];
        if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
        {
            *vowel=*vowel+1;
        }
        else{
            *consonant=*consonant+1;
        }
    }
    return longest;
}
void main()
{
    char str[100],*ptr_rtn;
    int vowel=0,consonant=0;
    gets(str);
    ptr_rtn=vowelConsonants_longest(str,&vowel,&consonant);
    printf("Vowel : %d\nConsonant : %d\nLongest Word : %s",vowel,consonant,ptr_rtn);
}