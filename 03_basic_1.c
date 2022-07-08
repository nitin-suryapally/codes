#include<stdio.h>

int main(){
int a,b;
printf("enter a number :\n");
scanf("%d",&a);

if(a%2==0){
    printf("the number is even\n");
}
else{
    printf("the number is odd\n");
}
return 0;
}