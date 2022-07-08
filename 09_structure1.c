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
    struct employe e1;
    e1.code = 100;
    e1.salary = 99.999;
    // e1.name ='nitin'; this doesnt work
    strcpy(e1.name, "harry");

    printf("%f \n", e1.salary);
    printf("%d \n", e1.code);
    printf("%s \n", e1.name);
    return 0;
}