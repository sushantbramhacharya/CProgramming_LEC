#include<stdio.h>
struct Student
{
    char name[50];
    char sec;
    float marks[5];
    int age;
    int roll;
};
void main()
{
    struct Student student[6];
    float average[5],sum,avg_mark;
    char subjects[6][30]={"C Programming","Math","Microprocessor","English","Account"};
    for(int i=0;i<6;i++)
    {
        printf("Enter the Name of %d student : ",i+1);
        scanf("%s",student[i].name);
        fflush(stdin);
        printf("Enter the Section of %d student : ",i+1);
        scanf("%c",&student[i].sec);
        printf("Enter the Age of %d student : ",i+1);
        scanf("%d",&student[i].age);
        printf("Enter the Roll no of %d student : ",i+1);
        scanf("%d",&student[i].roll);
        printf("Enter the Marks of 5 subject %d student : \n",i+1);
        for(int j=0;j<5;j++)
        {
            printf("Enter the marks of %s : ",subjects[j]);
            scanf("%f",&student[i].marks[j]);
        }
        printf("-------------------------------------------------\n");
    }
    for(int i=0;i<5;i++)
    {
        sum=0;
        for(int j=0;j<6;j++)
        {
                sum+=student[j].marks[i];
        }
        average[i]=sum/6;
    }
    for(int i=0;i<6;i++)
    {
        printf("-----------------------Name : %s---------------------\nAge:%d\nRoll no:%d\nSection:%c\n",student[i].name,student[i].age,student[i].roll,student[i].sec);
        sum=0;
        for(int j=0;j<5;j++)
        {
            printf("%s mark is : %f\n",subjects[j],student[i].marks[j]);
            sum+=student[i].marks[j];
        }
        avg_mark=sum/5;
        printf("Average marks is %f\n",avg_mark);
    }
    printf("-------------------Average of All students------------------------\n");
    for(int i=0;i<5;i++)
    {
        printf("%s Average is %f.\n",subjects[i],average[i]);
    }
}
