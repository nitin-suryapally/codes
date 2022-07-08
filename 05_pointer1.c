#include<stdio.h>

int main(){
int i=6;
int*j=&i;
printf("the address of i is %d \n",j);
// printf("the address of i is %c \n",&i);
printf("value in i is %d\n",(*j));
return 0;
}