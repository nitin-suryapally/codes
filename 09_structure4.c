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
    struct employe *j;
    j = &e1;
    (*(j)).code = 101; // you can also use
    j->code = 100;
    printf("%d \n", e1.code);
    printf("%d \n", (*(j)).code);

    return 0;
}