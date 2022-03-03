// EOF is end of file which is defined in stdio.h
// EOF is a constant defined as an integer value -1
// More in README.md ..................
#include <stdio.h>
void main()
{
    int num, sum = 0;
    printf("Enter Numbers or Ctrl+Z to terminate Program : \n");
    while (scanf("%d", &num) != EOF)
    {
        sum = sum + num;
    }
    printf("The sum of the Integers is %d", sum);
}