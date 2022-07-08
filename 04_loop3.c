#include<stdio.h>

int main(){
    int sum=0,n;
    int i=0;
printf("enter the value of n\n");
scanf("%d",&n);

while(i<=n){
    
    sum+=i;
    i++;
    printf("sum of %d natural numbers is %d\n",n,sum);
}
return 0;
}