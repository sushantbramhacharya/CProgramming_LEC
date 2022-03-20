#include <stdio.h>
void main()
{
    int n1, n2, i, HCF,LCM;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            HCF = i;
    }
    LCM=n1*n2/HCF;
    printf("HCF is %d LCM is %d ", HCF,LCM);

}