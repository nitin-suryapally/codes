#include <stdio.h>
#include <string.h>
#define num 4

struct Employee
{
    int Emp_id;
    int mobileNumber;
    char name[50];
    int salary;
    char Role[50];  
} employees[num];

void swap(struct Employee *temp1, struct Employee *temp2)
{
    struct Employee temp = *temp1;
    *temp1 = *temp2;
    *temp2 = temp;
}

void salarySort(struct Employee arr[]){
    int i=0,j=0;
    for(i=num;i>=0;i--)
    for(j=num;j>0;j--)
    if(arr[j].salary>arr[j-1].salary)
    swap(&arr[j],&arr[j-1]);
}

// void sortbyname(struct employees arr[]){
//     char name[4][10];
//     char temp[10];
//     for(int k=0; k<4; k++){

//        for(int x=0; x<10; x++) {
//            strcpy(name[k][x],employees[k].name);
//        } 
//     }

//     for(int i=0; i<4; i++){
//         for(int j=i+1; j<4; j++){
//             if(strcmp(name[i],name[j])>0){
//                 strcpy(temp, name[i]);
//                 strcpy(name[i], name[j]);
//                 strcpy(temp, name[i]);

//             }
//         }
//     }

//    for(int y=0; y<4; y++){

//        for(int z=0; z<10; z++) {
//            strcpy(employees[y].name ,name[y][z]);
//        } 
//     }
    

//     for(int h=0; h<4; h++){
//         printf("\n The name of the Employee is %s \n", employees[h].name);
//         printf("\n The Role of the Employee is %s \n", employees[h].Role);

//         printf("\n The Salary of the Employee is %d\n", employees[h].salary);
//         printf("\nThe Mobile Number of the Employee is %d\n", employees[h].mobileNumber);
//         printf("\nThe Id of the Employee is %d\n", &employees[h].Emp_id);
//     }
    


// }

int main()
{
    int i = 0;
    char c;
    for (i = 0; i < num; i++)
    {
        printf("\n Enter  the Name of employe %d \n",i+1);
        gets(employees[i].name);
         printf("\n Enter the Role of employe %d \n",i+1);
        gets(employees[i].Role);
        printf("\n Enter the Salary of employe %d \n",i+1);
        scanf("%d",&employees[i].salary);
        printf("\n Enter the mobile Number of employe %d \n",i+1);
        scanf("%d", &employees[i].mobileNumber);
        printf("\n Enter id of employe %d \n",i+1);
        scanf("%d", &employees[i].Emp_id);
        printf("\n");
        getchar();
    }

    salarySort(employees);
    printf("\n The details are \n");
    for (i = 0; i < num; i++)
    {
        printf("\n The name of the Employee is %s \n", employees[i].name);
        printf("\n The Role of the Employee is %s \n", employees[i].Role);

        printf("\n The Salary of the Employee is %d\n", employees[i].salary);
        printf("\nThe Mobile Number of the Employee is %d\n", employees[i].mobileNumber);
        printf("\nThe Id of the Employee is %d\n", &employees[i].Emp_id);
    }




    return 0;
}