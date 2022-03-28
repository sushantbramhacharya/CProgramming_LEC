#include <stdio.h>
#include <string.h>
void vowelConsonant(char sentence[],int *vowel,int *conso,int print)
{
    int array[100], count = 0, greatest = 0;
    for (int i = 0; i < 100; i++)
    {
        array[i] = 0;
    }
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == ' ' )
        {
            count++;
        }
        else
        {
            array[count]++;
        }
    }
    for (int i = 0; i <= count; i++)
    {
        if (greatest < array[i])
        {
            greatest = array[i];
        }
    }
    count=0;
    //Display
    for(int i=0;i<strlen(sentence);i++)
    {
        if (sentence[i] != ' ')
        {
            if (array[count] == greatest)
            {
                for(int j=0,k=i;j<greatest;j++,k++)
                {
                    if(print)
                        printf("%c",sentence[k]);
                    strlwr(sentence);
                    if(sentence[k]=='a'||sentence[k]=='e'||sentence[k]=='i'||sentence[k]=='o'||sentence[k]=='u')
                    {
                        *vowel=*vowel+1;
                    }
                    else{
                        *conso=*conso+1;
                    }
                } 
                break;
            }   
        }
        else
        {
            count++;
        }
    }
}
void main()
{
    char sentence[1000];
    int conso_count=0,vowel_count=0;
    printf("Enter the sentence : ");
    gets(sentence);
    vowelConsonant(sentence,&vowel_count,&conso_count,1);
    printf(" is Largest Word.\nThe numeber of Vowels is %d and Cosonants is %d",vowel_count,conso_count);
}