#include <stdio.h>
#include<string.h>


struct information
{
    int rollnum;
    int marks;
    int age;
    char name[10];
};
int main()
{
    struct information student[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the roll number of %d student \n", i + 1);
        scanf("%d", &student[i].rollnum);
        printf("enter the marks of %d student \n", i + 1);
        scanf("%d", &student[i].marks);
        printf("enter the age of %d student \n", i + 1);
        scanf("%d", &student[i].age);
        printf("enter the name of %d student \n", i + 1);
        scanf("%s",student[i].name);
    }

    for (int j = 0; j < 5; j++)
    {
        printf(" the roll number of %d student is %d\n", j + 1, student[j].rollnum);
        printf(" the marks of %d student is %d\n", j + 1, student[j].marks);
        printf(" the age of %d student is %d\n", j + 1, student[j].age);
        printf(" the name of %d studentis %s \n", j + 1, student[j].name);
    }

    return 0;
}