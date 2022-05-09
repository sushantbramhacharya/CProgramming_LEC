//WAP to calculate F=2.9678*(10^-27)+2.9678*(10^-27)/7.025*(10^16)-9.75*(10^12)
#include<stdio.h>
void main()
{
    float a=2.9678*(10^-27),b=2.9678*(10^-27),c=7.025*(10^16),d=9.75*(10^12),e;
    e = a+b/c-d;
    printf("The ans is = %f",e);
}