// Auto variables are type of variable that can be initilized,accessed,modified and destroyed
// When Control is exited from a function
// variables are auto by default in function
#include <stdio.h>
void main()
{
    auto int a = 10;
    // cannot be used outside function
    printf("%d", a);
}