#include<stdio.h>

int main(){
int product=1;
int n;
printf("enter the number :");
scanf("%d",&n);
for(int i=n; i; i--){
    product*=i;

}
printf("%d",product);
return 0;
}