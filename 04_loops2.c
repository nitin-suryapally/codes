#include<stdio.h>

int main(){
    int num,a;
printf("enter the number :\n");
scanf("%d",&num);

for(int i=10; i; i--){
    printf("%d X %d = %d\n",i,num,i*num);

}
return 0;
}