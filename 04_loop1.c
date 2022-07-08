#include<stdio.h>

int main(){
    int num,a;
printf("enter the number : \n");
scanf("%d",&num);

for(int i=1; i<=10; i++){
    a=i*num;
    printf("%d \n",a);
}
return 0;
}