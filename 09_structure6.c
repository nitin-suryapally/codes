#include<stdio.h>
#include <string.h>
typedef struct employe
{
    int code;
    float salary;
    char name[30];
}emp;
int main(){
emp a;
    emp *j;
    j = &a;
    j->code = 100;
    printf("%d \n", a.code);
    printf("%d \n", (*(j)).code);
return 0;
} 