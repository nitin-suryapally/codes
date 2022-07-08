#include<stdio.h>
#include <string.h>
struct employe
{
    int code;
    float salary;
    char name[30]; 
};
int main(){
    struct employe facebook[100];
    facebook[0].code=100;
    facebook[0].salary=100.00;
    strcpy(facebook[0].name, "nitin");
    // can creat for 100 employes

    printf("done");

return 0;
}