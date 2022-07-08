#include <stdio.h>
#include <string.h>

typedef struct employ
{
    char emp_name[30];
    int salary;
    int mobile;
    char role[20];
    int id;

} em;

int main()
{
    em arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the name of %d employe \n", i + 1);
        gets(arr[i].emp_name);
        printf("enter the salary of %d employe \n", i + 1);
        scanf("%d", &arr[i].salary);
        printf("enter the id of %d employe \n", i + 1);
        scanf("%d", &arr[i].id);
        printf("enter the role of %d employe \n", i + 1);
        gets(arr[i].role);
        printf("enter the mobile number of %d employe \n", i + 1);
        scanf("%d", &arr[i].mobile);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("the name of %d employe is %s \n", j + 1);
        puts(arr[j].emp_name);
        printf("the salary of %d employe is %d \n", j + 1, arr[j].salary);
        printf("the name of role  %d employe is %s \n", j + 1);
        puts(arr[j].role);
        printf("the mobile number  of  %d employe is %d \n", j + 1, arr[j].mobile);
        printf("the id  of  %d employe is %d \n", j + 1, arr[j].id);
    }

    return 0;
}
