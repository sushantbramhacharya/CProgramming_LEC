
void main()
{
    int first[100][100],c1,c2,r1,r2, second[100][100],result[100][100];
    printf("Enter the row and column of first matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of secound matrix : ");
    scanf("%d%d",&r2,&c2);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the first matrix at %d row and %d column : ",i+1,j+1);
            scanf("%d",&first[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the second matrix at %d row and %d column : ",i+1,j+1);
            scanf("%d",&second[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}