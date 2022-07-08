#include <stdio.h>
#include <string.h>
struct employe
{
    int code;
    float salary;
    char name[30]; 
};
int main()
{
    struct employe e1, e2, e3;
    printf("enter the code for e1 :\n");
    scanf("%d", &e1.code);
    printf("enter the salary  for e1 :\n");
    scanf("%f", &e1.salary);
    printf("enter the name of  e1 :\n");
    scanf("%s", e1.name);

    printf("enter the code for e2 :\n");
    scanf("%d", &e2.code);
    printf("enter the salary  for e2 :\n");
    scanf("%f", &e2.salary);
    printf("enter the name of  e2 :\n");
    scanf("%s", e2.name);

    printf("enter the code for e3 :\n");
    scanf("%d", &e3.code);
    printf("enter the salary  for e3 :\n");
    scanf("%f", &e3.salary);
    printf("enter the name of  e3 :\n");
    scanf("%s", e3.name);
    return 0;
}