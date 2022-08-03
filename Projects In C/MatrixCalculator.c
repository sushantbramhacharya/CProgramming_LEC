#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>
int m, n,p ,q, i, j;
void matrixTranspose(int matrix[][10])
{
    int transpose[10][10];
    for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];
     printf("Transpose of the matrix:\n");
    for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
        printf("\n");
    }
}
void addition(int matA[][10],int matB[][10])
{
    printf("Sum of the matrixes:\n");
    for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", matA[i][j]+matB[i][j]);
        printf("\n");
    }
}
void sub(int matA[][10],int matB[][10])
{
    printf("Difference of the matrixes:\n");
    for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", matA[i][j]-matB[i][j]);
        printf("\n");
    }
}
void multiplication(int a[][10],int b[][10])
{
    int k;
    int mul[10][10];
    printf("Product of the matrixes:\n");  
    for(i=0;i<m;i++)    
    {    
        for(j=0;j<n;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<n;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }        
    for(i=0;i<m;i++)    
        {    
            for(j=0;j<q;j++)    
            {    
            printf("%d\t",mul[i][j]);    
            }    
        printf("\n");    
    }  
}
void normalOperations(int s)
{
    float a, b;
    printf("Enter the two numbers: ");
    scanf("%f%f",&a,&b);
    switch(s)
    {
        case 5:
            printf("The sum of numbers : %.2f",a+b);
            break;
        case 6:
            printf("The sum of numbers : %.2f",a-b);
            break;
        case 7:
            printf("The sum of numbers : %.2f",a*b);
            break;
        case 8:
            printf("The sum of numbers : %.2f",a/b);
            break;
    }
}
void main()
{
    int s, matrix[10][10],matrix_2[10][10];
    char c;
    START:
    printf("---------Welcome to Calculator with Matrix Operations---------\n");
    printf("Enter the operation you wanna perform :\n-------------Matrix Operations-----------\n1.ADD\n2.SUB\n3.MULTIPLY\n4.Transpose\n");
    printf("--------------Normal Operations ---------------\n5.Add\n6.Sub\n7.Multiply\n8.Divide\n----->");
    scanf("%d",&s);
    if(s<4)
    {
        printf("Enter rows and columns for MAT A :\n");
        scanf("%d%d", &m, &n);
        printf("Enter rows and columns for MAT B :\n");
        scanf("%d%d", &p, &q);
        if((s<=2&&(p!=m||q!=n))||(s>2&&(p!=n||q!=m)))
        {
            printf("Cannot Perform Operation.\nWould you like to re do:[y/n]");
            fflush(stdin);
            scanf("%c",&c);
            if(c=='y')
                goto START;
            else
                exit(0);
        }
        printf("Enter elements of the MAT A\n");
        for (i= 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
        printf("Enter elements of the MAT B\n");
        for (i= 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &matrix_2[i][j]);
        switch(s)
        {
            case 1:
                addition(matrix,matrix_2);
                break;
            case 2:
                sub(matrix,matrix_2);
                break;
            case 3:
                multiplication(matrix,matrix_2);
                break;
                
        }
    }
    else if(s==4)
    {
        printf("Enter rows and columns for Matrix:\n");
        scanf("%d%d", &m, &n);
        printf("Enter elements of the matrix\n");
        for (i= 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
        matrixTranspose(matrix);
    }
    else
    {
        if(s<9)
            normalOperations(s);
        else
        {
            printf("Invalid Code \nWould you like to re do:[y/n]");
            fflush(stdin);
            scanf("%c",&c);
            if(c=='y')
                goto START;
            else
                exit(0);
        }
    }
}