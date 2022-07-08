#include<stdio.h>
#include<string.h>

typedef struct employ{
    char name[10];
    int salary;
    char com[20];
    char loc[10];

}em;

int main(){
    em arr[5];
    for(int i=0; i<5; i++){
        printf("enter the name of %d employe \n",i+1);
        scanf("%s",&arr[i].name);
        printf("enter the salary of %d employe \n",i+1);
        scanf("%d",&arr[i].salary);
        printf("enter the company of %d employe \n",i+1);
        scanf("%s",&arr[i].com);
        printf("enter the location of %d employe \n",i+1);
        scanf("%s",&arr[i].loc);
    }
    for(int j=0; j<5; j++){
        printf("the name of %d employe is %s \n",j+1, arr[j].name);
        printf("the salary of %d employe is %d \n",j+1, arr[j].salary);
        printf("the name of company  %d employe is %s \n",j+1, arr[j].com);
        printf("the location of  %d employe is %s \n",j+1, arr[j].loc);
    }

return 0;
}

