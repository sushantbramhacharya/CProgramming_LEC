#include <stdio.h>  
int main()  
{  
    int width=5;  
    int height=10;  
    int area=width*height;  
    if(area>2500)
        printf("Auditorium");
    else if(area>=500 || area<=2500)
        printf("Hall");
    else if(area>150||area<500)
        printf("Big room");
    else
        printf("Small Room");
}  