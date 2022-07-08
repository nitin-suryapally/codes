#include<stdio.h>

int main(){
int  i=0;
int*j=&i;
int**k=&j;

printf("the value of in i is %d\n",(*(*k)));
return 0;
}