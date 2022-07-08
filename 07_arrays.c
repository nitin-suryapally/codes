#include<stdio.h>

int main(){
int arr[10]={1,2,3,4,5,6};
int*j=&arr[0];

printf("%d/n",(*(j+2)));
return 0;
}