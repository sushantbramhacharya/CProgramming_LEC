#include <stdio.h>
int add(int a, int b, int c)
{
    return a + b + c;
}
void tax(int salary[], int n)
{
    float tax[100];
    for (int i = 0; i < n; i++)
    {
        if (salary[i] < 9000)
        {
            tax[i] = salary[i] * 0.2;
        }
        else
        {
            tax[i] = salary[i] * 0.25;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("The tax of %dnd employee is %.2f \n", i + 1, tax[i]);
    }
}
int primeChecker(int num)
{
    if(num==1)
        return 0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            return 1;
    }
    return 2;
}
int LCM(int n1,int n2,int hcf)
{
    return (n1*n2)/hcf;
}
int HCF(int n1,int n2)
{
    int HCF;
    for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            HCF= i;
    }
    return HCF;
}
void main()
{
    // ADD
    // int a,b,c,result;
    // printf("Enter the three numbers : ");
    // scanf("%d%d%d",&a,&b,&c);
    // result=add(a,b,c);
    // printf("%d",result);

    // TAX
    // int salary[100], n;
    // printf("Enter the number of Employee : ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the salary of %d nd employee : ", i + 1);
    //     scanf("%d", &salary[i]);
    // }
    // tax(salary, n);

    //Prime Checker
    // int num;
    // printf("Enter the number : ");
    // scanf("%d",&num);
    // switch(primeChecker(num))
    // {
    //     case 0:
    //         printf("Neither Prime nor Composite.");
    //         break;
    //     case 1:
    //         printf("Its composite");
    //         break;
    //     case 2:
    //         printf("Its Prime");
    //         break;
    // }

    //HCF LCM
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("%d is HCF and %d is LCM.",HCF(n1,n2),LCM(n1,n2,HCF(n1,n2)));
}