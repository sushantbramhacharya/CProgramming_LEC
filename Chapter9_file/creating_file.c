//When working with files you need to declare a pointer of type file
//This decleartion is needed for communication between the file and program.
//ptr=fopen("file_name","mode");
#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("Data.txt","w");
}