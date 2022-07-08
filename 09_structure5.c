#include <stdio.h>
#include <string.h>
struct employe
{
    int code;
    float salary;
    char name[30];
};

void display(struct employe e1);
int main()
{
    struct employe a;
    struct employe *j;
    j = &a;
    j->code = 101;
    j->salary = 99.999;
    strcpy(j->name, "nitin");

    display(a);

    return 0;
}
void display(struct employe e1)
{
    printf("%f \n", e1.salary);
    printf("%d \n", e1.code);
    printf("%s \n", e1.name);
}